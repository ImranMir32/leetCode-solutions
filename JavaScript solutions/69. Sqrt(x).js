//approach :1
/**
 * @param {number} x
 * @return {number}
 */
const v = [];

const preCal = () => {
  v.push(0);
  let x = 1;
  while (1) {
    if (x * x > 2147483647) break;
    v.push(x * x);
    x++;
  }
  v.push(x * x);
};

preCal();

const mySqrt = (x) => {
  let left = 0,
    right = v.length - 1,
    ans = -1;
  while (left <= right) {
    let mid = Math.floor((left + right) / 2);
    if (v[mid] >= x) {
      ans = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return ans >= 0 && v[ans] === x ? ans : ans - 1;
};

//Approach : 2
/**
 * @param {number} x
 * @return {number}
 */
// var mySqrt = function (x) {
//   return Math.floor(Math.sqrt(x));
// };
