#include "mux_2to1_tb.h"

double sc_time_stamp() {
  return 0;
}

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  mux_2to1Test tb;

  std::cout << "============ Running mux_2to1 Testbench ============\n";
  return tb.run_all_tests() ? 0 : 1;
}