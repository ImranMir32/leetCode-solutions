class Solution {
public:
    void recursionReverse(vector<char>& s, int i, int j){
        if(i>j) return;
        //swap(s[i],s[j]);
        
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        
        recursionReverse(s, i+1, j-1);
    }
    
    void reverseString(vector<char>& s) {
        recursionReverse(s, 0, s.size()-1);
    }
};