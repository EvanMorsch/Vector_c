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

Vector2D_t* Vector2D_Set(Vector2D_t* setVec, double x, double y)
{
	if (NULL != setVec)
	{
		setVec->x = x;
		setVec->y = y;
	}
	return setVec;
}

Vector2D_t* Vector2D_Copy(Vector2D_t* cpVec)
{
	Vector2D_t* newVec = NULL;

	if (NULL == cpVec) return NULL;

	newVec = malloc(sizeof(Vector2D_t));
	if (NULL != newVec) Vector2D_Set(newVec, x, y);
	return newVec;
}

//edits vec1
//shorthand for create_new_from_sum:
//	`vec3 = Vector2D_Add(Vector2D_Copy(vec1), vec2)`
Vector2D_t* Vector2D_Add(Vector2D_t* vec1, Vector2D_t* vec2)
{
	if (NULL == vec1 || NULL == vec2) return NULL;
	Vector2D_Set(vec1, vec1->x+vec2->x, vec1->y+vec2->y);
	return vec1;
}
//edits vec1
Vector2D_t* Vector2D_Subtract(Vector2D_t* vec1, Vector2D_t* vec2)
{
	if (NULL == vec1 || NULL == vec2) return NULL;
	Vector2D_Set(vec1, vec1->x-vec2->x, vec1->y-vec2->y);
	return vec1;
}

//edits vec1
Vector2D_t* Vector2D_Multiply(Vector2D_t* vec1, Vector2D_t* vec2)
{
	if (NULL == vec1 || NULL == vec2) return NULL;
	Vector2D_Set(vec1, vec1->x*vec2->x, vec1->y*vec2->y);
	return vec1;
}
//edits vec1
Vector2D_t* Vector2D_Divide(Vector2D_t* vec1, Vector2D_t* vec2)
{
	if (NULL == vec1 || NULL == vec2) return NULL;
	if (0 == vec2->x || 0 == vec2->y) return NULL;
	Vector2D_Set(vec1, vec1->x/vec2->x, vec1->y/vec2->y);
	return vec1;
}

//edits vec1
Vector2D_t* Vector2D_Scale(Vector2D_t* vec1, double scaler)
{
	if (NULL == vec1 || NULL == vec2) return;
	Vector2D_Set(vec1, vec1->x*scaler, vec1->y*scaler);
	return vec1;
}