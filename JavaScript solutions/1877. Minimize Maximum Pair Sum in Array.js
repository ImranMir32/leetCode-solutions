/**
 * @param {number[]} nums
 * @return {number}
 */
var minPairSum = function (nums) {
  nums.sort((a, b) => a - b);

  let ans = 0;
  for (let i = 0, j = nums.length - 1; i < j; i++, j--) {
    ans = Math.max(ans, nums[i] + nums[j]);
  }

  if (nums.length % 2 === 1) {
    ans = Math.max(
      ans,
      nums[Math.floor(nums.length / 2)] + nums[Math.floor(nums.length / 2) + 1]
    );
  }

  return ans;
};
