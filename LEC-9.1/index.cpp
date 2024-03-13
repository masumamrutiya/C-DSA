#include <iostream>
#include <stdio.h>
using namespace std;

// pointer

int main ()
{
    int a = 5;

    printf("Address of a is: %d",&a);
    return 0;
}

// derefrencing pointer

int main ()
{
    int a = 5;
    int *p; //  pointer p

    p = &a; // pointer ni andar  a nu address store krryu

    printf("Address of a is: %d\n",p);
    printf("Value of a is: %d",*p); // value of p
    return 0;
}

// Array of pointer

int main ()
{
    int a[5]={1,2,3,4,5}; // array

    int *p[5]; // pointer of array

    int i ; // for loop 

    for (i=0; i<=4; i++)
    {
        p[i] = &a[i];
    }
    for(i=0; i<=4; i++)
    {
        printf("Address is :%d, Value is :%d\n",p[i],*p[i]);
    }
    return 0;
}

// Chain of pointer / pointer to pointer / chain of pointer 
int main ()
{
    int a = 5;

    int *p1 = &a; // pointer 1 store address of a
    int **p2= &p1; // pointer 2 store pointer p1

    cout << a << endl;
    cout << *p1 << endl;
    cout << **p2 << endl;

    return 0;
}