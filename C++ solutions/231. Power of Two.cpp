//approach : 1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        long long x=1;
        while(1){
            if(x==n) return true;
            if(x>n) return false;
            x*=2;
        }
        return false; 
    }
};

//approach : 2
class Solution {
public:
    vector<unsigned int>v;
    void preCal(){
        v.push_back(0);
        long long x=1;
        while(1){
            if(x>2147483647) break;
            v.push_back(x);
            x*=2;
        }
    }
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        preCal();
        bool found = std::binary_search(v.begin(), v.end(), n);
        return found ? true : false;
    }
};