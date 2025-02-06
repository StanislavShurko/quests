#include <stdio.h>

#define arrSize 7


void rotate(int* nums, int numsSize, int k) {
  int shifts = k % numsSize;

  for (int i = 0; i < numsSize; i++) {

  }
}

int main() {
  int nums[arrSize] = { 1, 2, 3, 4, 5, 6, 7 };
  int k = 3;

  rotate(nums, arrSize, k);

  for (int i = 0; i < arrSize; i++) {
    printf("%d\n", nums[i]);
  }

  return 0;
}
