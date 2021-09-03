import <iostream>;

int main() {
  float x, y, product;
  std::cout << "Write the first number: ";
  std::cin >> x;
  std::cout << "Write the second number: ";
  std::cin >> y;
  product = x * y;
  std::cout << std::endl;
  std::cout << "The product of "<< x << " and " << y << " is " << product << std::endl;
  return 0;
}
