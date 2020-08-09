#include "vector3d.h"

int main (int, char *[])
{
    MGLEngine::vector3d v(1, 2, 4);
    MGLEngine::vector3d v2;
    v.print();
    v2.print();

    v+=1.1111;
    v2/=0.1;
    MGLEngine::vector3d v3 = v * v2;

    v.print();
    v2.print();

    v3 %= v2;
    v3.print();    
    return (0);
}