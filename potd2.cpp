#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int h=s.size(),p=0;
        
        for(int j=0;j<h/2-1;j++)
        {
            if(s[j]!=s[j+1])
            {
                p++;
            }
        }
        if(p==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}