#pragma once
#include <vector>

namespace Statistics {

    struct Stats {
        float average;
        float minimum;
        float maximum;
    };

    Stats ComputeStatistics(const std::vector<float>& numbers);  // Declare the function

}