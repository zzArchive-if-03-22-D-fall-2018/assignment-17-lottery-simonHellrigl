/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			lottery.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * Implementation of a library for analyzing lottery tips.
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include "lottery.h"


static FILE* stream;
static char seperator;

#define MAX_LINE_LEN   (UUID_LEN + 1 + MAX_TIP_LEN + 1);
#define MAX_TIP_LEN   17;
#define UUID_LEN   40;


bool init_lottery(const char *csv_file, char csv_separator)
{
    stream = fopen(csv_file, "r");
    if (stream == 0)
    {
        return false;
    }

    seperator = csv_separator;
   return true;

}

bool get_tip(int tip_number, int tip[TIP_SIZE])
{
    fseek(tip_number, -TIP_SIZE / 2, SEEK_END)
}

bool set_drawing(int drawing_numbers[TIP_SIZE])
{
    return 0;
}

int get_tip_result(int tip_number)
{
    return -1;

}

int get_right_tips_count(int right_digits_count)
{

}
