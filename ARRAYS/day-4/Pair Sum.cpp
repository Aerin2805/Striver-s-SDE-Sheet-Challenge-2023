#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   
   
   vector<vector<int>> ans;
   unordered_map<int,int> m;

   for(int i = 0 ; i<arr.size() ; i++){
      if(m.count((s-arr[i]))){
         vector<int>temp;
       int  mini = min((s-arr[i]),arr[i]);
         int maxi = max((s-arr[i]),arr[i]);
         temp.push_back(mini);
         temp.push_back(maxi);
         int loop = m[s-arr[i]];
         while(loop--)  ans.push_back(temp);
      }
         m[arr[i]]++;
   }
   sort(ans.begin(),ans.end());
return ans;
}