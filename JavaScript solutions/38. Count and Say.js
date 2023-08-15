/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function (n) {
  if (n == 1) return "1";
  if (n == 2) return "11";

  let ans = "11";
  for (let i = 3; i <= n; i++) {
    ans += "*";
    let temp = "";
    let cnt = 1;
    for (let j = 1; j < ans.length; j++) {
      if (ans[j] != ans[j - 1]) {
        temp += cnt.toString();
        temp += ans[j - 1];
        cnt = 1;
      } else cnt++;
    }
    ans = temp;
  }
  return ans;
};
