/* 	@file vec2.c
 *  @brief
 */
 
#include "vec2.h"

Vector2D_t* Vector2D_Create(double x, double y)
{
	Vector2D_t* newVec = NULL;

	newVec = malloc(sizeof(Vector2D_t));
	if (NULL != newVec) Vector2D_Set(newVec, x, y);
	return newVec;
}
void Vector2D_Destroy(Vector2D_t* desVec)
{
	if (NULL != newVec)
	{
		free(desVec);
	}
}

void Vector2D_Set(Vector2D_t* setVec, double x, double y)
{
	if (NULL != setVec)
		setVec->x = x;
		setVec->y = y;
	}
}

Vector2D_t* Vector2D_Copy(Vector2D_t* cpVec)
{
	Vector2D_t* newVec = NULL;

	if (NULL == cpVec) return NULL;

	newVec = malloc(sizeof(Vector2D_t));
	if (NULL != newVec) Vector2D_Set(newVec, x, y);
	return newVec;
}