#pragma once

#ifndef PCRE2_CODE_UNIT_WIDTH
#define PCRE2_CODE_UNIT_WIDTH 8
#endif

#if defined(__has_include) && __has_include("../src/pcre2.h.generic")
#include "../src/pcre2.h.generic"
#else
#include "pcre2.h.generic"
#endif
