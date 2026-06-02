class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int i=0; i < nums.size(); i++)
        {
            int need = target - nums[i];
            if (indices.count(need))
            {
                return {indices[need], i};
            }
            
            
            indices [nums[i]] = i;
        }
        return {};
    }
};
