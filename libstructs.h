/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstructs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:45:57 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 19:44:04 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTRUCTS_H
# define LIBSTRUCTS_H

# ifdef LIBS_NO_STRUCTS
#  define LIBS_NO_SIGNED_STRUCTS
#  define LIBS_NO_UNSIGNED_STRUCTS
#  define LIBS_NO_FLOATING_STRUCTS
#  define LIBS_CREATE_2_STRUCT
#  define LIBS_CREATE_3_STRUCT
#  define LIBS_CREATE_4_STRUCT
#  define LIBS_CREATE_234_STRUCT
# endif /* LIBS_NO_PREFERENCES */

# ifndef LIBS_CREATE_2_STRUCT
#  define LIBS_CREATE_2_STRUCT(short_name, type) \
	typedef struct s_2##short_name { \
		type x; type y; \
	} s2##short_name __attribute__((__aligned__))
# endif

# ifndef LIBS_CREATE_3_STRUCT
#  define LIBS_CREATE_3_STRUCT(short_name, type) \
	typedef struct s_3##short_name { \
		type x; type y; type z; \
	} s3##short_name __attribute__((__aligned__))
# endif

# ifndef LIBS_CREATE_4_STRUCT
#  define LIBS_CREATE_4_STRUCT(short_name, type) \
	typedef struct s_4##short_name { \
		type x; type y; type z; type w; \
	} s4##short_name __attribute__((__aligned__))
# endif

# ifndef LIBS_CREATE_234_STRUCT
#  define LIBS_CREATE_234_STRUCT(short_name, type) \
	LIBS_CREATE_2_STRUCT(short_name, type); \
	LIBS_CREATE_3_STRUCT(short_name, type); \
	LIBS_CREATE_4_STRUCT(short_name, type)
# endif

/* activate signed structs */
# ifndef LIBS_NO_SIGNED_STRUCTS
/* signed char */
#  ifndef LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS
LIBS_CREATE_234_STRUCT(sc, char); /* s2sc; s3sc; s4sc */
#  endif /* LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS */
/* signed short */
#  ifndef LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS
LIBS_CREATE_234_STRUCT(ss, short); /* s2ss; s3ss; s4ss */
#  endif /* LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS */
/* signed int */
#  ifndef LIBS_NO_CREATE_SIGNED_INT_STRUCTS
LIBS_CREATE_234_STRUCT(si, int); /* s2si; s3si; s4si */
#  endif /* LIBS_NO_CREATE_SIGNED_INT_STRUCTS */
/* signed long */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(sl, long); /* s2sl; s3sl; s4sl */
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_STRUCTS */
# endif /* LIBS_NO_SIGNED_STRUCTS */

/* activate unsigned structs */
# ifndef LIBS_NO_UNSIGNED_STRUCTS
/* unsigned char */
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS
LIBS_CREATE_234_STRUCT(uc, unsigned char); /* s2uc; s3uc; s4uc */
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS *?
/* unsigned short */
#  ifndef LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS
LIBS_CREATE_234_STRUCT(us, unsigned short); /* s2us; s3us; s4us */
#  endif /* LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS */
/* unsigned int */
#  ifndef LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS
LIBS_CREATE_234_STRUCT(ui, unsigned int); /* s2ui; s3ui; s4ui */
#  endif /* LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS */
/* unsigned long */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS
LIBS_CREATE_234_STRUCT(uu, unsigned long); /* s2ul; s3ul; s4ul */
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS */
# endif /* LIBS_NO_UNSIGNED_STRUCTS */

/* actiavte floating point structs */
# ifndef LIBS_NO_FLOATING_STRUCTS
/* float */
#  ifndef LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS
LIBS_CREATE_234_STRUCT(d, float); /* s2f; s3f; s4f */
#  endif /* LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS */
/* double */
#  ifndef LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS
LIBS_CREATE_234_STRUCT(d, double); /* s2d; s3d; s4d */
#  endif /* LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS */
/* long double */
#  ifndef LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
LIBS_CREATE_234_STRUCT(ld, double); /* s2ld; s3ld; s4ld */
#  endif /* LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS */
# endif /* LIBS_NO_FLOATING_STRUCTS */

/* "delete" macroses for structs creating. */
# ifdef LIBS_CREATE_2_STRUCT
#  undef LIBS_CREATE_2_STRUCT
# endif
# ifdef LIBS_CREATE_3_STRUCT
#  undef LIBS_CREATE_3_STRUCT
# endif
# ifdef LIBS_CREATE_4_STRUCT
#  undef LIBS_CREATE_4_STRUCT
# endif
# ifdef LIBS_CREATE_234_STRUCT
#  undef LIBS_CREATE_234_STRUCT
# endif
#endif /* LIBSTRUCTS_H */
