#include <stdio.h>
/* more headers goes there */

/* print numbers regardless the sign negative positive zero*/
int main(void) {
int l;
    for( l = 0; l < 26 ; l++ )
    if (l != 4 && l != 16)
    putchar( 'a' + l );
    putchar ('\n');

    return 0;
}
