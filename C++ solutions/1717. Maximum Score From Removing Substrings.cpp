class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if(x>y){
            stack<char>st;
            long long ans = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i] == 'b' && !st.empty()){
                    if(st.top() == 'a'){
                        ans += x;
                        st.pop();
                    }
                    else st.push(s[i]);
                }
                else st.push(s[i]);
            }
            s = "";
            while(!st.empty()){
                s += st.top();
                st.pop();
            }
            reverse(s.begin(), s.end());

            stack<char>stt;
            for(int i=0; i<s.size(); i++){
                if(s[i] == 'a' && !stt.empty()){
                    if(stt.top() == 'b'){
                        ans += y;
                        stt.pop();
                    }
                    else stt.push(s[i]);
                }
                else stt.push(s[i]);
            }
            return ans;
        }
        
        long long ans = 0;
        stack<char>stt;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' && !stt.empty()){
                if(stt.top() == 'b'){
                    ans += y;
                    stt.pop();
                }
                else stt.push(s[i]);
            }
            else stt.push(s[i]);
        }

        s = "";
        while(!stt.empty()){
            s += stt.top();
            stt.pop();
        }
        reverse(s.begin(), s.end());

        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'b' && !st.empty()){
                if(st.top() == 'a'){
                    ans += x;
                    st.pop();
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }

        return ans;

    }
};