//approach : 1
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  s = s
    .replace(/ /g, "")
    .toLowerCase()
    .replace(/[^a-z0-9]/gi, "");
  let n = s.length;
  for (let i = 0, j = n - 1; i < j; i++, j--) {
    if (s.charAt(i) !== s.charAt(j)) return false;
  }
  return true;
};

//approach : 2
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  let n = s.length;
  let st = "";
  for (let i = 0; i < n; i++) {
    if (
      (s.charAt(i) >= "a" && s.charAt(i) <= "z") ||
      (s.charAt(i) >= "0" && s.charAt(i) <= "9")
    )
      st += s.charAt(i);
    else if (s.charAt(i) >= "A" && s.charAt(i) <= "Z")
      st += s.charAt(i).toLowerCase();
  }
  for (let i = 0, j = st.length - 1; i < j; i++, j--) {
    if (st.charAt(i) !== st.charAt(j)) return false;
  }
  return true;
};
