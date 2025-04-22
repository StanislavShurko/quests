#include <stdio.h>

#define arrSize 5

int jump(int* tiles, int tilesSize) {
  int smallest = 0, n = tilesSize, end = 0, far = 0;

  for (int i = 0; i < tilesSize - 1; i++) {
    if (far < i + tiles[i]) {
      far = i + tiles[i];
    }

    if (i == end) {
      smallest += 1;
      end = far;
    }
  }

  return smallest;
}

int main() {
  int prices[arrSize] = { 2, 3, 1, 1, 4 };

  printf("%d\n", jump(prices, arrSize));

  return 0;
}
