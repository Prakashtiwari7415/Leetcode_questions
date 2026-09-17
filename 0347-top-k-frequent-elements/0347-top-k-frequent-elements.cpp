class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> container;
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            container[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& i:container){
            int num=i.first;
            int freq=i.second;
            bucket[freq].push_back(num);
        }
        for(int i=bucket.size()-1;i>0;i--){
            for(auto num:bucket[i]) answer.push_back(num);
            if(answer.size()==k) return answer;
        }
        return answer;
    }
};