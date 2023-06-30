//approach :1
/**
 * @param {string} address
 *@return {string}
 */
var defangIPaddr = function (address) {
  let res = address.replace(/\./g, "[.]");
  return res;
};

//approach :2
/**
 * @param {string} address
 *  @return {string}
 */
var defangIPaddr = function (address) {
  let ans = address
    .split("")
    .map((char) => {
      if (char === ".") {
        return "[.]";
      }
      return char;
    })
    .join("");
  return ans;
};
