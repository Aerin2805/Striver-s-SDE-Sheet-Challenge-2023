#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>m;
    int xr = 0;
    m[xr]++;
    int cnt=0;
    for(int i = 0 ; i < arr.size() ; i++ ){
        xr = xr^arr[i];

        int n = xr^x;
        cnt+=m[n];
        m[xr]++;
    }

   return cnt;
}