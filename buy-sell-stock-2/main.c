#include <stdio.h>

#define arrSize 5

int maxPeriodProfit(int* prices, int pricesSize) {
  int profit = 0;

  for (int i = 0; i < pricesSize - 1; i++) {
    if (prices[i] < prices[i + 1]) {
      profit += prices[i + 1] - prices[i];
    }
  }

  return profit;
}

int main() {
  int prices[arrSize] = { 1, 2, 3, 4, 5 };

  printf("%d\n", maxPeriodProfit(prices, arrSize));

  return 0;
}
