#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> pile;


    int temp;
    cin>>temp;
    pile.push_back(temp);
    for(int i = 1; i < n ; i++)
    {
        int temp;
        cin>>temp;
        pile.push_back(temp+pile[i-1]);
    }

    /*for(int i = 0; i < n ; i++)
    {
        cout<<pile[i]<<" ";
    }*/

    int m;
    cin>>m;

    for(int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;

        int low = 0;
        int high = n-1;
        int mid = (high+low)/2;

        while(1)
        {
            if(pile[mid] == temp)
            {
                cout<<mid+1<<endl;
                break;
            }
            else if(mid == high && mid == low)
            {
                cout<<mid+1<<endl;
                break;
            }
            else if(pile[mid] > temp)
            {
                high = mid;
                mid = (high+low)/2;
            }
            else if(pile[mid] < temp)
            {
                low = mid+1;
                mid = (high+low)/2;
            }
            else break;
        }

    }

}
