/**
 * @param {number[][]} points
 * @param {number[][]} queries
 * @return {number[]}
 */
var countPoints = function (points, queries) {
  let len = points.length;
  let q = queries.length;
  let ans = [];
  for (let i = 0; i < q; i++) {
    let x = queries[i][0];
    let y = queries[i][1];
    let z = queries[i][2];
    let cnt = 0;
    for (let j = 0; j < len; j++) {
      let a = points[j][0];
      let b = points[j][1];
      if ((x - a) * (x - a) + (y - b) * (y - b) <= z * z) cnt++;
    }
    ans.push(cnt);
  }
  return ans;
};
