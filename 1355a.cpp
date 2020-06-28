#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,k;
        cin>>a>>k;
        k=k-1;
        while(k--)
        {
            int m=10,n=0;
            int x=a;
            while(x)
            {
                if(m>(x%10))
                {
                    m=x%10;
                }
                if(n<(x%10))
                {
                    n=x%10;
                }
                x=x/10;
            }
        a=a+m*n;
        }
        cout<<a<<endl;
    }
}