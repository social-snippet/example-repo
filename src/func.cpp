// @snip<func/sub_func_1.cpp>
// @snip<func/sub_func_2.cpp>
// @snip<func/sub_func_3.cpp>

int func() {
  int res = 0;
  res += sub_func_1();
  res += sub_func_2();
  res += sub_func_3();
  res *= 2;
  return res;
}
