#include <stdio.h>
#include<math.h>
int main()
{
    double distance=0;
struct position{
    double north;
    double east;
};
struct position kathmandu;
kathmandu.north=27.7172;
kathmandu.east=85.3240;
struct position pokhara;
pokhara.north=28.2096;
pokhara.east=83.9856;
distance=sqrt(pow((pokhara.north-kathmandu.north),2)+pow((pokhara.east-kathmandu.east),2));
printf("%lf\n",distance);
    return 0;
}
