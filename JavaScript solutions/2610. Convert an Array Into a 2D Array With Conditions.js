/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function (nums) {
  const m = new Map();
  nums.forEach((num) => {
    m.set(num, (m.get(num) || 0) + 1);
  });

  let mx = 0;
  for (const count of m.values()) {
    mx = Math.max(mx, count);
  }

  const v = [];
  for (let i = 0; i < mx; i++) {
    const vv = [];
    for (const [key, value] of m.entries()) {
      if (value !== 0) {
        vv.push(key);
        m.set(key, value - 1);
      }
    }
    if (vv.length !== 0) {
      v.push(vv);
    }
  }

  return v;
};
