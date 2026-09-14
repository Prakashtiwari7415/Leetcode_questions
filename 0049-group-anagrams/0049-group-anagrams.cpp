class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string,vector<string>> hashing;
        for( string& s:strs){
            string key=s;
            sort(key.begin(),key.end());
          hashing[key].push_back(s);
        }
      for(auto& x:hashing){
        answer.push_back(move(x.second));
      }
      return answer;
    }
};