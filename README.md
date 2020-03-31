# Misc C functions

**verbose**

Printf-like function that prints only when v_flag > 0

**panic**

Program panic function.  
Support format :

```c
panic()
panic(const char * err_msg)
panic(const char * err_msg, const int err_code)
```

Exit with `EXIT_FAILURE`.