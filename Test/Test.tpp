#include "Test.h"

CTTP_CLASS CTTP_FNC::Test() {
  printf("コンストラクタ,\tcounter = %d,\tTP_VAR = %d\n", counter, variable);
  counter++;
}

CTTP_CLASS CTTP_FNC &CTTP_FNC::getInstance() {
  static Test instance;
  printf("getInstance,\tcounter = %d,\tTP_VAR = %d\n", instance.counter,
         variable);
  instance.counter++;
  return instance;
}
