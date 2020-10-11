#ifndef test_h
#define test_h

#include <stdio.h>

typedef enum var { hoge, puyo } var;

// #define def_var template <var variable>
// #define def_fnc test<variable>

template <var variable> class Test {
private:
  // test(const test<variable> &);

  // void operator=(const test<variable> &obj){};
  // test(const test<variable> &obj){};

  Test();

public:
  int a = 0;
  static Test<variable> &getInstance();
};

#include "Test.tpp"
#endif