#ifndef test_h
#define test_h

#include <stdio.h>

typedef enum TP_VAR { hoge, puyo } TP_VAR;

#define CTTP_CLASS template <TP_VAR variable>
#define CTTP_FNC Test<variable>

CTTP_CLASS class Test {
private:
  Test();

public:
  int counter = 0;
  static CTTP_FNC &getInstance();
};

#include "Test.tpp"
#endif