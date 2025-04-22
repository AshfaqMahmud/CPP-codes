/**
 * @brief Finds the largest rectangle area in a histogram.
 * 
 * This function calculates the maximum rectangular area that can be formed
 * in a histogram where the width of each bar is 1. The heights of the bars
 * are provided as an input array. The algorithm uses a stack-based approach
 * to efficiently compute the largest rectangle in O(n) time complexity.
 * 
 * @param heights A vector of integers representing the heights of the histogram bars.
 * @return The area of the largest rectangle that can be formed in the histogram.
 * 
 * @note The input vector may contain zero or more elements. If the vector is empty,
 *       the function will return 0 as there are no bars to form a rectangle.
 * 
 * @example
 * Input: heights = {2, 1, 5, 6, 2, 3}
 * Output: 10
 * Explanation: The largest rectangle has an area of 10 (formed by heights 5 and 6).
 */
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;


class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> barIndex;
        int area = 0;

        // Traverse the histogram
        for (int i = 0; i < heights.size(); i++)
        {

            while (!barIndex.empty() && heights[barIndex.top()] > heights[i])
            {
                int h = heights[barIndex.top()]; // Get the height of the popped bar
                barIndex.pop();

                // Calculate the width for the rectangle
                int width = barIndex.empty() ? i : i - barIndex.top() - 1;
                area = max(area, h * width); // Update the maximum area
            }

            barIndex.push(i);
        }

        // Cleanup: process remaining bars in the stack
        while (!barIndex.empty())
        {
            int h = heights[barIndex.top()];
            barIndex.pop(); // Pop the index

            int width = barIndex.empty() ? heights.size() : heights.size() - barIndex.top() - 1;
            area = max(area, h * width);
        }

        return area;
    }
};

int main()
{
    Solution solution;
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area: " << solution.largestRectangleArea(heights) << endl;
    return 0;
}