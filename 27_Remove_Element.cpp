class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // Pointer for the elements not equal to val

        // Iterate through the array using j pointer
        for (int j = 0; j < nums.size(); ++j) {
            // If nums[j] is not equal to val, copy it to nums[i]
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++; // Increment i to indicate one more element not equal to val
            }
        }

        return i; // Return the count of elements not equal to val
    }
};