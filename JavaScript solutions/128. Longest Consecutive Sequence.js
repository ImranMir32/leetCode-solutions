/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    if (nums.length === 0) return 0;

    let mp = new Map();
    for (let i = 0; i < nums.length; i++) {
        mp.set(nums[i], (mp.get(nums[i]) || 0) + 1);
    }
    
    let v = Array.from(mp.keys()).sort((a, b) => a - b);

    let cnt = 1;
    let ans = 0;
    for (let i = 1; i < v.length; i++) {
        if (v[i] - v[i - 1] === 1) {
            cnt++;
        } else {
            ans = Math.max(ans, cnt);
            cnt = 1;
        }
    }
    ans = Math.max(ans, cnt);
    return ans;
};