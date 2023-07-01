//approach : 1
/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function (celsius) {
  let ans = [];
  ans.push(celsius + 273.15);
  ans.push(celsius * 1.8 + 32.0);
  return ans;
};

//approach : 2
/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function (celsius) {
  return [celsius + 273.15, celsius * 1.8 + 32.0];
};
