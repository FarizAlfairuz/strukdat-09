/*
Nama        : Falah Rizqi Abudllah Fairuz
NPM         : 140810180069
Deskripsi   : exercise-02
Kelas       : A
*/

#include<iostream>
using namespace std;

struct Stack
{
    char info;
    Stack* next;
};

typedef Stack* pointer;
typedef pointer stack;

void createTop(stack& top)
{
    top = NULL;
}

void createStack(pointer& baru)
{
    baru = new Stack;
    cout << "Input : "; cin >> baru->info;
    baru->next = NULL;
}

void push(stack& top, pointer baru)
{
    if (top == NULL)
    {
        top = baru;
    }
    else
    {
        baru->next = top;
        top = baru;
    }
}

void pop(stack& top, pointer& hasil)
{
    if (top == NULL)
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        hasil = top;
        top = top->next;
        hasil->next = NULL;
    }
}

main()
{
    stack t;
    pointer pBaru, pHasil;
    int n;

    createTop(t);
    cout << "Banyak data : "; cin >> n;
    for(int i = 0; i < n; i++)
    {
        createStack(pBaru);
        push(t,pBaru);
    }
    cout << "Output" << endl;
    for(int i = 0; i < n; i++)
    {
        pop(t,pHasil);
        cout << pHasil->info << " ";
    }
    
}