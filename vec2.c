/* 	@file vec2.c
 *  @brief
 */
 
#include "vec2.h"

/*
 *  @brief The stucture of a 2 dimensional vector.
 */
typedef struct Vector2D_t Vector2D_t;
struct Vector2D_t
{
	double x;
	double y;
};

Vector2D_t* Vector2D_Create(double x, double y)
{
	Vector2D_t* new_vec = NULL;

	new_vec = malloc(sizeof(Vector2D_t));
	if (NULL != new_vec)
	{
		new_vec->x = x;
		new_vec->y = y;
	}
	return new_vec;
}

void Vector2D_Destroy(Vector2D_t* desVec)
{
	if (NULL != new_vec)
	{
		free(desVec);
	}
}