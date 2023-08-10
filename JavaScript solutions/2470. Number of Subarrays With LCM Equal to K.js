/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarrayLCM = function (nums, k) {
  const GCD = (A, B) => {
    if (B == 0) return A;
    return GCD(B, A % B);
  };

  const LCM = (A, B) => {
    return (A * B) / GCD(A, B);
  };

  let ans = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === k) ans++;
    let lcm = nums[i];
    for (let j = i + 1; j < nums.length; j++) {
      let res = LCM(lcm, nums[j]);
      if (res == k) ans++;
      lcm = res;
      if (res > k) break;
    }
  }
  return ans;
};
