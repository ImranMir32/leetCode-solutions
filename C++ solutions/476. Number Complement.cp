class Solution {
public:
    int helper(int n){
        vector<int>v;
        while(n != 0){
            v.push_back(n%2);
            n /= 2;
        }

        //reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i] == 1) v[i] = 0;
            else v[i] = 1;
        }
         int result = 0, base = v.size()-1;
         for(int i=0; i<v.size(); i++){
            result += (v[i] * pow(2, i));
            base--; 
         }
         return result;
    }
    int findComplement(int num) {
        return helper(num);
    }
};