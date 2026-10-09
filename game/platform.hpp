// where the game talks to the platform (OS, windowing, graphics, input, etc.) [everything else doesn't touch raylib directly]
#pragma once

namespace platform {

struct Camera2D {}; 

struct Input {}; 

bool initialize(); 

void shutdown();

bool should_close(); 

float frame_time();

Input read_input();

void present(); 

void hud_line();

void end_frame();


} // namespace platform