/**
 * @param {number[]} piles
 * @return {number}
 */
var maxCoins = function (piles) {
  let ans = 0;
  piles.sort((a, b) => b - a);
  let len = piles.length / 3;
  for (let i = 1; i < piles.length - len; i += 2) {
    ans += piles[i];
  }
  return ans;
};
