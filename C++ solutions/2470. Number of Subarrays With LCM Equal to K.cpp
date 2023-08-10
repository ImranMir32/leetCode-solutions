class Solution {
public:
    int GCD(int A, int B) {
        if(B==0) return A;
        return GCD(B, A%B);
    }
    long long LCM(int A, int B) {
        long long ans=(A*B);
        long long res=GCD(A,B);
        return ans/res;
    }
    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) ans++;
            long long lcm=nums[i];
            for(int j=i+1;j<nums.size();j++){
                long long res=LCM(lcm,nums[j]);
                if(res==k) ans++;
                lcm=res;
                if(res>k) break;
            }
        }
        return ans;
    }
};

