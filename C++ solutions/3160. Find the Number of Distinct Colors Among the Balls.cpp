class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();
        map<long long, long long>mpb, mpc;
        vector<int>ans;
        int cnt=0;
        for(int i=0; i<n; i++){
            int ball = queries[i][0];
            int color = queries[i][1];
          
            if(mpb[ball]){
                int pre_color = mpb[ball];
                mpb[ball]=color;
                if(pre_color == color){
                    ans.push_back(cnt);
                }
                else{
                    mpc[pre_color]--;
                    if(mpc[pre_color] == 0){
                        cnt--;
                        if(mpc[color]){
                            mpc[color]++;
                            ans.push_back(cnt);
                        }
                        else{
                            cnt++;
                            mpc[color]++;
                            ans.push_back(cnt);
                        }
                    }
                    else{
                        if(mpc[color]){
                            mpc[color]++;
                            ans.push_back(cnt);
                        }
                        else{
                            cnt++;
                            mpc[color]++;
                            ans.push_back(cnt);
                        }
                        
                    }
                }
            }
            else{
                mpb[ball]=color;
                if(mpc[color]){
                    mpc[color]++;
                    ans.push_back(cnt);
                }
                else{
                    cnt++;
                    mpc[color]++;
                    ans.push_back(cnt);
                }
            }
        }
        return ans;
    }
};