#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<string>ans;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        string p;
        cin>>p;
        int m=p.size();
        p=p.substr(m-10);
        if(p=="@gmail.com")
        {
            ans.push_back(s);
        }
    }

    sort(ans.begin(), ans.end());

    for(auto it:ans)
    {
        cout<<it<<endl;
    }
}
