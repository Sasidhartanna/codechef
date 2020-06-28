#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        
        int a=-1,b=-1,c=-1;
        int k=s.length();
        for(int i=0;i<k;i++)
        {
            if(s[i]=='1')
            {
                a=i;
                break;
            }
        }

         for(int i=0;i<k;i++)
        {
            if(s[i]=='2')
            {
                b=i;
                break;
            }
        }
        for(int i=0;i<k;i++)
        {
            if(s[i]=='3')
            {
                c=i;
                break;
            }
        }

        int p=max(a,max(b,c));
        int q=min(a,min(b,c));
        
        int last=p;
        
        p--;
         char t=s[p];
        while(k!=-1 && s[p]==t)
        {
            p--;
        }
        int start=p;
        if(q!=-1)
        {
        cout<<last-start+1<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
    }
}