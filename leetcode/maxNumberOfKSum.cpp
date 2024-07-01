class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int sum=0;
        int left=0;
        int right=nums.size()-1;
        int count = 0;
        sort(nums.begin(), nums.end());

        while(left<right){
            sum = nums[left] + nums[right];
            if(sum==k){
                nums[left]=0;
                nums[right]=0;
                count++;
                left++;
                right--;
            }else if(sum<k){
                left++;
            }else{
                right--;
            }
        }

        return count;
    }
};