/**
 * @brief Implements a monotonic stack, a data structure used to maintain elements
 *        in a specific order (either increasing or decreasing) as they are processed.
 * 
 * @details
 * A monotonic stack is particularly useful for solving problems that involve finding
 * the next or previous greater/smaller element in an array. It operates in O(n) time
 * complexity for such problems by ensuring that each element is pushed and popped
 * from the stack at most once.
 * 
 * Key Characteristics:
 * - Monotonic Increasing Stack: Maintains elements in non-decreasing order.
 * - Monotonic Decreasing Stack: Maintains elements in non-increasing order.
 * 
 * Common Use Cases:
 * - Finding the next greater or smaller element in an array.
 * - Solving range queries efficiently.
 * - Problems involving sliding windows or histogram-based calculations.
 * 
 * Example Applications:
 * - Stock span problem.
 * - Trapping rainwater problem.
 * - Largest rectangle in histogram.
 * 
 * Usage:
 * - Iterate through the array while maintaining the desired order in the stack.
 * - Push elements onto the stack if they satisfy the monotonic condition.
 * - Pop elements from the stack if they violate the monotonic condition.
 * - Use the stack to efficiently retrieve required information about elements.
 */

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> // For std::max and std::min
#include <functional> // For std::greater and std::less

using namespace std;

int main()
{
    // Example usage of a monotonic stack to find the next greater element
    vector<int> arr = {4, 5, 2, 10, 8};
    stack<int> s;
    vector<int> nextGreater(arr.size(), -1); // Initialize with -1

    for (int i = 0; i < arr.size(); ++i) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            nextGreater[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    // Output the next greater elements
    for (int i = 0; i < arr.size(); ++i) {
        cout << "Next greater element for " << arr[i] << " is " << nextGreater[i] << endl;
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;

    // Example usage of a monotonic stack to find the next smaller element
    // vector<int> arr = {4, 5, 2, 10, 8};
    // stack<int> s;

    // for(int element : arr)
    // {
    //     if(s.empty()) s.push(element);
    //     else if (!s.empty() && s.top() < element)
    //     {
    //         int top = s.top();
    //         s.pop();
    //         s.push(element);
    //         s.push(top);
    //     }
    //     else s.push(element);
    // }
    // // Output the elements in the stack

    // cout << "Elements in the stack: ";
    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    // return 0;
}