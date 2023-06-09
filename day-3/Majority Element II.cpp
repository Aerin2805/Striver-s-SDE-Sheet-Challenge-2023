class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = 0;
        int ele2 = 0;
        int cnt1=0;
        int cnt2=0;

        for(int i = 0 ; i<nums.size() ; i++){
            if(cnt1==0 && ele2!=nums[i]){
                ele1 = nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && ele1!=nums[i]){
                ele2 = nums[i];
                cnt2=1;
            }
           else  if(ele1==nums[i]) cnt1++;
            else if(ele2==nums[i]) cnt2++;
else {
    cnt1--;
    cnt2--;
}
        }

cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == ele1) cnt1++;
        if (nums[i] == ele2) cnt2++;
    }
int mini = int(nums.size() / 3) + 1;

if(cnt1>=mini && cnt2>=mini && ele1!=ele2) return {ele1,ele2};
else if(cnt1>=mini) return {ele1};
else if(cnt2>=mini) return {ele2};
return {};
    }
};