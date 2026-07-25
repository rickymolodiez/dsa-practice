class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, int> seenNums;

        for(int i=0; i < nums.size(); i++){
            int complement = target - nums[i];
            auto iterator = seenNums.find(complement);
            if(iterator != seenNums.end()){
                return{iterator->second, i};
            }
            seenNums[nums[i]]= i;



        }

    }
};
