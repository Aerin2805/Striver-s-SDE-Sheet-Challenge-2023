class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),-1);
    //    vector<int>right(height.size(),-1);
         int maxi = INT_MIN;
        for(int i = 0 ; i<height.size() ; i++){
            maxi = max(maxi,height[i]);
            left[i] = maxi;
        }
        maxi = INT_MIN;
int ans = 0;
        for(int i = height.size()-1 ; i>=0 ; i--){
            maxi = max(maxi,height[i]);
            ans +=(min(maxi,left[i])-height[i]);
        }
        return ans;
    }
};