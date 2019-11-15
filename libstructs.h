/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstructs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:45:57 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 21:29:05 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTRUCTS_H
# define LIBSTRUCTS_H

# ifdef LIBS_NO_STRUCTS
#  define LIBS_CREATE_2_STRUCT
#  define LIBS_CREATE_3_STRUCT
#  define LIBS_CREATE_4_STRUCT
#  define LIBS_CREATE_234_STRUCT

#  define LIBS_NO_SIGNED_STRUCTS
#  define LIBS_NO_UNSIGNED_STRUCTS
#  define LIBS_NO_FLOATING_STRUCTS
#  define LIBS_NO_VOIDPTR_STRUCTS
# endif /* LIBS_NO_STRUCTS */

# ifndef LIBS_CREATE_2_STRUCT
#  define LIBS_CREATE_2_STRUCT(short_name, type) \
	typedef struct s_2##short_name { \
		type x; type y; \
	} s2##short_name __attribute__((__aligned__))
# endif /* LIBS_CREATE_2_STRUCT */

# ifndef LIBS_CREATE_3_STRUCT
#  define LIBS_CREATE_3_STRUCT(short_name, type) \
	typedef struct s_3##short_name { \
		type x; type y; type z; \
	} s3##short_name __attribute__((__aligned__))
# endif /* LIBS_CREATE_3_STRUCT */

# ifndef LIBS_CREATE_4_STRUCT
#  define LIBS_CREATE_4_STRUCT(short_name, type) \
	typedef struct s_4##short_name { \
		type x; type y; type z; type w; \
	} s4##short_name __attribute__((__aligned__))
# endif /* LIBS_CREATE_4_STRUCT */

# ifndef LIBS_CREATE_234_STRUCT
#  define LIBS_CREATE_234_STRUCT(short_name, type) \
	LIBS_CREATE_2_STRUCT(short_name, type); \
	LIBS_CREATE_3_STRUCT(short_name, type); \
	LIBS_CREATE_4_STRUCT(short_name, type)
# endif /* LIBS_CREATE_234_STRUCT */

/* activate signed structs */
# ifndef LIBS_NO_SIGNED_STRUCTS
#  ifndef LIBS_NO_CREATE_SIGNED_STRUCTS
LIBS_CREATE_234_STRUCT(s, signed); /* signed: s2s;s3s;s4s */
#  endif /* LIBS_NO_CREATE_SIGNED_STRUCTS */
#  ifndef LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS
LIBS_CREATE_234_STRUCT(sc, signed char); /* char: s2sc;s3sc;s4sc */
#  endif /* LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS */
#  ifndef LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS
LIBS_CREATE_234_STRUCT(ss, signed short); /* short: s2ss;s3ss;s4ss */
#  endif /* LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS */
#  ifndef LIBS_NO_CREATE_SIGNED_INT_STRUCTS
LIBS_CREATE_234_STRUCT(si, signed int); /* int: s2si;s3si;s4si */
#  endif /* LIBS_NO_CREATE_SIGNED_INT_STRUCTS */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(sl, signed long); /* long: s2sl;s3sl;s4sl */
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_STRUCTS */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(sll, signed long long); /* long: s2sll;s3sll;s4sll */
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_LONG_STRUCTS */
# endif /* LIBS_NO_SIGNED_STRUCTS */

/* activate unsigned structs */
# ifndef LIBS_NO_UNSIGNED_STRUCTS
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS
LIBS_CREATE_234_STRUCT(u, unsigned); /* unsigned: s2u;s3u;s4u */
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS
LIBS_CREATE_234_STRUCT(uc, unsigned char); /* unsigned char: s2uc;s3uc;s4uc */
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS
LIBS_CREATE_234_STRUCT(us, unsigned short); /* unsigned short: s2us;s3us;s4us */
#  endif /* LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS
LIBS_CREATE_234_STRUCT(ui, unsigned int); /* unsigned int: s2ui;s3ui;s4ui */
#  endif /* LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(ul, unsigned long); /* unsigned long: s2ul;s3ul;s4ul */
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(ull, unsigned long long); /* s2ull;s3ull;s4ull */
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS */
# endif /* LIBS_NO_UNSIGNED_STRUCTS */

/* actiavte floating point structs */
# ifndef LIBS_NO_FLOATING_STRUCTS
#  ifndef LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS
LIBS_CREATE_234_STRUCT(f, float); /* float: s2f;s3f;s4f */
#  endif /* LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS */
#  ifndef LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS
LIBS_CREATE_234_STRUCT(d, double); /* double: s2d;s3d;s4d */
#  endif /* LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS */
#  ifndef LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
LIBS_CREATE_234_STRUCT(ld, double); /* long double: s2ld;s3ld;s4ld */
#  endif /* LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS */
# endif /* LIBS_NO_FLOATING_STRUCTS */

/* actiavte void pointer structs */
# ifndef LIBS_NO_VOIDPTR_STRUCTS
#  ifndef LIBS_NO_CREATE_VOIDPTR_STRUCTS
LIBS_CREATE_234_STRUCT(vptr, void*); /* void*: s2vptr;s3vptr;s4vptr */
#  endif /* LIBS_NO_CREATE_VOIDPTR_STRUCTS */
# endif /* LIBS_NO_VOIDPTR_STRUCTS */

/* "delete" macroses for structs creating. */
# ifdef LIBS_CREATE_2_STRUCT
#  undef LIBS_CREATE_2_STRUCT
# endif /* LIBS_CREATE_2_STRUCT */
# ifdef LIBS_CREATE_3_STRUCT
#  undef LIBS_CREATE_3_STRUCT
# endif /* LIBS_CREATE_3_STRUCT */
# ifdef LIBS_CREATE_4_STRUCT
#  undef LIBS_CREATE_4_STRUCT
# endif /* LIBS_CREATE_4_STRUCT */
# ifdef LIBS_CREATE_234_STRUCT
#  undef LIBS_CREATE_234_STRUCT
# endif /* LIBS_CREATE_234_STRUCT */
#endif /* LIBSTRUCTS_H */
