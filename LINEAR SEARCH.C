#include<iostream>
using namespace std;

int main()
{
    int A[20], i, j, n, t;
    cout << "ENTER THE NO. OF ELEMENTS OF ARRAY \n";
    cin >> n;
    cout << "ENTER THE ELEMENTS OF ARRAY \n";
    for(i = 0; i < n ; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    cout << "SORTED ARRAY \n";
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
  