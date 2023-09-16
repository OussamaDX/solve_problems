#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  size_t res = 0;
  for (size_t i = 0;i < numbers.size() ; i++)
  {
    res += numbers[i] * numbers[i];
  }
  return res;
}
