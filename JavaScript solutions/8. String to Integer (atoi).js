/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    var str="";
    var minus = 1; 
    var i = 0;
    while((s.charAt(i) == ' ')) i++; 

    if(s.charAt(i) == '-' || s.charAt(i) == '+'){
       if(s.charAt(i) == '-') minus = -1;
       i++;
   }
   
   for(;i<s.length;i++){
       if(s.charAt(i)>='0' && s.charAt(i) <= '9'){
           str = str.concat(s.charAt(i));
       }
       else break;
   }
   if(str.length == 0) return 0;
   var res =  parseInt(str);
   if(res >= 2147483648){
       if(minus == -1) return 2147483648*minus; 
       else  return 2147483647; 
   }
   return res*minus;
};