/**
 * @param {string} s
 * @return {number}
 */
var partitionString = function (s) {
  let m = new Map();
  let cnt = 1;

  for (let i = 0; i < s.length; i++) {
    if (!m.has(s[i])) {
      m.set(s[i], 1);
    } else {
      cnt++;
      m.clear();
      m.set(s[i], 1);
    }
  }

  return cnt;
};
