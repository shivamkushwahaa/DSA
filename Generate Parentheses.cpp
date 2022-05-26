class Solution {
public:
    vector<string> ans;
    
    void generator(string &s, int open, int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        
        if(open>0){
            s.push_back('(');
            generator(s, open-1, close);
            s.pop_back();
        }
        
        if(close>0){
            if(open<close){
                s.push_back(')');
                generator(s, open, close-1);
                s.pop_back();
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string s;
        generator(s, n, n);
        return ans;
    }
};
