#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
     int ans = 0;
    int j  = 0;
unordered_map<char,int> m;
    for(int i = 0 ; i<s.length() ; i++){
        if(m.count(s[i])) j = max(j,m[s[i]]);

        ans = max(ans,i-j+1);

        m[s[i]] = i+1;

    }
    return ans;
}