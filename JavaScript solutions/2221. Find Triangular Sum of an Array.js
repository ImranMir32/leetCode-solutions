/**
 * @param {number[]} nums
 * @return {number}
 */
var triangularSum = function (nums) {
  if (nums.length === 1) return nums[0];
  let st = [];
  let len = nums.length - 1;
  for (let i = 0; i <= len; i++) st.push(nums[i]);
  let cnt = 0;
  while (st.length > 1) {
    if (cnt === len) {
      len -= 1;
      st.shift();
      cnt = 0;
      continue;
    }
    if (st.length === 1) return st[0];

    let top1 = st[0];
    st.shift();
    let top2 = st[0];
    let sum = top1 + top2;
    if (sum > 9) st.push(sum % 10);
    else st.push(sum);
    cnt++;
  }

  return st[0];
};
