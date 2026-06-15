function minSubArrayLen(target, nums) {
    var sortedNumbers = nums
        .map(function (num, index) { return ({ num: num, index: index }); })
        .sort(function (a, b) { return b.num - a.num; });
    target -= sortedNumbers[0].num;
    if (target <= 0) {
        return 1;
    }
    var leftIndex = sortedNumbers[0].index - 1;
    var rightIndex = sortedNumbers[0].index + 1;
    var leftStop = leftIndex === -1;
    var rightStop = rightIndex === nums.length;
    if (leftStop && rightStop && target > 0) {
        return 0;
    }
    while (target > 0) {
        if ((nums[leftIndex] >= nums[rightIndex] || rightStop) &&
            leftStop === false) {
            console.log("left", leftIndex, nums[leftIndex]);
            target -= nums[leftIndex];
            if (target > 0 && leftIndex > 0) {
                leftIndex -= 1;
            }
            else if (leftIndex === 0) {
                console.log("left stop");
                leftStop = true;
            }
        }
        else if (rightStop === false || leftStop) {
            console.log("right", rightIndex, nums[rightIndex]);
            target -= nums[rightIndex];
            if (target > 0 && rightIndex < nums.length - 1) {
                rightIndex += 1;
            }
            else if (rightIndex === nums.length - 1) {
                console.log("right stop");
                rightStop = true;
            }
        }
        else {
            return 0;
        }
        if (leftStop && rightStop && target > 0) {
            return 0;
        }
    }
    console.log("left", leftIndex, "right", rightIndex);
    return rightIndex - leftIndex;
}
console.log(minSubArrayLen(15, [1, 2, 3, 4, 5]));
// minSubArrayLen(213, [12, 28, 83, 4, 25, 26, 25, 2, 25, 25, 25, 12]),
