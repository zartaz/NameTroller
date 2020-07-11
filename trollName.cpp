#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <bits/stdc++.h>
#ifdef _WIN32
#include <windows.h>

void ypnos(int milliseconds)
{
    Sleep(milliseconds);
}
void cls()
{
    system("cls");
}
#else
#include <unistd.h>

void ypnos(int milliseconds)
{
    usleep(milliseconds * 1000); // takes microseconds
}
void cls()
{
    system("clear");
}
#endif
using namespace std;

int main()
{
    int secs = 3000;
    string onoma;
    cout << "Pliktrologise to onoma sou kai pata enter!" << endl;
    cin >> onoma;
    cls();
    cout << "Ti????"<<endl;
    ypnos(secs);
    cls();
    cout << onoma << "???"<<endl;
    ypnos(secs);
    cls();
    cout << "Pio xazo onoma apo to " << onoma << " den exw ksanakousei..." << endl;
    ypnos(secs);
    cls();
    cout << "filika sto lew axaxaxax" << endl;
    transform(onoma.begin(), onoma.end(), onoma.begin(), ::toupper);
    ypnos(secs);
    cls();
    for (int i = 0; i < onoma.length(); i++)
    {
        cout << onoma[i] << endl;
        ypnos(500);
    }
    cout << "akou ekei onoma :D" << endl;
    ypnos(secs);
    cls();
    cout << "xaxaxaxaxax" << endl;
    ypnos(secs);
    cls();
    cout << "ante geia mpoumpouna "<<onoma<<" !!!"<<endl;
    ypnos(secs);
    return 0;
}
