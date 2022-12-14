#include <stdio.h>

int main ()
{
  int pre_sec, h, m, s;

  printf ("Enter number of seconds: ");
  scanf ("%d", &pre_sec);

  h = (pre_sec / (60 * 60)) % 24;
  m = (pre_sec / 60) % 60;
  s = pre_sec % 60;

  printf (
      "\thour:   %2d\n\tminute: %2d\n\tsecond: %2d\n\nThe time is %02d: %02d: %02d\n"
       ,h, m, s, h, m, s
  );
}
