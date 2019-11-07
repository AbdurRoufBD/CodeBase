#include<algorithm>
#include<vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int arrQ[q];
    for(int i = 0; i < q; i++)
    {
        cin>>arrQ[i];
    }

    sort(arr,arr+n);

    /*for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }*/

    //binary search part



    for(int i = 0; i < q; i++)
    {
        int low = 0;
        int high = n-1;
        int mid = (low+high)/2;
        while(1)
        {
            if(arr[mid] == arrQ[i])
            {
                break;
            }
            else if(high == low && low == mid)
            {

            }
            else if(arr[mid] > arrQ[i])
            {
                if(mid>0 && arr[mid-1] <= arrQ[i])
                {
                    break; // break condition
                }
            }
        }
    }


    return 0;
}
