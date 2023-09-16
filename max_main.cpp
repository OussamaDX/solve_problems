#include <vector>

using namespace std;

int min(vector<int> list)
{
    int n = list.size();
    if (n == 0)
    {
        std::cerr << "Error: Empty vector." << std::endl;
        return -1;
    }
    int minValue = *min_element(list.begin(), list.end());
    return minValue;
}

int max(vector<int> list){
    
    int n = list.size();
    if (n == 0)
    {
        std::cerr << "Error: Empty vector." << std::endl;
        return -1;
    }
    int max = *max_element(list.begin(), list.end());
    return max;
}