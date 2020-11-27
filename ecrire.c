#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <uvsqgraphics.h>

int
main ()
{

  init_graphics (1300, 710);
  FILE *f;
  f = fopen ("x_y_sation.txt", "w");
  POINT p;
  int i;
  for (i = 1; i <= 80; i++)
    {
      printf ("---> %d\n", i);
      p = wait_clic ();
      draw_fill_circle (p, 1, rouge);
      fprintf (f, "%d %d %d \n", i, p.x, p.y);
    }
  fclose (f);
  wait_clic ();

  return 0;
}
