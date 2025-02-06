#include <stdio.h>

#define arrSize 3

int removeDuplicates(int* nums, int numsSize) {
  int k = 0, i = 1;

  while (i < numsSize) {
    if (nums[k] != nums[i]) {
      nums[k + 1] = nums[i];
      k++;
    }
    i++;
  }

  return k + 1;
}

int main() {
  int nums[arrSize] = { 1, 1, 2 };

  int k = removeDuplicates(nums, arrSize);

  printf("key: %d\n", k);

  for (int i = 0; i < arrSize; i++) {
    printf("%d\n", nums[i]);
  }
  return 0;
}
