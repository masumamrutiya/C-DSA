#include <iostream>
using namespace std ;

int main()
{
    
int a[5]={9,4,7,2,5};
for(int e : a){
    cout<<e<<endl;
}

int a=15;
cout<<"Size In Bites :- "<<sizeof(a);

int arry[5]={6,4,8,9,3};
cout<<"Size In Bites :- "<<sizeof(arry) ;

    return 0;
}




// #include <iostream>
// using namespace std ;

// int main()
// {
//  int sum=0;
//  int a[4]={10,10,10,10};
//  for(int i=0 ; i<4 ; i++){
//      sum+=a[i];
//  }
 
//  cout<<"Average is :- "<<sum/4;
//     return 0;
// }


// #include <iostream>
// using namespace std ;

// int main()
// {
//     int n;
//     int i;
//     cout<<"ENTER ARRAY SIZE :- ";
//     cin>>n;
//     int a[n];
//     int b[n];
//     int c[n];
    
//     for(i=0;i<n;i++)
//     {
//         cout<<"ENATER A["<<i<<"] :- ";
//         cin>>a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<"ENATER B["<<i<<"] :- ";
//         cin>>b[i];
//     }
    
//     for(i=0;i<n;i++)
//     {
//       c[i]=a[i]+b[i];
//     }
    
//     cout<<endl<<endl<<"ARRAY c :- ";
    
//     for(i=0;i<n;i++)
//     {
//         cout<<c[i]<<"  ";
        
//     }
    
    
//     return 0;
// }


// #include <iostream>
// using namespace std ;

// int main()
// {
    
//     int start;
//     int end;
//     int n;
//     int a[100];
//     int i;
//     int count = 0;
    
//     cout<<"Enter Start Year :- ";
//     cin>>start;
//      cout<<"Enter End Year :- ";
//     cin>>end;
    
//     for(n=start ,i=0; i<end n<=end ;n++ ,i++){
//         if(n%4==0){
//             a[i]=n;
//             count++;
//         }
//     }
    
//     cout<<endl<<"Array Is :- ";
//     for(i=0;i<count;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl ;
    
    
//     return 0;
// }