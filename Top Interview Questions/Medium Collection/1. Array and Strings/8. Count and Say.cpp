class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        if(n == 2) return "11";
        
        string curr = "11";
        for(int i=3; i<=n; i++){
            int cnt = 1;
            string next = "";
            curr += "#";
            for(int j=1; j<curr.size(); j++){
                if(curr[j] != curr[j-1]){
                    next += to_string(cnt);
                    next += curr[j-1];
                    cnt = 1;
                }
                else cnt++;
            }
            curr = next;
        }
        return curr;
    }
};