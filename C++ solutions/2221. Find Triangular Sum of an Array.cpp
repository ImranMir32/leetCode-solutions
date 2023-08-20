class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        queue<int> st;
        int len = nums.size() - 1;
        for (int i = 0; i <= len; i++) st.push(nums[i]);
        int cnt=0;
        while (st.size() > 1)
        {
            if(cnt==len)
            {
                len-=1;
                st.pop();
                cnt=0;
                continue;
            }
            if(st.size()==1) return st.front();

            int top1 = st.front();
            st.pop();
            int top2 = st.front();
            int sum = top1 + top2;
            if (sum > 9) st.push(sum%10);
            else st.push(sum);
            cnt++;
        }

        return st.front();
    }
};
