/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var orderlyQueue = function (s, k) {
  if (k > 1) {
    return s.split("").sort().join("");
  }

  let res = s;
  for (let i = 1; i < s.length; i++) {
    const newStr = s.substr(i) + s.substr(0, i);
    if (newStr < res) {
      res = newStr;
    }
  }
  return res;
};
