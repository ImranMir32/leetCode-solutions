/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    let pp = [];
    if (nums.length === 0) return [];

    nums.sort((a, b) => a - b); 
    let cnt = 1;
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] === nums[i - 1]) {
            cnt++;
        } else {
            pp.push([cnt, nums[i - 1]]);
            cnt = 1;
        }
    }
    
    pp.push([cnt, nums[nums.length - 1]]);

    pp.sort((a, b) => b[0] - a[0]); 

    let ans = [];
    for (let i = 0; i < k && i < pp.length; i++) {
        ans.push(pp[i][1]);
    }
    return ans;
};