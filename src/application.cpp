#include <iostream>

#include "config.h"
#include <static.h>
#include <shared.h>

int main() {
  
  std::cout << examples::getversion() << std::endl;

  std::cout << (PROJECT_VERSION) << std::endl;
  
  std::cout << version::getname() <<std::endl;

  int i1{1};
  int i2{2};

  std::cout << examples::getBool(i1, i2) << std::endl;

  return 0;
} 