//approach : 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){  
                nums[k++]=nums[i];
            }
        }
        for(int i=k;i<nums.size();i++) nums[i]=0;

    }
};

//approach : 2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int left=0, end=n-1,right=0;
        while(right<=end){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);                  
                left++;
            }
            right++;
        }
    }
};