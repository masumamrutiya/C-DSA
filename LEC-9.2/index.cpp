#include <iostream>
using namespace std;



int main ()
{
    int rahul = 100;
    int &kana = rahul; 
    int raj = rahul; 

    cout << rahul << " & " << kana << endl;
    cout << rahul << " & " << raj << endl;

    kana = 500;

    cout << "Deep copy :"<< rahul << " & " << kana << endl;
    cout << "Shallow copy :"<< rahul << " & " << raj << endl;
    return 0;
}


void addition(int a, int b)
{
    cout << "Addition is : " << a+b<<endl;
} 
int main ()
{
    int x=10,y=40;
    addition(5,3);
    addition(x,y); 
    return 0;
}


void func(int n[])
{
    cout <<n[0] <<endl;
}
int main ()
{
    int a[]={5,8,3};
    func(a); 
    return 0;
}



void func(int *ptr)
{
    cout <<ptr<<" & " << *ptr<< endl;
}
int main ()
{
    int a= 6;
    int *p=&a;
    func(p); 
    return 0;
}


void func(int *ptr)
{
    cout << *ptr;
}
int main ()
{
    int a = 5;
    func(&a); 
    return 0;
}



void hello(int n)
{
    n = n+10;
}

int main ()
{
    int a = 7;
    cout << "Before : " << a << endl;
    hello(a);// 
    cout << "Before : " << a << endl;
    return 0;
}



void hello(int &n) 
{
    n = n+10;
}

int main ()
{
    int a = 5;
    cout << "Before : " << a << endl;
    hello(a);
    cout << "Before : " << a << endl;
    return 0;
}



void hello(const int &n) 
{
    cout << "n : "<< n * n<< endl;
}

int main ()
{
    int a = 5;
    cout << "Before : " << a << endl;
    hello(a);
    cout << "Before : " << a << endl;
    return 0;
}