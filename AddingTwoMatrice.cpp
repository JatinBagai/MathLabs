#include <iostream>
using namespace std;

int main(){

    int r, c;
    cout << "Enter the order of the matrices: ";
    cin >> r >> c;
    int arr1[r][c], arr2[r][c], arr3[r][c];
    cout << "Enter the elements of the first matrix: " << "\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << "\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> arr2[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "The resultant matrix is: " << "\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}