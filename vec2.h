/* 	@file vec2.h
 *  @brief
 */
 
#ifndef vec2_h
#define vec2_h
 
#include <stdlib.h>

/*
 *  @brief The stucture of a 2 dimensional vector.
 */
typedef struct Vector2D_t Vector2D_t;
struct Vector2D_t
{
	double x;
	double y;
};

Vector2D_t Vector2D_New(double, double);

Vector2D_t Vector2D_Add(Vector2D_t, Vector2D_t);
Vector2D_t Vector2D_Subtract(Vector2D_t, Vector2D_t);
Vector2D_t Vector2D_Multiply(Vector2D_t, Vector2D_t);
Vector2D_t Vector2D_Divide(Vector2D_t, Vector2D_t);
Vector2D_t Vector2D_Scale(Vector2D_t, double);

#endif
