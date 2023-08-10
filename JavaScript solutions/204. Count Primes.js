/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function (n) {
  var visit = new Array(n + 1).fill(false);

  for (var i = 2; i * i <= n; i++) {
    if (!visit[i]) {
      for (var j = i * i; j <= n; j += i) {
        visit[j] = true;
      }
    }
  }

  var cnt = 0;
  for (var i = 2; i < n; i++) {
    if (!visit[i]) {
      cnt++;
    }
  }

  return cnt;
};
