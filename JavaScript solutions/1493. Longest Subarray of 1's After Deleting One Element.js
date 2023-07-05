/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function (nums) {
  let ans = 0,
    pos = -1,
    zero = 0,
    mx = 0,
    i = 0;
  while (1) {
    if (i == nums.length) break;
    if (nums[i] == 0 && zero == 0) {
      pos = i;
      zero = 1;
    } else if (nums[i] == 0 && zero == 1) {
      i = pos;
      zero = 0;
      ans = Math.max(mx, ans);
      mx = 0;
    } else mx++;
    i++;
  }
  ans = Math.max(mx, ans);
  if (ans == nums.length) return ans - 1;
  return ans;
};
