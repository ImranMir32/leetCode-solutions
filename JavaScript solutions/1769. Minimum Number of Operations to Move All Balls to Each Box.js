//approach :1
/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function (boxes) {
  let n = boxes.length;
  let pref = new Array(n).fill(0);
  let ones = boxes[0] === "1" ? 1 : 0;

  for (let i = 1; i < n; i++) {
    pref[i] = pref[i - 1] + ones;
    if (boxes[i] === "1") ones++;
  }

  ones = 0;
  let prev = 0;

  for (let i = n - 1; i >= 0; i--) {
    pref[i] += prev;
    if (boxes[i] === "1") ones++;
    prev += ones;
  }

  return pref;
};

// approach :2
function minOperations(boxes) {
  const len = boxes.length;
  const v = [];

  for (let i = 0; i < len; i++) {
    if (boxes[i] === "0") {
      v.push(0);
    } else {
      v.push(i + 1);
    }
  }

  const res = [];

  for (let i = 0; i < len; i++) {
    let ans = 0;

    for (let j = 0; j < len; j++) {
      if (v[j] !== 0) {
        ans += Math.abs(i - v[j] + 1);
      }
    }

    res.push(ans);
  }

  return res;
}
