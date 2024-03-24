#include "config.h"

#include "static.h"

namespace examples {

  int getversion() {
    return (PROJECT_VERSION);
  }

  bool getBool(int &val1, int &val2) {
    
    return (val1 == val2);

  }

  int getInt(int &val1, int &val2) {

    if (val1 == val2) {
      return 1;
    } else {
      return 0;
    }

  }
}