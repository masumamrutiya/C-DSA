// #include <iostream>
// using namespace std ;
// int main()
// {
    
//     int i=1 ;
//     int  num ;
    
//     cout<<"Enter Any Number :- ";
//     cin>>num ;
    
//     for(i=1 ; i<=10 ;i++){
//         cout<<num<<" x "<< i <<" = "<<num*i<<endl ;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std ;
// int main()
// {
    
//     int sum =0 ;
//     int  num ;
//     int ld;
    
//     cout<<"Enter Any Number :- ";
//     cin>>num ;
    
//     while(num>0){
//         ld=num%10 ;
//         sum=sum+ld ;
//         num=num/10 ;
//     }
//   cout<<sum; 
   

//     return 0;
// }


#include <iostream>
using namespace std ;
int main()
{
    
    int sum = 0;
    int  num ;
    int fd;
    int ld;
    
  
    
    cout<<"Enter Any Number :- ";
    cin>>num ;
    
    ld = num % 10 ;
    
    while(num>=10){
       
        num=num/10 ;
    }
 
   fd=num;
   sum =fd+ld ;
   cout << sum <<endl ;
   

    return 0;
}