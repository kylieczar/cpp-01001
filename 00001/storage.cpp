import <iostream>;

void print(char variable, int value) {
  std::cout << "value of " << variable << ": " << value << std::endl;
}

int main() {
  int a, b, c, d;
  d = 0;
  print('d',d);
  a = 2;
  print('a',a);
  b = 3;
  print('b',b);
  c = 5;
  print('c',c);
  c++;
  print('c',c);
  d = a + c;
  print('d',d);
  return 0;
}
