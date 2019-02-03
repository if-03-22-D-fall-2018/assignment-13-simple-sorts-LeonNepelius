/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

clock_t start_t;
clock_t end_t;

void start_stopwatch()
{
    start_t = clock();
}
int elapsed_time()
{
    if (end_t < start_t)
    {
        return clock() - start_t;
    }
    return end_t - start_t;
}
void stop_stopwatch()
{
    end_t = clock();
}
