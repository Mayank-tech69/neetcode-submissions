class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> seen;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            seen[nums[i]]++;

        }
        for(auto i : seen){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};