#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
        if maximum sum is less than 0 return 0;
    */
  long long maxSum = INT_MIN;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0)
                sum = 0;
        }
        if(maxSum<0) return 0;
        return maxSum;
}