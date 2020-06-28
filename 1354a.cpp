#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int sum=0;
        if(a>b)
        {
            sum=b;
            a-=b;
            if(c>d)
            {
               int x=a/(c-d);
               if(a%(c-d)!=0)
               {
                   x++;
               }
               sum+=x*c;

            }
            else
            {
                sum=-1;
            }
            
        }
        else
        {
            sum=b;
        }
        cout<<sum<<endl;
    }
}