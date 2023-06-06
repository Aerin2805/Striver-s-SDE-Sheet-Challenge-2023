#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
 int index = -1;
        for(int i=n-2; i>=0; i--){
            if(p[i] < p[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(p[i] > p[index]){
                swap(p[i], p[index]);
                break;
            }
        }
        reverse(p.begin() + index + 1, p.end());

        return p;
}