#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int arr[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
        cin>>n>>k;
        int flag=0,flag1=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]==k)
            {
                flag=1;
            }
            if(arr[i]>=k&&arr[i-1]>=k)
            {
                flag1=1;
            }
            
            if(i>=2 && arr[i]>=k && arr[i-2]>=k)
            {
                flag1=1;
            }
        }
        if(n==1 && arr[1]==k)
        {
            cout<<"yes"<<endl;
        }
        else if(flag&&flag1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        

    }
     return 0;
}