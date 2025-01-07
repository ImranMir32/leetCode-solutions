class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0; i<asteroids.size(); i++){
            if(asteroids[i]<0){
                if(!st.empty()){
                    bool flag=true;
                    while(st.top()>0){
                        if(abs(st.top())==abs(asteroids[i])){
                            flag=false;
                            st.pop();
                            break;
                        }
                        if(abs(st.top())>abs(asteroids[i])){
                            flag=false;
                            break;
                        }
                        st.pop();
                        if(st.empty()) break;
                    }
                    if(flag) st.push(asteroids[i]);
                }
                else st.push(asteroids[i]);
            }
            else st.push(asteroids[i]);
        }
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};