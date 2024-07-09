class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // ⊕ = XOR = ^
        // a⊕a=0 for any integer 𝑎 
        // a⊕0=a for any integer 𝑎
        // XOR is commutative and associative, meaning the order in which you apply XOR doesn't matter.
        
        int result = 0;
        for(int i=0;i<nums.size();i++){
           result ^= nums[i];
        }
        
        return result;
    }
};