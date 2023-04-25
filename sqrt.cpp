#include <bits/stdc++.h>
using namespace std;
double more_precision(int n,double result,int digit)
{
    double factor = 1;
    int i = 0;
    double ans = result;
    for(i = 0;i < digit;i++)
    {
        factor = factor/10;
        for(double j = ans;j*j < n;j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int sqrt(int n)
{
    int start = 0;
    int end = n;
    int ans = 0;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(mid*mid == n)
        {
            return mid;
        }
        else if(mid*mid > n)
        {
            end = mid-1;
        }
        else
        {
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp_solution =  sqrt(n);
    double result = more_precision(n,temp_solution,3);
    cout << result << endl;
}