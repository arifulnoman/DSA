#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    cin >> n;
    i = 1;
    int count = 1;
    while(i <= n)
    {
        j = 1;
        while(j <= n)
        {
            if(j >= n-i+2)
            {
                cout << "*";
            }
            else
            {
                cout << count;
                count++;
            }
            j++;
        }
        if(j == n+1)
        {
            k = 1;
            while(k <= n)
            {
                if(k <= i-1)
                {
                    cout << "*";
                }
                else
                {
                    count--;
                    cout << count;
                }
                k++;
            }
        }
        cout << endl;
        i++;
    }
}