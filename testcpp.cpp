#include "pxt.h"

using namespace pxt;

enum class TestcppParams {
  //% block = "forever"
  Forever = 0,
  //% block = "for now"
  ForNow = 1,
};

/**
 * Sample comment block
 */
//% color=156 weight=80
namespace testcpp {

  /**
   * Sample hello world function
   */
  //% weight=30 help=testcpp/helloWorld
  //% blockId=devices_camera icon="\uf030" block="helloWorld|%property" blockGap=8
  void helloWorld(TestcppParams duration) {
  }
}
