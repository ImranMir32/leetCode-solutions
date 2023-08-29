/**
 * @param {string} customers
 * @return {number}
 */
var bestClosingTime = function (customers) {
  const len = customers.length;
  const y = [0];
  const n = [0];

  let cnt = 0;
  for (let i = 0; i < len; i++) {
    if (customers[i] === "N") cnt++;
    n.push(cnt);
  }

  cnt = 0;
  for (let i = len - 1; i >= 0; i--) {
    if (customers[i] === "Y") cnt++;
    y.push(cnt);
  }

  y.reverse();

  let ans = Infinity;
  let ind = 0;
  for (let i = 0; i < len + 1; i++) {
    const h = y[i] + n[i];
    if (h < ans) {
      ans = h;
      ind = i;
    }
  }

  return ind;
};
