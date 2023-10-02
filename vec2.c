/* 	@file vec2.c
 *  @brief
 */
 
#include "vec2.h"
#include <math.h>

Vector2D_t Vector2D_New(double x, double y)
{
	Vector2D_t newVec;

	newVec.x = x;
	newVec.y = y;

	return newVec;
}

Vector2D_t Vector2D_Add(Vector2D_t vec1, Vector2D_t vec2)
{
	Vector2D_t newVec = Vector2D_New(vec1.x+vec2.x, vec1.y+vec2.y);
	return newVec;
}
Vector2D_t Vector2D_Subtract(Vector2D_t vec1, Vector2D_t vec2)
{
	Vector2D_t newVec = Vector2D_New(vec1.x-vec2.x, vec1.y-vec2.y);
	return newVec;
}

Vector2D_t Vector2D_Multiply(Vector2D_t vec1, Vector2D_t vec2)
{
	Vector2D_t newVec = Vector2D_New(vec1.x*vec2.x, vec1.y*vec2.y);
	return newVec;
}
Vector2D_t Vector2D_Divide(Vector2D_t vec1, Vector2D_t vec2)
{
	//im gonna allow the user to attempt to div_by_zero for now
	Vector2D_t newVec = Vector2D_New(vec1.x/vec2.x, vec1.y/vec2.y);
	return newVec;
}

Vector2D_t Vector2D_Scale(Vector2D_t vec1, double scaler)
{
	Vector2D_t newVec = Vector2D_New(vec1.x*scaler, vec1.y*scaler);
	return newVec;
}
double Vector2D_Distance(Vector2D_t a, Vector2D_t b)
{
    double dx = a.x-b.x, dy = a.y-b.y;
    return sqrt((dx*dx) + (dy*dy));
}
