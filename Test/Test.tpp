#include "Test.h"

template <var variable> Test<variable>::Test() { printf("hanazon"); }

template <var variable> Test<variable> &Test<variable>::getInstance() {
  static Test dirtest;
  return dirtest;
}
