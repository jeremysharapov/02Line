#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 255;
  c.green = 255;
  c.blue = 255;

  clear_screen(s);

  draw_line(0, 250, 500, 250, s, c); //x
  draw_line(250, 0, 250, 500, s, c); //y
  draw_line(0, 0, 500, 500, s, c); // y = x
  draw_line(0, 500, 500, 0, s, c); // y = -x

  draw_line(250, 250, 500, 375, s, c); //O1
  draw_line(250, 250, 375, 500, s, c); //O2
  draw_line(250, 250, 500, 125, s, c); //O8
  draw_line(250, 250, 375, 0, s, c); //O7
  draw_line(250, 250, 125, 500, s, c); //O3
  draw_line(250, 250, 0, 375, s, c); //O4
  draw_line(250, 250, 0, 125, s, c); //O5
  draw_line(250, 250, 125, 0, s, c); //O6
  
  display(s);
  save_extension(s, "lines.png");
}
