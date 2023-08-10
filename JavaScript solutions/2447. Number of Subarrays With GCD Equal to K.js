/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarrayGCD = function (nums, k) {
  const GCD = (A, B) => {
    if (B == 0) return A;
    return GCD(B, A % B);
  };

  let ans = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] == k) ans++;
    let gcd = nums[i];
    for (let j = i + 1; j < nums.length; j++) {
      let res = GCD(gcd, nums[j]);
      if (res == k) ans++;
      gcd = res;
    }
  }
  return ans;
};
