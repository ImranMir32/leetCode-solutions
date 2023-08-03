/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function (dividend, divisor) {
  if (dividend === Math.pow(-2, 31) && divisor === -1)
    return Math.pow(2, 31) - 1;
  if (dividend === Math.pow(-2, 31) && divisor === 1) return Math.pow(-2, 31);

  let dd = Math.abs(dividend);
  const dv = Math.abs(divisor);
  let res = 0;
  while (dv <= dd) {
    let mul = dv;
    let tmp = 1;
    while (mul <= dd - mul) {
      mul += mul;
      tmp += tmp;
    }
    res += tmp;
    dd -= mul;
  }
  if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    return -res;
  return res;
};
