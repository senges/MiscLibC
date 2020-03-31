#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "misc.h"

/* Print on stdout if v_flag != 0 */
int verbose(const char * restrict format, ...) {
    if(v_flag == 0)
        return 0;

    va_list args;
    va_start(args, format);
    int ret = vprintf(format, args);
    va_end(args);

    return ret;
}

/* Program panic */
void program_panic(const char * msg, const int code) {
    fprintf(stderr, "Program panic in file `%s' line %d\n", __FILE__, __LINE__);
    fprintf(stderr, "Error code [%d] : %s\n", code, msg);

    exit(EXIT_FAILURE);
}