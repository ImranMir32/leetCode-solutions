/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let n = prices.length;
  if (n <= 1) {
    return 0;
  }
  let min_price = prices[0];
  let max_profit = 0;
  for (let i = 1; i < n; i++) {
    max_profit = Math.max(max_profit, prices[i] - min_price);
    min_price = Math.min(min_price, prices[i]);
  }
  return max_profit;
};
