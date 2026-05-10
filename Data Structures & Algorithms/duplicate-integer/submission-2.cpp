#include<unordered_set>

class Solution {
public:
 unordered_set<int> set;
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            
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