class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int len=points.size();
        int q=queries.size();
        vector<int>ans;
        for(int i=0;i<q;i++){
            int x=queries[i][0];
            int y=queries[i][1];
            int z=queries[i][2];
           
            int cnt=0;
            for(int j=0;j<len;j++){
                int a=points[j][0];
                int b=points[j][1];
                if((x-a)*(x-a)+(y-b)*(y-b)<=z*z) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};