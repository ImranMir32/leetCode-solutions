/**
 * @param {number[]} nums
 * @return {number}
 */
var distinctPrimeFactors = function (nums) {
  st = new Set();
  const primeFact = (n) => {
    while (n % 2 == 0) {
      st.add(2);
      n /= 2;
    }
    let ans = Math.sqrt(n);
    for (let i = 3; i <= ans; i += 2) {
      while (n % i == 0) {
        st.add(i);
        n /= i;
      }
    }
    if (n > 2) st.add(n);
  };

  for (let i = 0; i < nums.length; i++) {
    primeFact(nums[i]);
  }
  return st.size;
};
