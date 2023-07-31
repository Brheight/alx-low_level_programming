#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be updated.
 * @to: Pointer whose value will be set to the pointer s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
