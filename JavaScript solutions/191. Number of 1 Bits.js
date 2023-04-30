//approach : 1
/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function (n) {
  const str = n.toString(2);
  let one = 0;
  for (let char of str) {
    if (char === "1") one++;
  }
  return one;
};

//approach : 2
/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function (n) {
  return n.toString(2).replaceAll("0", "").length;
};
