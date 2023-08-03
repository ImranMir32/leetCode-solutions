/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var minSteps = function (s, t) {
  const m = new Map();

  for (let i = 0; i < s.length; i++) {
    if (!m.has(s[i])) {
      m.set(s[i], 1);
    } else {
      m.set(s[i], m.get(s[i]) + 1);
    }
  }

  for (let i = 0; i < t.length; i++) {
    if (m.has(t[i]) && m.get(t[i]) > 0) {
      m.set(t[i], m.get(t[i]) - 1);
    }
  }

  let ans = 0;
  for (const [key, value] of m.entries()) {
    ans += value;
  }
  return ans;
};
