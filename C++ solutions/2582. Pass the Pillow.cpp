class Solution {
public:
    int passThePillow(int n, int time) {
        int div = time / (n - 1);

        if(div == 0) return time + 1;
        if(div % 2) {
            return n - (time % (n - 1));
        }
        return (time - ((n - 1) * div)) + 1;
    }
};