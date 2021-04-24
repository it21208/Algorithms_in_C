#include <math.h>
#include <Point.h>

float distance(point a, point b)
{
  /* Compute the distance between 2 points that have been defined in program Point.h */ 
  float dx = a.x - b.x;
  float dy = a.y - b.y;
  return sqrt(dx*dx + dy*dy);  /* sqrt(5) = 2.2360 */
}
