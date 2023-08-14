/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function (nums) {
  const ans = [];

  for (let i = 0; i < nums.length; i++) {
    const ind = Math.abs(nums[i]) - 1;
    if (nums[ind] > 0) {
      nums[ind] = -nums[ind];
    } else {
      ans.push(Math.abs(nums[i]));
    }
  }

  return ans;
};
