#include <vector>
enum Stats
{
  STATS_HP,
  STATS_STR,
  MAX_STATS
};


namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}
