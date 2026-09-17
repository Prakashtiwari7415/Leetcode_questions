class Solution {
public:
    int longestPalindrome(string s) {
        int sum=0;
        unordered_map<char,int> container;
        bool is_odd=false;
        for(auto &c: s){
            container[c]++;
        }
        for(auto &i:container){
            int val=i.second;
            if(val%2==0) sum=sum+val;
            else{
             is_odd=true;
            }
        }
        if(is_odd==false) return sum;
        else{
            for(auto &i:container){
                int val=i.second;
                if(val%2!=0) sum=sum+(val-1);
            }
        }
        return sum+1;
    }
};