class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>st;
        int n = matrix.size();
        for(int i=0; i<n; i++){
            vector<int> v= matrix[i];
            bool flag = false;
            for(int j=0; j<v.size(); j++){
                if(v[j] == 0) {
                    flag = true;
                    st.insert(j);
                }
            }
            
            if(flag){
                for(int j=0; j<v.size(); j++){
                   matrix[i][j] = 0;
                }
            }
        }
        
        for(auto k: st){
            for(int i=0; i<n; i++){
                matrix[i][k] = 0;
            }
        }

    }
};