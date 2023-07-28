/**
 * @param {number[][]} score
 * @param {number} k
 * @return {number[][]}
 */
var sortTheStudents = function (score, k) {
  let res = [];
  let len = score.length;
  for (let i = 0; i < len; i++) {
    let v = score[i].slice();
    res.push([score[i][k], v]);
  }

  res.sort((a, b) => b[0] - a[0]);
  let ans = [];
  for (let i = 0; i < len; i++) {
    ans.push(res[i][1]);
  }

  return ans;
};
