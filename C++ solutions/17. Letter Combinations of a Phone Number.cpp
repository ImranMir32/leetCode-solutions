// approach :2
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        
        if (digits.empty()) return ans;
        
        generateCombinations(digits, v, "", ans, 0);

        return ans;
    }

    void generateCombinations(const string& digits, const vector<string>& v, string current, vector<string>& ans, int index) {
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }
        
        int digit = digits[index] - '0';
        string letters = v[digit - 2];

        for (char ch : letters) {
            generateCombinations(digits, v, current + ch, ans, index + 1);
        }
    }
};

// approach :2
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>v={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.size()==0) return ans;
        if(digits.size()==1){
            int ind=digits[0]-'0';
            string s=v[ind-2];
            for(int i=0;i<s.size();i++){
                string charStr(1, s[i]);
                ans.push_back(charStr);
            }
            return ans;
        }
        if(digits.size()==2){
            int ind=digits[0]-'0';
            string s=v[ind-2];

            int ind2=digits[1]-'0';
            string s2=v[ind2-2];
            for(int i=0;i<s.size();i++){
                for(int j=0;j<s2.size();j++){
                    string st = string(1, s[i]) + s2[j];
                    ans.push_back(st);
                }  
            }
            return ans;
        }
        if(digits.size()==3){
            int ind=digits[0]-'0';
            string s=v[ind-2];

            int ind2=digits[1]-'0';
            string s2=v[ind2-2];

            int ind3=digits[2]-'0';
            string s3=v[ind3-2];
            for(int i=0;i<s.size();i++){
                for(int j=0;j<s2.size();j++){
                   for(int k=0;k<s3.size();k++){
                        string st = string(1, s[i]) + s2[j]+s3[k];
                        ans.push_back(st);
                   }
                }  
            }
            return ans;
        }
        if(digits.size()==4){
            int ind=digits[0]-'0';
            string s=v[ind-2];

            int ind2=digits[1]-'0';
            string s2=v[ind2-2];

            int ind3=digits[2]-'0';
            string s3=v[ind3-2];
            
             int ind4=digits[3]-'0';
            string s4=v[ind4-2];
            for(int i=0;i<s.size();i++){
                for(int j=0;j<s2.size();j++){
                   for(int k=0;k<s3.size();k++){
                       for(int p=0;p<s4.size();p++){
                            string st = string(1, s[i]) + s2[j]+s3[k]+s4[p];
                            ans.push_back(st);
                       }
                   }
                }  
            }
            return ans;
        }
        return ans;
    }
};