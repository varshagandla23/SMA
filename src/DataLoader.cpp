// DataLoader implementation 
#include "DataLoader.h"
#include <fstream>
#include <sstream>

std::vector<double> DataLoader::loadPrices(const std::string& filename) {
    std::vector<double> prices;
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || !isdigit(line[0])) continue; // skip headers
        std::stringstream ss(line);
        std::string date, priceStr;
        std::getline(ss, date, ',');
        std::getline(ss, priceStr, ',');
        prices.push_back(std::stod(priceStr));
    }
    return prices;
}
