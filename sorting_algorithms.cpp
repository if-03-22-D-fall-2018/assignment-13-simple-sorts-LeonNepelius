/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <math.h>
#include <unistd.h>
#include "time.h"
void init_random(int array[], int length)
{
  srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}
void bubble_sort(int small_array[], int SMALL)
{

}
void insertion_sort(int small_array[], int SMALL)
{

}
