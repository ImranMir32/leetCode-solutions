class Solution {
public:
    bool check(vector<int>& arr, int n){
        sort(arr.begin(), arr.begin() + n);
        for(int i=0; i<n; i++){
            if(arr[i] != i) return false;
        }
        return true;
    }
    int maxChunksToSorted(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(check(arr, i)) cnt++;
        }
        return cnt;
    }
};