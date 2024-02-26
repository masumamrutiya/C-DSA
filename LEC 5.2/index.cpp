// #include <iostream>
// using namespace std ;
// int main()
// {
//     int i= 1;
//     int n;
//     int sum;
    
//     cout << "Enter Any Number " <<endl;
//     cin>>n ;

//     while(i<=n){
//         sum+=i ;
//         i++ ;
//     }
    
//     cout<< sum<<endl ;

//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main()
// {
   
//  int i= 1;
//     int n;
//     int fact=1;
     
//      cout << "Enter Any Number" ;
//      cin>>n;
     
//      i=n ;
//      while(i>=1){
//         fact= fact*i ;
//          i-- ;
//      }
//  cout<<fact ;
//     return 0;
// }




#include <iostream>
using namespace std ;
int main()
{
   
    int i= 1;
    int n;
 
     
     cout << "Enter Any Number :- " ;
     cin>>n;
     
     while(i<=n){
         if(n%i==0){
             cout<<i<<endl;
         }
         i++ ;
     }
     

    return 0;
}
