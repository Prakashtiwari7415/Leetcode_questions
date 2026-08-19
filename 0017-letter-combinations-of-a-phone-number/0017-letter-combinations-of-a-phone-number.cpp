class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> answer;
        string current;
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       int index=0;
        function2(answer,current,digits,index,mapping);
        return answer;
    }
    private:
       void function2(vector<string>& answer,string& current,string& digits,int index,string mapping[]){
        if(index>=digits.length()){
            answer.push_back(current);
            return;
        }
        int n=digits[index]-'0';
        string val=mapping[n];
        for(int i=0;i<val.length();i++){
           // cout<<val[i];
            current.push_back(val[i]);
            function2(answer,current,digits,index+1,mapping);
            current.pop_back();       }
       }
};