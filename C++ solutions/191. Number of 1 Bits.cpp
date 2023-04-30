//approach : 1
class Solution {
public:
    int hammingWeight(uint32_t n) {
      int one=0;
      for(int i=1;i<=32;i++){
          int a=n%2;
          if(a==1) one++;
          n/=2;
      }
      return one;
    }
};

//approach : 2
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return bitset<32>(n).count();
    }
};