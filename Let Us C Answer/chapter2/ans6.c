#include <math.h>
#include <stdio.h>

int main(void)
{
    float t, v, wcf;
    printf("Enter temperature and velocity of a place: ");
    scanf("%f %f", &t, &v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind Chill Factor of that place is: %f\n", wcf);
}