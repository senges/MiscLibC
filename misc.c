#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "misc.h"

/* Array pretty print */
void pprint(void * buffer, size_t size, type_t t) {
    int i;
    char format[STANDARD_BUFFER_SIZE];

    switch (t)
    {
    case INT:
        snprintf(format, 5, "[%d] ");
        break;
    case FLOAT:
        snprintf(format, 7, "[%.2f] ");
        break;
    case STRING:
        snprintf(format, 5, "[%s] ");
        break;
    default:
        printf("Unknown type\n");
        return;
    }

    /* Not yet implemented */
}

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
void program_panic(const char * err_msg, const int err_code) {
    fprintf(stderr, "Program panic in file `%s' line %d\n", __FILE__, __LINE__);
    fprintf(stderr, "Error code [%d] : %s\n", err_code, err_msg);

    exit(EXIT_FAILURE);
}