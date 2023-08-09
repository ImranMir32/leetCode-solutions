/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function (n, k) {
  const v = [];
  for (let i = 1; i * i <= n; i++) {
    if (i * i == n) v.push(i);
    else if (n % i == 0) {
      v.push(i);
      v.push(n / i);
    }
  }
  v.sort((a, b) => a - b);
  if (k > v.length) return -1;
  return v[k - 1];
};
