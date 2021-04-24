#include <math.h>
#include <Point.h>

float distance(point a, point b)
{
  float dx = a.x - b.x;
  float dy = a.y - b.y;
  return sqrt(dx*dx + dy*dy); 
}
