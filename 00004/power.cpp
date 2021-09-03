import <iostream>;

void read(int *b ,int *p) {
  int x,y;
  std::cout << "Write the base number: ";
  std::cin >> *b;
  std::cout << "Write the power number: ";
  std::cin >> *p;
}

int main() {
  int b, p, power;
  
  read(&b, &p);
  while (p < 0 || b <= 1) {
    std::cout << "Invalid input!" << std::endl;;
    std::cout << std::endl;
    read(&b, &p);
  }
  
  power = b;
  if (p > 0) {
    for (int i = 1; i < p; i++) {
      power = power * b;
    }
  }
  std::cout << std::endl;
  std::cout << b << " to the power of " << p << " is " << power << std::endl;
  return 0;
}
