// approach :1
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        while(n > 1)
        {
            if (n % 2 == 0) n = n / 2;
            else if (n % 3 == 0) n = n / 3;
            else if (n % 5 == 0) n = n / 5;
            else break;
        }
        return (n == 1);
    }
};

// approach :2
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;

        map<int,int>m;
        while (n%2==0){
            m[2]++;
            n=n/2;
        }
        for (int i = 3; i <= sqrt(n); i = i+2){
            while (n%i == 0){
                m[i]++;
                n = n/i;
            }
        }
        if (n>2) m[n]++;
        for(auto k:m){
            if(k.first!=2 && k.first!=3 && k.first!=5 ) return false;
        }
        return true;
    }
};