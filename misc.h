#define DEFAULT_ERR_CODE    -1
#define DEFAULT_ERR_MSG     "Unknown error"

#define panic()     program_panic(DEFAULT_ERR_MSG, DEFAULT_ERR_CODE)
#define panic(M)    program_panic(M, DEFAULT_ERR_CODE)
#define panic(M,E)  program_panic(M, E)

unsigned char v_flag;   /* Verbose flag */

int verbose(const char * restrict format, ...);