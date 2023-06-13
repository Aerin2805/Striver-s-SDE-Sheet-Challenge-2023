#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
   int ans = 0;
   int sum = 0;
   unordered_map<int,int>m;

   for(int i = 0 ; i<arr.size() ; i++){
     sum+=arr[i];

     if(sum==0) ans = i+1;

     if(m.count(sum)) ans = max(ans, i - m[sum]);
     else m[sum] = i;

   }

   return ans;
}