#include <unordered_set>
class Solution {
public:
unordered_set<int> hashSet;
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            
            if(hashSet.find(nums[i]) == hashSet.end()){
                hashSet.insert(nums[i]);
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};