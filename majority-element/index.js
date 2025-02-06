/**
 * @param {number[]} nums
 * @return {number}
 */
const majorityElement = function (nums) {
  const majority = nums.length / 2;
  const values = {};

  for (const num of nums) {
    values[num] ? values[num]++ : values[num] = 1;
    if (values[num] > majority) {
      return num;
    }
  }
};

const nums = [2, 2, 1, 1, 1, 2, 2];

console.log(majorityElement(nums));
