//approach : 1
/**
 * @param {number} n
 * @return {boolean}
 */

var isPowerOfTwo = function (n) {
  if (n < 1) return false;
  var x = 1;
  while (1) {
    if (x == n) return true;
    if (x > n) return false;
    x *= 2;
  }
  return false;
};

//approach : 2
/**
 * @param {number} n
 * @return {boolean}
 */
var v = [];
const preCal = () => {
  v.push(parseInt(0));
  var x = 1;
  while (1) {
    if (parseInt(x) > 2147483647) break;
    v.push(parseInt(x));
    x *= 2;
  }
};
preCal();
var isPowerOfTwo = function (n) {
  if (n < 1) return false;

  v.sort((a, b) => a - b);
  var left = 0;
  var right = v.length - 1;
  while (left <= right) {
    const mid = parseInt(Math.floor((left + right) / 2));
    if (v[mid] === n) return true;
    else if (v[mid] < n) left = mid + 1;
    else right = mid - 1;
  }
  return false;
};
