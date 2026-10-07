#pragma once

#include "render/draw_list.hpp"

namespace platform {

bool initialize (int width, int height, const char* title); // raylib is in C, strings are char ptrs
void shutdown ();

bool should_close (); 



} // namespace platform