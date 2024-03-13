#include <iostream>
using namespace std;

// Q-1 Find Average of all Element of 2D Array.

int main ()
{
    int a[5][5]={{4, 9, 3, 5, 2},
                 {8, 3, 7, 4, 8},
                 {2, 5, 1, 3, 6},
                 {6, 4, 9, 4, 3},
                 {8, 2, 1, 7, 9},};

        int length = sizeof(a) / sizeof(a[0][0]);

        int sum = 0;

        for(int i=0; i<=4; i++){
            for(int j=0; j<=4; j++){
                sum = sum + a[i][j];
            }
        }

        cout << "Sum is : " << sum << endl;
        cout << "length is : "<< length << endl;
        cout << "Average is : " << sum / length << endl;

    return 0;
}

// Q-2 Perform addition of two 2D Arrays and store into another array.

int main ()
{
    int n ; // user input for row and column

    int i , j; // i for outer loop j for inner loop

    cout << "Enter Row & Column Size : ";
    cin >> n;

    // square matrix

    int a[n][n]; // 1st array
    int b[n][n]; // 2nd array

    int c[n][n]; // 3rd array for store addition

    cout <<"Enter Array a : " << endl;

    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            cout <<"Enter a["<< i <<"] ["<< j <<"] : ";
            cin >> a[i][j];
        }
    }

    cout << endl << "======================" << endl;

    cout <<"Enter Array b : " << endl;

    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            cout <<"Enter b["<< i <<"] ["<< j <<"] : ";
            cin >> b[i][j];
        }
    }

    cout << endl << "======================" << endl;

    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
          c[i][j] = a[i][j] + b[i][j];
        }
    }

    // for print 3rd array
    cout << "Array c : " << endl;
     for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
          cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q-3 Print Boundary Elements.

int main ()
{
    int a[5][5]={{4, 9, 3, 5, 2},
                 {8, 3, 7, 4, 8},
                 {2, 5, 1, 3, 6},
                 {6, 4, 9, 4, 3},
                 {8, 2, 1, 7, 9},};

    int i ,j ;// i for outer loop j for inner loop

    for (i=0; i <= 4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << a[i][j] << " "; // cout << "  ";---for inner elem print
            }
            else
            {
                cout << "  "; // cout << a[i][j] << " ";--- for inner elem print
            }
        }
        cout << endl;
    }
    return 0;
}

// Q-4 Print Diagonal elements.

int main ()
{
    int a[5][5]={{4, 9, 3, 5, 2},
                 {8, 3, 7, 4, 8},
                 {2, 5, 1, 3, 6},
                 {6, 4, 9, 4, 3},
                 {8, 2, 1, 7, 9},};

    int i ,j ;// i for outer loop j for inner loop

    int sum = 0; // diagonal sum

    for (i=0; i <= 4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(i == j)
            {
                cout << a[i][j] << " ";
                sum = sum + a[i][j];
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "Sum is : " << sum << endl;

    return 0;
}

// Q-5 Print Row-wise & Column-wise sum.

int main()
{
    int r, c; // user input for row and column

    int i, j; // i for outer loop j for inner loop

    int choice;

    int row_sum = 0;
    int col_sum = 0; 

    cout << "Enter Row Size : ";
    cin >> r;
    cout << "Enter column Size : ";
    cin >> c;

    int a[r][c];

    cout << "Enter Array Elements : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    do
    {
        cout << "Press 1 for Row-wise sum" << endl;
        cout << "Press 2 for Column-wise sum" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int row_index;
            cout << "Enter row index : ";
            cin >> row_index;    

            for (i = 0; i < r; i++)
            {
                for(j = 0; j < c; j++)
                {
                   if(i == row_index)
                   {
                     row_sum = row_sum + a[i][j];
                   }
                }
            }          
            cout << "Row-wise sum is : " << row_sum << endl;
            break;
        case 2:
            int col_index;
            cout << "Enter Column index : ";
            cin >> col_index;    

            for (i = 0; i < r; i++)
            {
                for(j = 0; j < c; j++)
                {
                   if(j == col_index)
                   {
                     col_sum = col_sum + a[i][j];
                   }
                }
            }
            cout << "Column-wise sum is : " << col_sum << endl;
            break;
        case 0:
            break;
        default:
            cout << "Enter valid choice..." << endl;
        }
    } while (choice != 0);

    return 0;
}