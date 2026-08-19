class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, answer, current, 0, 0);
        return answer;
    }

private:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& answer, vector<int>& current, int index, int sum) {
        if (sum == target) {
            answer.push_back(current);
            return;
        }
        
        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (sum + candidates[i] > target) break;
            
            current.push_back(candidates[i]);
            backtrack(candidates, target, answer, current, i + 1, sum + candidates[i]);
            current.pop_back();
        }
    }
};