#include <bits/stdc++.h>
using namespace std;
int find_pivot_element(int arr[],int n)
{
    int first = 0;
    int last = n-1;
    while(first < last)
    {
        int mid = first + (last-first)/2;
        if(arr[mid] < arr[mid+1] && arr[mid-1] > arr[mid])
        {
            return arr[mid];
        }
        else if(arr[mid] < arr[first])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return arr[first];
}
int main()
{
    int arr[] = {18,29,38,10,12,15,16,17};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int result = find_pivot_element(arr,arr_size);
    cout << result;
    return 0;
}