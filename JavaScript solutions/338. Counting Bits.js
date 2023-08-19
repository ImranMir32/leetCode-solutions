/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function (n) {
  const ans = [];
  for (let i = 0; i <= n; i++) {
    let sum = 0;
    let num = i;
    while (num != 0) {
      sum += num % 2;
      num = Math.floor(num / 2);
    }
    ans.push(sum);
  }
  return ans;
};
