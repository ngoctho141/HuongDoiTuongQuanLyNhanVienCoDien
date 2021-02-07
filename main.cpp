#include "QuanLyNhanVien.h"
#include <iostream>
using namespace std;

int main()
{
    QuanLyNhanVien personalverwaltung("daten.txt");
    cout << "Gelesene Namen und Personalnummern:\n";
    personalverwaltung.ketquatimkiem();
    personalverwaltung.hoithoai();
    cout << "Programmende\n";
}