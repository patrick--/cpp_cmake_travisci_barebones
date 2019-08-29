#include <iostream>
#include "public_api.h"
#include "private_api.h"

int main() {
  std::cout << "Main launched!!" << std::endl;
  std::cout << "Calling add(1,2) from public_api.h: " << add(1,2) << std::endl;
  std::cout << "Calling internal_add(1,2) from internal_api.h: " << internal_add(1,2) << std::endl;
  
  return 0;
}
