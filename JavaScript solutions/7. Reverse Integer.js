/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    const str=""+ Math.abs(x);
    const reversed = str.split("").reverse().join("");        
    const num=+reversed; 

    const MIN = Math.pow(-2, 31), MAX = Math.pow(2, 31) - 1;  
    const result=(x < 0 ? -1 : 1)*num;    
    if (result < MIN || result > MAX) return 0; 
    return result;
};
