/**
 * @param {number} n
 * @return {number}
 */
var minOperations = function (n) {
  let sum = 0;
  for (let i = 0; i < n; i++) sum += 2 * i + 1;
  sum /= n;
  let ans = 0;
  for (let i = 1; i <= sum; i += 2) ans += Math.abs(sum - i);
  return ans;
};
