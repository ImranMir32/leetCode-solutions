/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
  var mx = 0;
  var len = height.length;
  for (var i = 0, j = len - 1; i < j; ) {
    var ans = Math.min(height[i], height[j]);
    ans *= Math.abs(i - j);
    mx = Math.max(mx, ans);
    if (height[i] <= height[j]) i++;
    else j--;
  }
  return mx;
};
