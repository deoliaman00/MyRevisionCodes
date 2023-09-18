/*
https://leetcode.com/problems/container-with-most-water/description/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxA = 0; // Initialize the maximum area to 0.
        int i = 0, j = n - 1; // Initialize two pointers, one at the beginning and one at the end of the array.

        // Iterate as long as the left pointer is less than the right pointer.
        while (i < j) {
            // Calculate the current height as the minimum of the heights at positions i and j.
            int element = min(height[i], height[j]);

            // Calculate the current width as the difference between the right and left pointers.
            int sz = j - i;

            // Calculate the current area between the lines at positions i and j.
            int ma = element * sz;

            // Update the maximum area if the current area is greater.
            maxA = max(maxA, ma);

            // Move the pointer that points to the shorter line, as it might result in a larger area.
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        // Return the maximum area found.
        return maxA;
    }
};

*/