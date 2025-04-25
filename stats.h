#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
    {
        double average;
        double minimum;
        double maximum;
        Stats(double avg = 0.0, double min = 0.0, double max = 0.0)
            : average(avg), minimum(min), maximum(max) {}
    };
    
    Stats ComputeStatistics(const std::vector<double>& );
}
