/**
 * @param {string} s
 * @return {boolean}
 */
var repeatedSubstringPattern = function (s) {
  const size = s.length;
  const postfix = s.substring(1);
  const prefix = s.substring(0, size - 1);

  const newS = postfix + prefix;
  return newS.includes(s);
};
