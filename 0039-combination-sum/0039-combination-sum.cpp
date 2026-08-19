class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> result;
        function2(candidates, target,answer,result,0,0);
        return answer;
    }
    private:
     void function2(vector<int>& candidates, int target,vector<vector<int>>& answer,
        vector<int>& result,int index,int current_sum){
            if(current_sum>target) return;
        if(current_sum==target){
                answer.push_back(result);
                return;
            }
            for(int i=index;i<candidates.size();i++){
                result.push_back(candidates[i]);
                function2(candidates,target,answer,result,i,current_sum+candidates[i]);
                result.pop_back();
            }
        }
};