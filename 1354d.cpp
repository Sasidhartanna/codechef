#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    multiset<int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m.insert(x);
    }

    for(int i=0;i<q;i++)
    {
        int p,count=1;
        cin>>p;
        if(p>0)
        {
            m.insert(p);
        }
        else
        {
            for(auto i=m.begin();i!=m.end();i++)
            {
                if(count==-p)
                {
                    m.erase(*i);
                }
                count++;
            }
        }
       
    }
     if(m.size()==0)
        {
            cout<<"0";
        }
        else
        {
            auto k=m.begin();
            cout<<(*k);
        }
    
}