class Solution {
private:
    void generate(int i, string curr, vector<string>& out){
        if(i >= curr.size()) {
            out.push_back(curr);
            return;
        }
        
        generate(i + 1, curr, out);
        
        if(isalpha(curr[i])) {
            curr[i] = curr[i] == tolower(curr[i]) ? toupper(curr[i]) : tolower(curr[i]);
            generate(i + 1, curr, out);    
        }
    }

public:
    vector<string> letterCasePermutation(string s) {
        vector<string> out;
        generate(0, s, out);
        return out;  
    }
};

//binary repre of uppercase letters have 1 in 5th least significant bit, if you change it to 0 //you get lowercase
//Discord - leetcode grind - channel = discussions on 01/23/2022
