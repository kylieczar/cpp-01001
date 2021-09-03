import <iostream>;

int main() {
  float num, triple;
  std::cout << "Write a number: ";
  std::cin >> num;
  triple = num * 3;
  std::cout << std::endl;
  std::cout << "The triple of "<< num << " is " << triple << std::endl;
  return 0;
}
