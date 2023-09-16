#include <iostream>
using namespace std; 

int count_sheep(vector<bool> arr) 
{
  size_t found = 0;
  for (size_t i = 0;i < arr.size();i++)
  {
    if (arr[i] == true)
      found++;
  }
  if (!found)
    return 0;
  else
    return found;
}
