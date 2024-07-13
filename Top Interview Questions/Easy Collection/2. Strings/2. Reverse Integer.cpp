// Approach : 1
class Solution {
public:
    long long reverseByRecursion(long long x){
        if(x < 10){
            return x;
        }
        int digit = (int) log10(x);

        return (x % 10) * pow(10, digit) + reverseByRecursion( x/10 );
    }

    int reverse(int x) {
        string sign = "";
        if(x < 0){
            sign = "-";
            if (x == INT_MIN) return 0; 
            x *= (-1);
        }

            long long reversed = reverseByRecursion(x); 
            if(reversed > INT_MAX || reversed < INT_MIN) return 0; 
            
            return (int) reversed * (sign == "-" ? -1 : 1);
    }
};

// Approach : 2:
class Solution {
public:
    int reverse(int x) {
        string sign = "";
        if(x < 0){
            sign = "-";
            if (x == INT_MIN) return 0; 
            x *= (-1);
        }

        long long reversed = 0;
        while(x!=0){
            reversed = (reversed * 10) + (x % 10);
            x /= 10;
        }
        
        if(reversed > INT_MAX || reversed < INT_MIN) return 0;    
        return (int) reversed * (sign == "-" ? -1 : 1);
    }
};
