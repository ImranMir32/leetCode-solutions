class Solution {
public:
    vector<vector<string>> dp;  // dp will store the longest subsequence ending at each index
    
    vector<string> lis(vector<string>& words, vector<int>& groups, int i){
        if(!dp[i].empty()) return dp[i];  // If already computed, return the stored result
        
        vector<string> longestSubseq;
        for(int j = i-1; j >=0 ; j--){  // Traverse previous elements
            if(words[i] != words[j] && groups[i] != groups[j]){
                vector<string> subseq = lis(words, groups, j);
                if(subseq.size() > longestSubseq.size()){
                    longestSubseq = subseq;
                }
            }
        }
        longestSubseq.push_back(words[i]);  // Add the current word to the subsequence
        dp[i] = longestSubseq;  // Store the result in dp
        return dp[i];
    }

    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        dp.resize(n);
        vector<string> maxSubsequence;

        for(int i = 0; i < n; i++){
            vector<string> subseq = lis(words, groups, i);
            if(subseq.size() > maxSubsequence.size()){
                maxSubsequence = subseq;
            }
        }

        return maxSubsequence;
    }
};
