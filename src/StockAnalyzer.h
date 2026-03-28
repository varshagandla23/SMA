#pragma once
#include <vector>

class StockAnalyzer {
public:
    double calculateMovingAverage(const std::vector<double>& prices, int window);
    double maxProfit(const std::vector<double>& prices);
};// StockAnalyzer header 
