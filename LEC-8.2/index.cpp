#include <iostream>
using namespace std;

// Q-1 TNRS take nothing return something example
// without parameters, with return value

// function declare / protype
char hotel();

int main ()
{
   cout << hotel();
    return 0;
}

// function definition
char hotel()
{
    char a = 'P';
    char b = 'S';
    char c = 'B';
    return b;
}

// Q-2 TSRS take something return something
// with parameters , with return value

//function declaration / prototype
int get_cube(int);

int main ()
{
    cout << "Cube is : " << get_cube(2) << endl;
    cout << "Cube is : " << get_cube(3) << endl;
    cout << "Cube is : " << get_cube(4) << endl;
    cout << "Cube is : " << get_cube(5) << endl;

    // another method
    int b = get_cube(6);
    cout <<"Cube is : "<<b;

    return 0;
}

// function definition
int get_cube(int a)
{
    return a*a*a;
}

// Q-3 Nested Function

// function declare / prototype
void shyam();
void ram();

int main ()
{
    ram();
    return 0;
}

// function definition
void ram()
{
    cout << "I am Ram" << endl;
    shyam();
}
void shyam()
{
    cout << "I am shyam" << endl;
}

// Q-4 Recursion example

/*
    Factorial of number N = 3

    3! => 3 x 2 x 1 => 6
*/

// function declare / prototype
int fact(int);

int main ()
{
    cout << "Factorial is : "<<fact(3) << endl;
    return 0;
}

// function definition

int fact(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}