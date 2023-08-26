/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var appendCharacters = function (s, t) {
  let k = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] == t[k]) k++;
  }
  return t.length - k;
};
