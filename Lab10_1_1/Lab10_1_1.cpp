// Lab10_1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CreateTXT(char* t) 
{
    ofstream fout(t); 
    char ch; 
    string s; 
    do
    {
        cin.get(); 
        cin.sync(); 
        cout << "enter line: "; getline(cin, s); 
        fout << s << endl; 
        cout << "continue? (y/n): "; cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << endl;
}
void PrintTXT(char* t) 
{
    ifstream fin(t); 
    string s; 
    while (getline(fin, s))
    {
        cout << s << endl; 
    }
    cout << endl;
}
int ProcessTXT1(char* t) 
{
    ifstream fin(t); 
    string s; 
    int k = 0; 
    while (getline(fin, s)) 
    { 
        for (unsigned i = 0; i < s.length(); i++)
            if (s[i] == '+' || s[i] == '-' || s[i] == '=')
                k++;
    }
    return k;
}
int main()
{
    char t[100]; 
    cout << "enter file name : "; cin >> t;

    CreateTXT(t);
    PrintTXT(t); 

    cout << "k(+-=) = " << ProcessTXT1(t) << endl;

    return 0;
}

