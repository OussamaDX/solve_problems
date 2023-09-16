#include <string>

std::string abbrevName(std::string name)
{
  std::string dst;
  dst += name[0];
  for (size_t i = 1;i < name.length();i++)
  {
    if (name[i] == ' ')
    {
      dst += ".";
      dst += name[i + 1];
      break;
    }
  }
  for (size_t i = 0;i < dst.length();i++)
  {
    dst[i] = std::toupper(dst[i]); // Convert each character to uppercase and update the string
  }
  return dst;
}