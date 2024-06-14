#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans =0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1])
            {
                int newv= nums[i-1]+1;
                ans = ans + newv - nums[i];
                nums[i] = newv;
            }
        }
        return ans;
    }
};



/*
You are given an integer array nums. In one move, you can pick an index i where 0 <= i < nums.length and increment nums[i] by 1.

Return the minimum number of moves to make every value in nums unique.

The test cases are generated so that the answer fits in a 32-bit integer.

problem no : 945

*/