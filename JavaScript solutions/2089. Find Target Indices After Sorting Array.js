// approach 1: Linear search
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var targetIndices = function (nums, target) {
  nums.sort((a, b) => a - b);
  const ans = [];
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === target) ans.push(i);
  }
  return ans;
};

// approach 2: binary search
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var targetIndices = function (nums, target) {
  nums.sort((a, b) => a - b);
  let lower = lowerBound(nums, target);
  let upper = upperBound(nums, target);

  let ans = [];
  for (let i = lower; i < upper; i++) {
    if (nums[i] === target) ans.push(i);
  }
  return ans;
};

function lowerBound(nums, target) {
  let left = 0;
  let right = nums.length;

  while (left < right) {
    let mid = Math.floor((left + right) / 2);
    if (nums[mid] < target) left = mid + 1;
    else right = mid;
  }
  return left;
}

function upperBound(nums, target) {
  let left = 0;
  let right = nums.length;

  while (left < right) {
    let mid = Math.floor((left + right) / 2);
    if (nums[mid] <= target) left = mid + 1;
    else right = mid;
  }
  return left;
}
