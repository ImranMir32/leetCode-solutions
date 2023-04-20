/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    var x=0;
    while(1){
        if(Math.pow(4,x)==n) return true;
        if(Math.pow(4,x)>n) return false;
        x++;
    }
};