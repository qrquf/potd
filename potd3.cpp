//#include<bits/stdc++.h>
#include<iostream>
using namespace  std;
int  main()
{
    int   t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(s=="abc")
        {
            cout<<"YES"<<endl;

        }
        else
        {string t=s;
        swap(s[0],s[2]);
        string r=s;
        s=t;

      swap(s[0],s[1]);
      string p=s;
         s=t;

      swap(s[1],s[2]);
       string q=s;
       if(p=="abc" || q=="abc" ||r=="abc")
       {
        cout<<"Yes"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
      
        }
        
    }
    return 0;
}