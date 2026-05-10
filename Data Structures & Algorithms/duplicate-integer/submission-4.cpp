#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> set;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(set.find(nums[i]) == set.end()){
                set.insert(nums[i]);
            }
            else{
                return true;
            }


        }
        return false;
    }
};