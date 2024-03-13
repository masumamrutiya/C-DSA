#include <iostream>
using namespace std;

// Q-1 Create a menu-driven program to perform CRUD operations on given 1D Arrary.

int main()
{
    int size;

    int pos, elem;

    cout << "Enter Array size : ";
    cin >> size;

    int a[size];

    cout << "Enter Array Elements : ";

    for (int i = 0; i < size; i++)
    {
        cout << "Enteer a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "==========================" << endl
         << endl;

    int choice;

    do
    {
        cout << "Press 1 for Insert an element" << endl;
        cout << "Press 2 for Update an element" << endl;
        cout << "Press 3 for Delete an element" << endl;
        cout << "Press 4 for View all element" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "Enter Position : ";
            cin >> pos;

            cout << "Enter New Element : ";
            cin >> elem;

            for (int i = size - 1; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            size++;

            a[pos] = elem;

            cout << "Element Insert Sucessfully...";
            cout << endl;
            break;
        case 2:

            cout << "Enter Position : ";
            cin >> pos;

            cout << "Enter New Element : ";
            cin >> elem;

            a[pos] = elem;

            cout << "Element Updated Sucessfully..." << endl;

            break;
        case 3:
            cout << "Enter Position : ";
            cin >> pos;

            for(int i=pos+1; i<size; i++){
               a[i-1] = a[i];  
            }
            size--;
            cout << "Elewment Delet Sucessfully..."<<endl;
            break;
        case 4:
            cout << endl
                 << "Array is : ";
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        case 0:
            break;
        default:
            cout << "Enter valid choise..." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}