#include <iostream>

#include <stdio.h>
#include "Test/Test.h"

int main() {
  printf("hoge-----------------------------------------------\n");
  Test<hoge> &hogeInstance = Test<hoge>::getInstance();
  printf("hogeInstance\tcounter = %d\n", hogeInstance.counter);
  Test<hoge> &hogeInstance2 = Test<hoge>::getInstance();
  printf("hogeInstance2\tcounter = %d\n", hogeInstance2.counter);
  hogeInstance2.counter = 100;
  printf("hogeInstance\tcounter = %d\n", hogeInstance.counter);
  printf("hogeInstance2\tcounter = %d\n", hogeInstance2.counter);

  printf("puyo-----------------------------------------------\n");
  Test<puyo> &puyoInstance = Test<puyo>::getInstance();
  printf("puyoInstance\tcounter = %d\n", puyoInstance.counter);
  Test<puyo> &puyoInstance2 = Test<puyo>::getInstance();
  printf("puyoInstance2\tcounter = %d\n", puyoInstance2.counter);
  puyoInstance2.counter = 100;
  printf("puyoInstance\tcounter = %d\n", puyoInstance.counter);
  printf("puyoInstance2\tcounter = %d\n", puyoInstance2.counter);

  printf("all------------------------------------------------\n");
  printf("hogeInstance\tcounter = %d\n", hogeInstance.counter);
  printf("hogeInstance2\tcounter = %d\n", hogeInstance2.counter);
  printf("puyoInstance\tcounter = %d\n", puyoInstance.counter);
  printf("puyoInstance2\tcounter = %d\n", puyoInstance2.counter);
}
