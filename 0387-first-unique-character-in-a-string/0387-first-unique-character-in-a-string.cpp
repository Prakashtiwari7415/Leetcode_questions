class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> container;
        for(auto i:s){
            container[i]++;
        }
        for(int i=0;i<s.length();i++){
            if(container[s[i]]==1) return i;
        }
        return -1;
    }
};