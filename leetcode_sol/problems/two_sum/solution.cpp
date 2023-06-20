class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i=0; i<nums.size(); i++){
            int f = target - nums[i];
            if (m.find(f) != m.end()){
                return {m[f], i};
                }
            m[nums[i]] = i;
        }
        return {};
    }
};