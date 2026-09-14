class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> container;
        for(auto i:ransomNote){
            container[i]++;
        }
         for(auto i:magazine){
            container[i]--;
        }
        for(auto c:ransomNote){
          if(container[c]>0) return false;
        }
        return true;
    }
};