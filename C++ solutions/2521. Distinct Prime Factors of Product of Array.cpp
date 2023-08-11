class Solution {
public:
    set<int>st;
    void primeFact(int n){
        while(n%2==0){
            st.insert(2);
            n/=2;
        }
        int ans=sqrt(n);
        for(int i=3;i<=ans;i+=2){
            while(n%i==0){
                st.insert(i);
                n/=i;
            }
        }
        if(n>2) st.insert(n);
    }
    int distinctPrimeFactors(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
           primeFact(nums[i]);
       }
       return st.size();
    }
};
