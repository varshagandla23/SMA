// UI implementation 
#include "UI.h"
#include <iostream>

void UI::run() {
    DataLoader loader;
    auto prices = loader.loadPrices("data/sample_prices.csv");

    StockAnalyzer analyzer;
    std::cout << "Moving Average (3-day): " 
              << analyzer.calculateMovingAverage(prices, 3) << "\n";
    std::cout << "Max Profit: " 
              << analyzer.maxProfit(prices) << "\n";
}
