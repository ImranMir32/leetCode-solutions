/**
 * @param {number} x
 * @return {boolean}
 */
function reverseString(str) {
    return str.split("").reverse().join("");
}

var isPalindrome = function(x) {
    var str=x.toString();
    var rx=reverseString(str);
    if(rx==x) return true;
    return false;
};