#include <stdio.h>

#define arrSize 6

int maxProfit(int* prices, int pricesSize) {
  int profit = 0, buy = prices[0];

  for (int i = 1; i < pricesSize; i++) {
    if (prices[i] > buy) {
      if (profit < prices[i] - buy) {
        profit = prices[i] - buy;
      }
    }
    else {
      buy = prices[i];
    }
  }

  return profit;
}

int main() {
  int prices[arrSize] = { 3,2,6,5,0,3 };

  printf("%d\n", maxProfit(prices, arrSize));

  return 0;
}
