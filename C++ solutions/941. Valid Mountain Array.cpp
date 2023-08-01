class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int pos=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]) return false;
            else if(arr[i]>arr[i+1]){
                pos=i;
                if(pos==0) return false;
                break;
            }
        }
        for(int i=pos;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]) return false;
        }
        return true;
    }
};