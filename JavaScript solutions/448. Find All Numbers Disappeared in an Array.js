/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function (nums) {
  let len = nums.length;
  const v = [],
    ans = [];
  for (let i = 0; i <= len; i++) v.push(0);

  for (let i = 0; i < len; i++) v[nums[i]] = 1;

  for (let i = 1; i <= len; i++) {
    if (v[i] == 0) ans.push(i);
  }
  return ans;
};
