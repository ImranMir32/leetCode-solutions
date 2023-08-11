class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double,int>m;
        for(int i=0;i<rectangles.size();i++){
            double width=rectangles[i][0];
            double height=rectangles[i][1];
            m[width/height]++;
        }
        
        long long ans=0;
        for(auto k:m){
            if(k.second>1){
                long long n=k.second-1;
                ans+=(n*(n+1))/2;
            }
        }
        return ans;
    }
};