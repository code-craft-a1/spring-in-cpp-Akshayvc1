#include "stats.h"
#include <limits>

Stats Statistics::ComputeStatistics(const std::vector<double>& statsVec) {
    //Implement statistics here
    if (statsVec.empty()) {
 		   double nan = std::numeric_limits<double>::quiet_NaN();
 		   return Statistics::Stats(nan, nan, nan);
 	}
 	
 	double sum = 0.0;
 	double minVal = statsVec[0];
 	double maxVal = statsVec[0];
 
 	for (int i=0; i<statsVec.size(); i++) {
 		sum += statsVec[i];
 		if (statsVec[i] < minVal) 
            minVal = statsVec[i];
 		if (statsVec[i] > maxVal) 
            maxVal = statsVec[i];
 	}
 
 	double avg = sum / statsVec.size();
 	return Statistics::Stats(avg, minVal, maxVal);
}
