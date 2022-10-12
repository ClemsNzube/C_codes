#include <stdio.h>

/** 
* main - Bermuda Rectangle Game
*/

/* Move South_East */
void go_south_east(int *lat, int *lon)
{
    *lat -= 1;
    *lon += 1;
}

/* Move North_East */
void go_north_east(int *lat, int *lon)
{
    *lat += 1;
    *lon += 1;
}

/* Move North_West */
void go_north_west(int *lat, int *lon)
{
    *lat += 1;
    *lon -= 1;
}

/* Move South_West */
void go_south_west(int *lat, int *lon)
{
    *lat -= 1;
    *lon -= 1;
}


int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Avast!  Now  at:  [%i,  %i]\n", latitude, longitude);
    return 0;
}

