//approach : 1
/**
 * @param {number} n
 * @return {string[]}
 */

var fizzBuzz = function (n) {
  var v = [];
  for (var i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) v.push("FizzBuzz");
    else if (i % 3 == 0) v.push("Fizz");
    else if (i % 5 == 0) v.push("Buzz");
    else v.push(`${i}`);
  }
  return v;
};

//approach : 2
/**
 * @param {number} n
 * @return {string[]}
 */
var v = [];
const preCal = () => {
  for (var i = 1; i <= 10000 + 7; i++) {
    if (i % 3 == 0 && i % 5 == 0) v.push("FizzBuzz");
    else if (i % 3 == 0) v.push("Fizz");
    else if (i % 5 == 0) v.push("Buzz");
    else v.push(`${i}`);
  }
};

var fizzBuzz = function (n) {
  preCal();
  var ans = [];
  for (var i = 0; i < n; i++) ans.push(v[i]);
  return ans;
};
