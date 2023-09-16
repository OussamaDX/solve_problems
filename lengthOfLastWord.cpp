// using namespace std;
#include <string.h>
#include <iostream>

int lengthOfLastWord(std::string s)
{
        int j = 0;
        while (s[j])
        {
            j++;
        }
        int i = j - 1;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        // int index = i;
        int count = 0;
        while (i >= 0 && s[i] != ' ')
        {
            i--;
            count++;
        }
        return count;
}

//last word dxl  

int main()
{
    std::cout <<lengthOfLastWord("a") << std::endl;
}
