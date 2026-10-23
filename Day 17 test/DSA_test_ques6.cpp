//Question 6: The Best Buy-and-Sell Day

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    cout << maxProfit;

    return 0;
}
