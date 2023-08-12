/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */
var removeKdigits = function (num, k) {
  let ans = "";

  for (let ch of num) {
    while (ans.length && ans[ans.length - 1] > ch && k) {
      ans = ans.slice(0, -1);
      k--;
    }
    if (ans.length || ch !== "0") {
      ans += ch;
    }
  }

  while (ans.length && k--) {
    ans = ans.slice(0, -1);
  }

  return ans === "" ? "0" : ans;
};
