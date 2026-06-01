class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(ans.back()!=nums[i])ans.push_back(nums[i]);
        }

        int cnt=ans.size();
           for (int i = 0; i < cnt; i++) {
            nums[i] = ans[i];
        }
        return cnt;
    }
};