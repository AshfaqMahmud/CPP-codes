class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        
        long tmp = 1;
        
        for(int i=0; i<nums.size(); ++i){
            res[i] = tmp;
            tmp *= nums[i];
        }
        tmp = 1;
        for(int i=nums.size()-1; i>=0; --i){
            res[i] *= tmp;
            tmp *= nums[i];
        }

        return res;
    }

};