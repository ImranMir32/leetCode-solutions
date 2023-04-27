//approach : 1
/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function (s) {
  for (var i = 0, j = s.length - 1; i < j; i++, j--) {
    [s[i], s[j]] = [s[j], s[i]];
  }
};

//approach : 2
/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
const recursively = (s, i, j) => {
  if (i >= j) return;
  [s[i], s[j]] = [s[j], s[i]];
  return recursively(s, (i += 1), (j -= 1));
};

var reverseString = function (s) {
  recursively(s, 0, s.length - 1);
};
