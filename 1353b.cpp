#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        vector<int> brr;
        int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        brr.push_back(x);
    }

    sort(arr.begin(),arr.end());
    sort(brr.rbegin(),brr.rend());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            sum+=max(arr[i],brr[i]);
        }
        else
        {
            sum+=arr[i];
        }
        
    }
   
  cout<<sum<<endl;
    }
}