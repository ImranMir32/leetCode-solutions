/**
 * Definition for isBadVersion()
 *
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function (isBadVersion) {
  /**
   * @param {integer} n Total versions
   * @return {integer} The first bad version
   */
  return function (n) {
    let f = 1;
    let l = n;
    while (f <= l) {
      let m = Math.floor((f + l) / 2);
      if (isBadVersion(m)) l = m - 1;
      else f = m + 1;
    }
    return f;
  };
};
