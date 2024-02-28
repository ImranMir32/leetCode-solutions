/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let pre = [];
    let suf = [];
    let ans = [];

    pre[0] = nums[0];
    for (let i = 1; i < nums.length; i++) {
        pre[i] = pre[i - 1] * nums[i];
    }

    suf[nums.length - 1] = nums[nums.length - 1];
    for (let i = nums.length - 2, j = 0; i >= 0; i--, j++) {
        suf[i] = suf[i + 1] * nums[i];
    }

    ans.push(suf[1]);
    for (let i = 1; i < nums.length - 1; i++) {
        ans.push(pre[i - 1] * suf[i + 1]);
    }
    ans.push(pre[nums.length - 2]);

    return ans;
};