#include "./includes/miniRt.h"

float abs1(float x)
{   
    if(x > 0)
        return x;
    else 
        return -x;
}

int is_equal(float a, float b)
{
    if(abs(a-b) < EPSILON)
        return TRUE;
    else
        return FALSE;
}

int is_greater(float a, float b)
{
    if(a - b >= EPSILON)
        return TRUE;
    return FALSE;
}

int is_lesser(float a, float b)
{
    if(a - b <= EPSILON)
        return TRUE;
    return FALSE;
}



int is_pos(int a)
{
    if (a >= 0)
        return (1);
    return (0);
}
