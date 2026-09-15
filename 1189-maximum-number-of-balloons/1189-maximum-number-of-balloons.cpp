class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> container;
        int sum=0;
        int n=0;
        for(char c:text){
            container[c]++;
        }
        return min({container['b'],container['a'],container['l']/2,container['o']/2,container['n']});
    }
};