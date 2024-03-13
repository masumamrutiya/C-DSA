#include <iostream>
using namespace std;

// example of 2D array

int main (){

    int a[3][3]={{ 1, 2, 3 },
                 { 4, 5, 6 },
                 { 7, 8, 9 }};

        cout << a[1][0] << endl;
    return 0;
}

// index-wise dynamic insertion

int main()
{
    int r ,c ; // user input 

    cout << "Enter row size : ";
    cin >> r;

     cout << "Enter column size : ";
    cin >> c;

    int a[r][c];
    int i, j;

    for (i = 0; i < r; i++) // outer loop for row
    { 

        for (j = 0; j < c; j++) // inner loop for column
        {
            cout << "Enter a["<< i <<"]["<< j <<"] : ";
            cin >> a[i][j];
        }

    }
    cout << endl << endl << "==================="<< endl << endl;

    cout << "Array is : "<<endl;

    for (i = 0; i < r; i++) // outer loop for row
    { 

        for (j = 0; j < c; j++) // inner loop for column
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}