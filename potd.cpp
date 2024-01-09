#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s,g="codeforces";
        cin>>s;
        int count=0;
        for(int j=0;j<10;j++)
        {
            if(s[j]!=g[j])
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}