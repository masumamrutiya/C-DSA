#include <iostream>
using namespace std ;
int main()
{
   int i;
   int j;
   int n;
   int row;
   
   cout<<"Enter rows :- ";
cin>>row ;

for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        cout<<n<<" ";
        n++;
    }
    cout<<endl;
}
    return 0;
}

#include <iostream>
using namespace std ;
int main()
{
   

for(int i=1;i<=5;i++)
{
    for(int k=5;k>i;k--)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<"* ";
    
    }
    cout<<endl;
}
    return 0;
}


#include <iostream>
using namespace std ;
int main()
{
   int i;
  


for(i=1;i<=5;i++){
   if( i==1 || i==3 ){
       cout<<"* * * * *";
   }
   else{
       cout<<"*       *";
   }
    cout<<endl;
}
    return 0;
}




