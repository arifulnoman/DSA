#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1,j,n,count;
    cin >> n;
    while(i <= n)
    {
        j = 1;
        count = 1;
        while (j <= n)
        {
            if(j >= n-i+1)
            {
                cout << count;
                count++;
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        if(j == n+1 && i > 1)
        {
            int k = count-2;
            while(k >= 1)
            {
                cout << k;
                k--;
            }
        }  
        cout << endl;    
        i++;
    }
}