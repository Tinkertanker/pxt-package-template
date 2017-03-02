/**
 * sample cpp package
 */
//% color=156 weight=80
declare namespace testcpp {

  /**
   * Says hello world, as defined in the ts file
   */
  //% weight=30 help=testcpp/helloWorld
  //% blockId=testcpp_block icon="\uf030" block="say hello world|%property" blockGap=8 shim=testcpp::helloWorld
  function helloWorld(duration: TestcppParams): void;
}
