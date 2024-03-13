#include <iostream>
using namespace std;

// Q-1 Use of  TNRN (Take Nothing Return Nothing) Function

// without parameter , no return value 

// function declartion

void Harsh();
void Nick();

int main (){

    Nick(); // function calling
    Harsh(); // function calling
    return 0;
}

// function definition

void Nick() // function definition
{
    cout << "My Name is Nick" << endl;
    cout << "My Age is 21" << endl;
}

void Harsh() // function definition
{
    cout << "My Name is Harsh" << endl;
    cout << "My Age is 22" << endl;
}

// Q-2 Use of  TSRN (Take Something Return Nothing) Function

// with parameter , no returen value 

// function declaration

void addition(int , int );
void mul(int , int );
void division(int , int );
void sub(int , int );
void Modul(int , int );

int main ()
{
    addition(5,4); // argument passing
    mul(2,4);
    division(7,4);
    sub(9,4);
    Modul(7,4); 

    return 0;
}

// function definition

void addition(int a, int b) // parameter passing
{
    cout << "Addition is : " << a+b << endl;
}

void mul(int a, int b) // parameter passing
{
    cout << "Multiplication is : " << a * b << endl;
}

void division(int a, int b) // parameter passing
{
    cout << "Division is : " << a / b << endl;
}

void sub(int a, int b) // parameter passing
{
    cout << "Subtraction is : " << a - b << endl;
}

void Modul(int a, int b) // parameter passing
{
   cout << "Module is : " << a % b << endl;
}

// Q-3 Function Declaration

// function declaration / prototype

void Tej(); 
void nick();
void Tejnick();

int main (){

    Tej();
    nick();
    Tejnick();

    return 0;
}

// // function definition

void Tej()
{
    cout << "hello" << endl ;
}
void nick()
{
    cout << "hey" << endl ;
}
void Tejnick()
{
    cout << "how are you" << endl;
}