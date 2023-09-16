int nthEven(int n) {
 int i = 1;
  int res = 0;
  while (i < n)
  {
    res += 2;
    i++;
  }
  return res;
}