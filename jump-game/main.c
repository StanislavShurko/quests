#include <stdio.h>

#define arrSize 5

int canJump(int* tiles, int tilesSize) {
  int targetIndex = tilesSize - 1;

  for (int i = tilesSize - 1; i >= 0; i--) {
    if (i + tiles[i] >= targetIndex) {
      targetIndex = i;
    }
  }

  return targetIndex == 0;
}

int main() {
  int prices[arrSize] = { 2, 3, 1, 1, 4 };

  printf("%d\n", canJump(prices, arrSize));

  return 0;
}
