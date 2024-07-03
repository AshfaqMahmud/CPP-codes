/*Understanding the Problem
The problem "Minimum Difference Between Largest and Smallest Value in Three Moves" on LeetCode asks us to minimize the difference between the largest and smallest values in an array after making up to three moves. A move consists of removing any element from the array.

Key Points:
Objective: Minimize the difference between the maximum and minimum values in the array after removing up to three elements.
Constraints: You can only remove up to three elements.
Output: The smallest possible difference between the largest and smallest values in the modified array.
Example Explanation:
Consider the array [5, 3, 2, 4]. If you can remove three elements, the best approach would be to remove all but the smallest or largest value. Thus, removing three out of four elements results in a difference of 0.

Strategy to Solve the Problem:
Sorting: By sorting the array, we can easily identify the smallest and largest elements.

Possible Removals: The four main scenarios to consider are:

Remove the three smallest elements.
Remove the two smallest and one largest element.
Remove one smallest and two largest elements.
Remove the three largest elements.
Calculate Differences:

Compute the difference between the largest remaining element and the smallest remaining element for each scenario.
The minimum of these differences will be the result.*/

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0; 
        
        sort(nums.begin(), nums.end()); 
        
        
        int result = min({nums[n-1] - nums[3], nums[n-2] - nums[2], nums[n-3] - nums[1], nums[n-4] - nums[0]});
        
        return result;
    }
};