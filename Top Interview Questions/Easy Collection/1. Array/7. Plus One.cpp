class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        
        int carry = 1;
        for(int i=0; i<digits.size(); i++){
            if(digits[i] + carry > 9){
                digits[i]= (digits[i] + carry) % 10;
                carry = 1;
            }
            else{
                digits[i]= (digits[i] + carry);
                carry = 0;
            }
        }
        if(carry == 1){
            digits.push_back(1);
        }
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};