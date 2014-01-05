// Copyright 1999-2014 Aske Simon Christensen. See LICENSE.txt for usage terms.

/*

Binary Amiga code for the decrunch headers.

The .dat files are generated from the .bin files by the Makefile.

*/

#pragma once

unsigned char Header1[] = {
#include "Header1.dat"
};

unsigned char Header2[] = {
#include "Header2.dat"
};

unsigned char MiniHeader[] = {
#include "MiniHeader.dat"
};