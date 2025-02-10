#include <stdio.h>

#define arrSize 2

void reverse(int* arr, int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate(int* nums, int numsSize, int k) {
  int shift = k % numsSize;

  reverse(nums, 0, numsSize - 1);
  reverse(nums, 0, shift - 1);
  reverse(nums, shift, numsSize - 1);
}

int main() {
  int nums[arrSize] = { 1, 2 };
  int k = 3;

  rotate(nums, arrSize, k);

  for (int i = 0; i < arrSize; i++) {
    printf("%d\n", nums[i]);
  }

  return 0;
}
