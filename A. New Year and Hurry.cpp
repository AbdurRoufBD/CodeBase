#include<iostream>
using namespace std;

int main()
{
    int total_time = 240;

    int n,time_to_arrive;
    cin>>n>>time_to_arrive;

    int time= 99999;
    while(1)
    {
        time = (5*n*(n+1))/2;
        time += time_to_arrive;

        if(time > total_time)
        {
            n--;
            continue;
        }
        else break;
    }

    cout<<n;

}
