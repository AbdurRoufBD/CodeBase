#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    long long l;

    cin>>n>>l;

    long long arr[n];

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    /*cout<<"Check : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    double dist[n+1];

    dist[0] = arr[0] - 0;

    for(int i = 1; i < n ; i++)
    {
        dist[i] = double((arr[i] - arr[i-1])/2.0);
    }
    dist[n] = l - arr[n-1];

    double maxima = -999999;
    for(int i = 0; i < n+1; i++)
    {
       if(dist[i] > maxima) maxima = dist[i];
    }

    printf("%.9f ",maxima);

    return 0;

    /*cout<<"Check : ";
    for(int i = 0; i < n ; i++)
    {
        printf("%.9f ",dist[i]);
    }
    cout<<endl;*/
}
