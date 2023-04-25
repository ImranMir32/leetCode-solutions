/**
 * @param {number} n
 * @return {boolean}
 */
var next = function (n) {
  var newNumber = parseInt(0);
  while (n != 0) {
    var num = parseInt(n % 10);
    newNumber += parseInt(num * num);
    n = parseInt(n / 10);
  }
  return newNumber;
};
var isHappy = function (n) {
  var slow = parseInt(next(n));
  var fast = parseInt(next(next(n)));
  while (slow != fast) {
    slow = next(slow);
    fast = next(next(fast));
  }
  return fast === 1;
};
