#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime[1000001];

void Sieve()
{
    int N = 1000000;
    int sq = 1000;

    for(int i = 4; i <= N ; i+=2) isPrime[i] = true;
    for(int i = 3; i <= sq; i+=2)
    {
        if(isPrime[i] == false)
        {
            for(int j = i*i; j <= N; j+=i) isPrime[j] = true;
        }
    }
    isPrime[1] = true;
}




int main()
{
    int n;
    cin>>n;

    long long arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Sieve();


    for(int i = 0; i < n ; i++)
    {
        double temp = sqrt(arr[i]);
        long long tempInt = temp;
        if(temp != tempInt)
            cout<<"NO"<<endl;
        else
        {
            if(!isPrime[tempInt]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}
