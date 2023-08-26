/**
 * @param {number[][]} pairs
 * @return {number}
 */
var findLongestChain = function (pairs) {
  if (pairs.length === 0) return 0;
  pairs.sort((a, b) => a[0] - b[0]);

  let curr = Number.MAX_SAFE_INTEGER;
  let res = 0;

  for (let i = pairs.length - 1; i >= 0; i--) {
    if (pairs[i][1] < curr) {
      res++;
      curr = pairs[i][0];
    }
  }
  return res;
};
