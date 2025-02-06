/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
const removeElement = function (nums, val) {
  let firstPointer = 0, secondPointer = nums.length - 1;

  while (firstPointer != secondPointer + 1) {
    if (nums[firstPointer] === val) {
      nums[firstPointer] = nums[secondPointer];
      nums[secondPointer] = ":-)";
      secondPointer--;
    } else {
      firstPointer++;
    }
  }

  return firstPointer;
};

const numsArray = [1, 2, 3];

const k = removeElement(numsArray, 2);

console.log(k, numsArray);
