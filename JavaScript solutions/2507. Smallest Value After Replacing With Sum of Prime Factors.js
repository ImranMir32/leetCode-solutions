/**
 * @param {number} n
 * @return {number}
 */
var smallestValue = function (n) {
  const findAns = (n) => {
    let ans = 0;
    while (n % 2 == 0) {
      ans += 2;
      n /= 2;
    }
    let res = Math.sqrt(n);
    for (let i = 3; i <= res; i += 2) {
      while (n % i == 0) {
        ans += i;
        n /= i;
      }
    }
    if (n > 2) ans += n;
    return ans;
  };
  while (1) {
    let ans = findAns(n);
    if (ans == n) return n;
    n = ans;
  }
  return n;
};
