#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    float mat[10][10], ans[10], r;
    int n;
    cout << "Enter the number of unknown variables: ";
    cin >> n;
    cout << "Enter the elements of augmented matrix: " << "\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            cout << "mat[" << i+1 << "][" << j+1 << "] = ";
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(mat[i][i] == 0.0)
        {
            cout << "Mathematical Error!";
            return 0;
        }
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                r = mat[j][i] / mat[i][i];
                for(int k=0; k<n+1; k++)
                {
                    mat[j][k] = mat[j][k] - r* mat[i][k];
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        ans[i] = mat[i][n+1] / mat[i][i];
    }

    cout << "\nResult: \n";
    for(int i=0; i<n; i++)
    {
        cout << "ans[" << i << "] = " << ans[i] << "\n";
    }
    return 0;
}
