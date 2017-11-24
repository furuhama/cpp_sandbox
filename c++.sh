#!/bin/zsh

# compile .cpp file as temp.out by clang++
clang++ $1 -o temp.out

# run compiled binary file
./temp.out

# delete compiled binary file
rm temp.out

