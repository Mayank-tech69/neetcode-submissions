class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> f;
        for(int i = 0; i<n; i++){
            int first = nums[i];
            int second = target - nums[i];
            if(f.find(second) != f.end()){
                ans.push_back(i);
                ans.push_back(f[second]);
                //return ans;
            }
            f[first] = i;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
