import <iostream>;
import <cmath>;

void read_start(float *x) {
  std::cout << "Write the start value: ";
  std::cin >> *x;
}

void read_final(float *x) {
  std::cout << "Write the final value: ";
  std::cin >> *x;
}



int main() {
  float start_val, final_val, dif_val, percentage;

  do {
    read_start(&start_val);
  } while (!(start_val >= 0));
  
  std::cout << std::endl;
  
  do {
    read_final(&final_val);
  } while (!(start_val >= 0));
  
  std::cout << std::endl;
  
  dif_val = final_val - start_val;
  
  percentage = abs(dif_val)/start_val * 100;
  
  if (dif_val < 0) {
    std::cout << "The percent variance is -" << percentage << "%" << std::endl;
  } else {
    std::cout << "The percent variance is +" << percentage << "%" << std::endl;
  }
}

