#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int> res;
        int m=INT_MAX,n;
        cin>>n;
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            res.push_back(k);
        }
        if(res.size()>1)
        {
        for(int j=0;j<res.size()-1;j++)
        {
            if(res[j]>res[j+1])
            {m=0;
            break;}
            else{
                int diff=res[j+1]-res[j];
                if((diff/2+1)<m)
                {
                    m=diff/2+1;
                }
            }
        }
        }
        else{
            if(res.size()==1) m=res[0];
        }
        cout<<m<<endl;
    }
    return 0;
}