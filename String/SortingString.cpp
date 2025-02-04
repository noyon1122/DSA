#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;

    vector<int> countCharacter(26,0);

    for(int i=0; i<s.size(); i++)
    {
        ++countCharacter[s[i]-'a'];
    }

    string ans;
    for(int i=0; i<26; i++)
    {
        while(countCharacter[i])
        {
            ans+='a'+i;
            countCharacter[i]--;
        }
    }

    cout<<ans<<endl;


}