#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

bool ok = true;
bool ok2 = false;
short int choice;
std::string ascdesc;

class Ascii
{
private:
    int n = 0;
    int cod;
    int v[100];

public:
    friend std::ostream& operator << (std::ostream& out, const Ascii& c) {
        out << char(c.cod) << " ";
        return out;
    }
    friend std::istream& operator >> (std::istream& in, Ascii& c) {
        in >> c.cod;
        return in;
    }
    void sortare() {

        if (ascdesc == "Ascending")
            std::sort(v, v + n, std::greater<int>());
        else
            std::sort(v, v + n);
    }
  
    void cinandcout(std::string nume,std::string& value) {
        std::string file = "";
        std::ifstream f(nume);
        std::ofstream g1("out1.txt");
        while (f >> *this) {
            if (choice == 2){
                if (!ok) {
                    g1 << *this;
                }
                this->v[n] = this->cod;
                file = file + char(v[n++]);
            }
            else {
                g1 << *this;
                 this->v[n++] = this->cod;
            }
            value = file;
        }
        g1.close();
    }
    void Sorted(std::string& value) {
        n--;
        std::string file;
        std::ofstream g2("out2.txt");
        while (n >= 0) {
            if (choice == 2) {
                if (!ok) {
                    g2 << char(v[n]) << " ";
                }
                file = file + char(v[n--]);
            }
            else {
                g2 << char(v[n--]) << " ";
            }
        }
        value = file;
        g2.close();
    }
};

Void Project1::MyForm::gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (ok2) {
        Ascii c1;
        std::string value;
        c1.cinandcout(marshal_as<std::string>(OpenFile->FileName),value);
        OriginalString->Text = marshal_as<String^>(value);
        OriginalString->Visible = true;
        c1.sortare();
        c1.Sorted(value);
        SortedString->Text = marshal_as<String^>(value);
        SortedString->Visible = true;

    }
    else {
        FileName->Text = "Select a file!";
        FileName->ForeColor = Color::Red;
    }
}

Void Project1::MyForm::but_Click(System::Object^ sender, System::EventArgs^ e) {
    if (ok) {
        ok = false;
    }
    else {
        ok = true;
    }
}


void Project1::MyForm::iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFile->Filter = "TXT|*.txt";
    if (OpenFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        FileName->ForeColor = Color::FromArgb(128, 128, 255);
        FileName->Text = OpenFile->SafeFileName;
        ok2 = true;
    }
}

Void Project1::MyForm::Alegeri_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
     ascdesc = marshal_as<std::string>(Alegeri->Text);
}

[STAThreadAttribute]
int main(array <String^>^ args) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "\tBun venit!\n\t Acesta este meniul de intrare in aplicatie!\n\t";
    std::cout << "Ce model de aplicatie doriti sa utilizati?\n\t1)Consola\n\t2)Aplicatie Vizuala\n\tAlege > "; std::cin >> choice;
    while (std::cin.fail() || (choice > 2 || choice < 1)) {
        std::cin.ignore(80, '\n');
        std::cin.clear();
        std::system("cls");
        std::cout << "\tVa rugam alegi doar valori valide!\n";
        std::cout << "\tBun venit!\n\tAcesta este meniul de intrare in aplicatie!\n\t";
        std::cout << "Ce model de aplicatie doriti sa utilizati?\n\t1)Consola\n\t2)Aplicatie Vizuala\n\tAlege > "; std::cin >> choice;
    }
    if (choice == 2) {
        system("cls");
        std::cout << "Aplicatia dumneavostra a "; SetConsoleTextAttribute(hConsole, 2);std::cout << "PORNIT!" << std::endl;
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        Project1::MyForm form;
        Application::Run(% form);
        
    }else{
        Ascii c1;
        std::string value = "";
        ascdesc = "Ascending";
        c1.cinandcout("in.txt",value);
        c1.sortare();
        c1.Sorted(value);
    }
    return 0;
}
