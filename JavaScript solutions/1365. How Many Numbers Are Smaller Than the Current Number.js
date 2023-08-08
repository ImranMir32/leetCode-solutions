/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
  const ans = [];
  for (let i = 0; i < nums.length; i++) {
    let cnt = 0;
    for (let j = 0; j < nums.length; j++) {
      if (nums[i] > nums[j]) cnt++;
    }
    ans.push(cnt);
  }
  return ans;
};
