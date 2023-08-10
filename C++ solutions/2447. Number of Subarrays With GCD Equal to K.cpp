class Solution {
public:
    int GCD(int A, int B) {
        if(B==0) return A;
        return GCD(B, A%B);
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) ans++;
            int gcd=nums[i];
            for(int j=i+1;j<nums.size();j++){
                int res=GCD(gcd,nums[j]);
                if(res==k) ans++;
                gcd=res;
            }
        }
        return ans;
    }
};