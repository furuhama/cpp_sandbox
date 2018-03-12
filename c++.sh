#!/bin/sh

# return error when it gets too many args...
if [ $# -ge 2 ]
  then
    echo An error occured. Too many args.
else
  # compile .cpp file as temp.out by clang++ with c++11 extensions
  echo ==== compile start ====
  clang++ $1 -o temp.out -std=c++11

  # run compiled binary file
  echo === run binary file ===
  ./temp.out

  # delete compiled binary file
  echo ==== remove binary ====
  rm temp.out
fi

