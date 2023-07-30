/**
 * @param {number[]} original
 * @param {number} m
 * @param {number} n
 * @return {number[][]}
 */
var construct2DArray = function (original, m, n) {
  const len = original.length;
  const ans = [];
  if (m * n !== len) return ans;
  let v = [];
  let cnt = 0;
  for (let i = 0; i < len; i++) {
    v.push(original[i]);
    cnt++;
    if (cnt % n === 0 && v.length !== 0) {
      ans.push(v);
      v = [];
    }
  }
  return ans;
};
