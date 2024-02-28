#include <iostream>
using namespace std ;

int main()
{
    int i;
    int j;
    int k;
    for(i=1 ; i<=5 ;i++)
    {
        for(k=5;k>i;k--){
            cout<<"  " ;
        }
        for(j=1 ;j<=i ;j++){
            cout<<j<<" " ;
        }
        cout<<endl ;
    }
    

    return 0;
}



// #include <iostream>
// using namespace std ;

// int main()
// {
//     int i;
//     int j;
//     int k;
//     for(i=5 ; i>=1 ;i--)
//     {
//         for(k=5;k>i;k--){
//             cout<<"  " ;
//         }
//         for(j=1 ;j<=i ;j++){
//             cout<<j<<" " ;
//         }
//         cout<<endl ;
//     }
    

//     return 0;
// }