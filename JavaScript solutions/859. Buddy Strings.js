/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var buddyStrings = function (s, goal) {
  if (s.length !== goal.length) return false;
  if (s === goal) {
    let m = new Map();
    for (let i = 0; i < s.length; i++) {
      if (m.has(s[i])) {
        m.set(s[i], m.get(s[i]) + 1);
      } else {
        m.set(s[i], 1);
      }
    }
    for (let k of m) {
      if (k[1] >= 2) return true;
    }
    return false;
  }
  let pos1 = -1;
  let pos2 = -1;
  for (let i = 0; i < s.length; i++) {
    if (s[i] !== goal[i] && pos1 === -1) pos1 = i;
    else if (s[i] !== goal[i] && pos2 === -1) pos2 = i;
    else if (s[i] !== goal[i]) return false;
  }
  if (pos1 === -1 || pos2 === -1) return false;
  let sArr = s.split("");
  [sArr[pos1], sArr[pos2]] = [sArr[pos2], sArr[pos1]];
  s = sArr.join("");
  if (s === goal) return true;
  return false;
};
