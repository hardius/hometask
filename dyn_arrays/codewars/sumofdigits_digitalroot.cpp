int sum_of_digits(int n)
{
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int digital_root(int n)
{
  int s = sum_of_digits(n);
  while (s > 9) {
    s = sum_of_digits(s);
  }
  return s;
}