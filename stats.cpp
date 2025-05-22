#include "stats.h"
#include <limits>   // for quiet_NaN
#include <cfloat>   // for FLT_MAX (min and max float)

namespace Statistics {

    Stats ComputeStatistics(const std::vector<float>& numbers) {
        Stats result;
        
        if (numbers.empty()) {
            result.average = std::numeric_limits<float>::quiet_NaN();
            result.minimum = std::numeric_limits<float>::quiet_NaN();
            result.maximum = std::numeric_limits<float>::quiet_NaN();
            return result;
        }

        // Initialize sum, min, and max values
        float sum = 0.0f;
        float min = FLT_MAX;
        float max = -FLT_MAX;

        // Loop to calculate sum, min, and max
        for (float num : numbers) {
            sum += num;
            if (num < min) min = num;
            if (num > max) max = num;
        }

        // Compute the average, minimum, and maximum
        result.average = sum / numbers.size();
        result.minimum = min;
        result.maximum = max;

        return result;
    }

}