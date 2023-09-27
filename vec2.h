/* 	@file vec2.h
 *  @brief
 */
 
#ifndef vec2_h
#define vec2_h
 
#include <stdlib>

/*
 *  @brief The stucture of a 2 dimensional vector.
 */
typedef struct Vector2D_t Vector2D_t;
struct Vector2D_t
{
	double x;
	double y;
};

Vector2D_t* Vector2D_Create(double, double);
void Vector2D_Destroy(Vector2D_t*);

void Vector2D_Set(Vector2D_t*, double, double);

Vector2D_t* Vector2D_Copy(Vector2D_t* );

#endif
