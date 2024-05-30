/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
  let first = -1,
    last = -1;

  for (let i = 0; i < nums.length; i++) {
    if (target > nums[i]) first = i;
    else if (target == nums[i]) last = i;
  }

  if (last == -1) return [-1, -1];
  return [first + 1, last];
};
