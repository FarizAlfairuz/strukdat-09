/*
Nama        : Falah Rizqi Abudllah Fairuz
NPM         : 140810180069
Deskripsi   : exercise-01
Kelas       : A
*/

#include<iostream>
using namespace std;

const int maxElement = 255;

struct stack
{
    char isi[maxElement];
    int top;
};

stack s;

void createStack (stack& s)
{
    s.top = -1;
}

void push (stack& s, char elemenBaru)
{
    if (s.top == maxElement-1)
    {
        cout << "Stack Full" << endl;
    }
    else
    {
        s.top += 1;
        s.isi[s.top] = elemenBaru;
    }
}

void pop (stack& s, char& elementHsl)
{
    if (s.top < 0)
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        elementHsl = s.isi[s.top];
        s.top -= 1;
    }
}

main()
{
    int n;
    char baru, hasil;
    createStack(s);
    cout << "Num : "; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Input : "; cin >> baru;
        push(s,baru);
    }
    cout << "Output" << endl;
    for(int i = 0; i < n; i++)
    {
        pop(s,hasil);
        cout << hasil << " ";
    }
}