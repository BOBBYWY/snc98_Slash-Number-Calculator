#ifndef _decPosit_h_
#define _decPosit_h_

// Copyright (c) 2021 Jens Grabner
// Email: jens@grabner-online.org
// https://github.com/JensGrabner/snc98_Slash-Number-Calculator/tree/master/Software/Arduino/libraries/decPosit

#include <stdint.h>  // uintX_t types
#include <stdlib.h> 
#include <Arduino.h>

#include <int96.h>
// Original:  http://www.naughter.com/int96.html
// https://github.com/JensGrabner/snc98_Slash-Number-Calculator/tree/master/Software/Arduino/libraries/int96

////////// Defines ///////////////////////

struct R_int8{   //     1/64 .. 64/1
	int8_t num;        // <-- numerator
	int8_t denom;      // <-- denominator
};

typedef uint8_t decPosit_8;

////////// Functions ///////////////////////

R_int8 to_Ratio_8(decPosit_8);

#endif