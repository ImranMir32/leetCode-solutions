//Approach : 1
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

//approach : 2
/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
  const checked = [];
  while (n !== 1) {
    if (checked.includes(n)) return false;
    checked.push(n);
    n = n
      .toString()
      .split("")
      .map((i) => i ** 2)
      .reduce((sum, i) => sum + i, 0);
  }
  return true;
};
