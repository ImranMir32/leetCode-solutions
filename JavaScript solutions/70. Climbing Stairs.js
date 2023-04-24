/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    if(n==1||n==2||n==3) return n;
    var first = 2, second = 3;
    for(var i = 4; i <= n; i++){
        var fibo = first+second;
        first = second;
        second = fibo;
    }
    return second;  
};