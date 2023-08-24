class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int cnt = 0;
        vector<string> currentLine;
        
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            int len = s.size();
            
            if (cnt + len + currentLine.size() > maxWidth) {
                int spacesToAdd = maxWidth - cnt;
                if (currentLine.size() == 1) {
                    ans.push_back(currentLine[0] + string(spacesToAdd, ' '));
                } else {
                    int baseSpaces = spacesToAdd / (currentLine.size() - 1);
                    int extraSpaces = spacesToAdd % (currentLine.size() - 1);
                    
                    string line = currentLine[0];
                    for (int j = 1; j < currentLine.size(); j++) {
                        line += string(baseSpaces, ' ');
                        if (j <= extraSpaces) {
                            line += ' ';
                        }
                        line += currentLine[j];
                    }
                    ans.push_back(line);
                }
                currentLine.clear();
                cnt = 0;
            }
            
            currentLine.push_back(s);
            cnt += len;
        }
        
       
        string lastLine = currentLine[0];
        for (int i = 1; i < currentLine.size(); i++) {
            lastLine += ' ' + currentLine[i];
        }
        lastLine += string(maxWidth - lastLine.size(), ' ');
        ans.push_back(lastLine);
        
        return ans;
    }
};