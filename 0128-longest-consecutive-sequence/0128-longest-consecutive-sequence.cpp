class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;
        
        for(int n:numset) {
            // Check if nums[i] is the start of a sequence
            if (numset.find(n-1) == numset.end()) {
                int currentNum =n; // Use a temporary variable
                int streak = 1;
                
                // Track consecutive numbers using the temporary variable
                while (numset.find(currentNum + 1) != numset.end()) {
                    currentNum++; 
                    streak++;
                }
                
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
