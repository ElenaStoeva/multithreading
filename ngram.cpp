#include <iostream>

#include "ngram_counter.hpp"

// this program computes word frequencies for all .h and .c files in the given directory and its subdirectories
int main(int argc, char *argv[])
{
  if (argc < 4)
  {
    std::cout << "Usage: " << argv[0] << " <dir> -t=<num-threads> -n=<n-gram>" << std::endl;
    return 1;
  }

  wc::wordCounter word_counter(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
  word_counter.compute();
}
