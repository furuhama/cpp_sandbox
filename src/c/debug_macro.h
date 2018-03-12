/* Copyright 2018 furuhama */

#ifndef _SRC_C_DEBUG_MACRO_H_
#define _SRC_C_DEBUG_MACRO_H_

#define DEBUG(type, var) printf(#var "\t= %" #type "\n", (var))

#endif  // _SRC_C_DEBUG_MACRO_H_
