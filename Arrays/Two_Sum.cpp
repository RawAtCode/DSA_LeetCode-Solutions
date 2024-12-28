class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int rem;

        for(int i=0; i<nums.size(); i++){
            rem = target - nums[i];

            if(mp.find(rem) == mp.end()){   //nahin mila map mein
                mp[nums[i]] = i;
            }
            else{   //mil gaya map mein
                return {mp[rem], i};
            }
        }

        return {};
    }
};


// TC : O(n)
// SC : O(n)