// StockAnalyzer implementation 
#include "StockAnalyzer.h"
#include <algorithm>

double StockAnalyzer::calculateMovingAverage(const std::vector<double>& prices, int window) {
    if (prices.size() < window) return 0.0;
    double sum = 0;
    for (int i = 0; i < window; i++) sum += prices[i];
    return sum / window;
}

double StockAnalyzer::maxProfit(const std::vector<double>& prices) {
    double minPrice = prices[0], maxProfit = 0;
    for (double price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    return maxProfit;
}
