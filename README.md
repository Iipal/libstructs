# libstructs

## (!!!) include only libstructs.h

### What is it ?

Fast creating of structs for using it like a vector or whatever you want.

### Naming

| prefix             | count of elemnts | data type specificator  | data type  |
| ------------------ |----------------- | ----------------------- | ---------- |
| s (means `struct`) | 2                | s (signed)              | i (int)    |
|                    | 3                | u (unsigned)            | c (char)   |
|                    | 4                | (any for floats)        | s (short)  |
|                    |                  |                         | l (long)   |
|                    |                  |                         | f (float)  |
|                    |                  |                         | d (double) |

### Examples
```C
s2si  struct_with_2_elements_and_with_signed_integers;
s3ul  struct_with_3_elements_and_with_unsigned_longs;
s4f   struct_with_4_elements_and_with_floats;
```
### Prefences

Prefences for deactivate creating of whatever type you want:

This define will deactivate all new types from libstructs.h.
```
# define LIBS_NO_PREFERENCES
# include "libstructs.h"
```

This define will deactivate only new unsinged types(with `u` data type specificators) from libstructs.h. Such as `s2ui`, `s2ul` and other.
```
# define LIBS_NO_UNSIGNED_STRUCTS
# include "libstructs.h"
```

This define will deactivate only new unsinged short types from libstructs.h. Such as `s2us`, `s3us` and `s4us`.
```
# define LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS
# include "libstructs.h"
```

See more in: [libs_preferences.h](../master/libs_preferences.h)
