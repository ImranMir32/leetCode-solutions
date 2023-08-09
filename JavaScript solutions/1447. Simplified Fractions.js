/**
 * @param {number} n
 * @return {string[]}
 */
var simplifiedFractions = function (n) {
  const gcd = (a, b) => {
    if (a == 0) return b;
    return gcd(b % a, a);
  };

  const ans = [];
  for (let i = 1; i < n; i++) {
    for (let j = i + 1; j <= n; j++) {
      if (gcd(i, j) == 1) ans.push(`${i}/${j}`);
    }
  }
  return ans;
};
