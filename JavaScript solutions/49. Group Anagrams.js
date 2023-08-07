/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  let ans = [];
  let p = [];

  if (strs.length === 0) {
    return ans;
  }

  for (let i = 0; i < strs.length; i++) {
    let s = strs[i].split("").sort().join("");
    p.push([s, i]);
  }

  p.sort((a, b) => a[0].localeCompare(b[0]));

  let res = [];
  let empty = [];

  res.push(strs[p[0][1]]);
  for (let i = 1; i < p.length; i++) {
    if (p[i][0] !== p[i - 1][0]) {
      ans.push([...res]);
      res = empty.slice();
      res.push(strs[p[i][1]]);
    } else {
      res.push(strs[p[i][1]]);
    }
  }
  ans.push([...res]);

  return ans;
};
