#include <iostream>
using namespace std ;

int main()
{
    int a[5] ;
    int i;
    int size;
    
    cout<<"Enter Array Size :- ";
    cin>>size;
    
    for(i=0 ;i<size;i++)
    {
        cout<<"Enter Array Elements :- ";
        cin>>a[i];
    }
    
    
cout<<"Array Elements :- "<<endl;

   for(i=0;i<size;i++)
   {
       cout<<a[i]<<endl ;
   }

a[3]=18 ;

cout<<"Array Elements :- "<<endl;

   for(i=0;i<size;i++)
   {
       cout<<a[i]<<endl ;
   }
    return 0;
}