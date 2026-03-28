// DataLoader header 
#pragma once
#include <vector>
#include <string>

class DataLoader {
public:
    std::vector<double> loadPrices(const std::string& filename);
};
