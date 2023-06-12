#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>s(arr.begin(),arr.end());
    int ans = INT_MIN;

    for(int i = 0 ; i<n ; i++){
        int ele = arr[i] - 1;
        if(!s.count(ele)){
            int curr = arr[i];
            int cnt = 0;
            while(s.count(curr)){
                curr++;
                cnt++;
            }
            ans = max(ans,cnt);
        } 
    }
    return ans;
}