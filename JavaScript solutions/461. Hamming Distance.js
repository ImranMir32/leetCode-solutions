/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function (x, y) {
  let s = "";
  let st = "";

  if (x < y) {
    let temp = x;
    x = y;
    y = temp;
  }

  while (x !== 0) {
    let r = 0;
    if (x % 2) r = 1;
    s += r.toString();
    x = Math.floor(x / 2);
  }

  while (y !== 0) {
    let r = 0;
    if (y % 2) r = 1;
    st += r.toString();
    y = Math.floor(y / 2);
  }

  for (let i = st.length; i < s.length; i++) st += "0";

  let cnt = 0;
  for (let i = s.length - 1; i >= 0; i--) {
    if (s[i] !== st[i]) cnt++;
  }
  return cnt;
};
