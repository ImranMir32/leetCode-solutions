/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    var len=digits.length;
    var v=[];
    var carry=0;
    for(var i=len-1;i>=0;i--){
        if((digits[i]==9 && i==len-1) || digits[i]+carry==10){
            v.push(0);
            carry=1;
        }
        else if(carry ||  i==len-1){
            v.push(digits[i]+1);
            carry=0;
        }
        else v.push(digits[i]);
    }
    if(carry) v.push(1);
    v.reverse();
    return v;
};