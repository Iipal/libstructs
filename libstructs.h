/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstructs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:45:57 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/16 17:42:00 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTRUCTS_H
# define LIBSTRUCTS_H

# ifdef LIBS_NO_STRUCTS
#  define LIBS_CREATE_STRUCT2
#  define LIBS_CREATE_STRUCT3
#  define LIBS_CREATE_STRUCT4
#  define LIBS_CREATE_234_STRUCT

#  define LIBS_NO_SIGNED_STRUCTS
#  define LIBS_NO_UNSIGNED_STRUCTS
#  define LIBS_NO_FLOATING_STRUCTS
#  define LIBS_NO_VOIDPTR_STRUCTS
# endif /* LIBS_NO_STRUCTS */

# include <sys/cdefs.h>
# ifndef libs_always_inline
#  if defined __header_always_inline
#   define libs_always_inline __header_always_inline
#  elif defined __always_inline
#   define libs_always_inline __always_inline
#  else
#   define libs_always_inline
#  endif
# endif

# ifndef LIBS_CREATE_STRUCT2
#  define LIBS_CREATE_STRUCT2(name, type) \
	typedef struct s_2##name { \
		type x; type y; \
	} s2##name __attribute__((__aligned__))
# endif /* LIBS_CREATE_STRUCT2 */

# ifndef LIBS_CREATE_STRUCT3
#  define LIBS_CREATE_STRUCT3(name, type) \
	typedef struct s_3##name { \
		type x; type y; type z; \
	} s3##name __attribute__((__aligned__))
# endif /* LIBS_CREATE_STRUCT3 */

# ifndef LIBS_CREATE_STRUCT4
#  define LIBS_CREATE_STRUCT4(name, type) \
	typedef struct s_4##name { \
		type x; type y; type z; type w; \
	} s4##name __attribute__((__aligned__))
# endif /* LIBS_CREATE_STRUCT4 */

# ifndef LIBS_INIT_STRUCT2
#  define LIBS_INIT_STRUCT2(name, type) \
	s2##name libs_always_inline \
	libs_init_s2##name##__(type x__, type y__) { \
		return (s2##name) { x__, y__ }; }
# endif /* LIBS_INIT_STRUCT2 */

# ifndef LIBS_INIT_STRUCT3
#  define LIBS_INIT_STRUCT3(name, type) \
	s3##name libs_always_inline \
	libs_init_s3##name##__(type x__, type y__, type z__) { \
		return (s3##name) { x__, y__, z__ }; }
# endif /* LIBS_INIT_STRUCT3 */

# ifndef LIBS_INIT_STRUCT4
#  define LIBS_INIT_STRUCT4(name, type) \
	s4##name libs_always_inline \
	libs_init_s4##name##__(type x__, type y__, type z__, type w__) { \
		return (s4##name) { x__, y__, z__, w__ }; }
# endif /* LIBS_INIT_STRUCT4 */

# ifndef LIBS_STRUCT2_TO_STRUCT3
#  define LIBS_STRUCT2_TO_STRUCT3(name, type) \
	s3##name libs_always_inline \
	libs_s2##name##_to_s3##name##__(s2##name src__, type z__) { \
		return (s3##name) { src__.x, src__.y, z__ }; }
# endif /* LIBS_STRUCT2_TO_STRUCT3 */

# ifndef LIBS_STRUCT2_TO_STRUCT4
#  define LIBS_STRUCT2_TO_STRUCT4(name, type) \
	s4##name libs_always_inline \
	libs_s2##name##_to_s4##name##__(s2##name src__, type z__, type w__) { \
		return (s4##name) { src__.x, src__.y, z__, w__}; }
# endif /* LIBS_STRUCT2_TO_STRUCT4 */

# ifndef LIBS_STRUCT3_TO_STRUCT2
#  define LIBS_STRUCT3_TO_STRUCT2(name) \
	s2##name libs_always_inline \
		libs_s3##name##_to_s2##name##__(s3##name src__) { \
			return (s2##name) { src__.x, src__.y, }; }
# endif /* LIBS_STRUCT3_TO_STRUCT2 */

# ifndef LIBS_STRUCT3_TO_STRUCT4
#  define LIBS_STRUCT3_TO_STRUCT4(name, type) \
	s4##name libs_always_inline \
	libs_s3##name##_to_s4##name##__(s3##name src__, type w__) { \
		return (s4##name) { src__.x, src__.y, src__.z, w__ }; }
# endif /* LIBS_STRUCT3_TO_STRUCT4 */

# ifndef LIBS_STRUCT4_TO_STRUCT3
#  define LIBS_STRUCT4_TO_STRUCT3(name) \
	s3##name libs_always_inline \
	libs_s4##name##_to_s3##name##__(s4##name src__) { \
		return (s3##name) { src__.x, src__.y, src__.z }; }
# endif /* LIBS_STRUCT4_TO_STRUCT3 */

# ifndef LIBS_STRUCT4_TO_STRUCT2
#  define LIBS_STRUCT4_TO_STRUCT2(name) \
	s2##name libs_always_inline \
	libs_s4##name##_to_s2##name##__(s4##name src__) { \
		return (s2##name) { src__.x, src__.y }; }
# endif /* LIBS_STRUCT4_TO_STRUCT2 */

# ifndef LIBS_STRUCT2_ADD_STRUCT2
#  define LIBS_STRUCT2_ADD_STRUCT2(name) \
	s2##name libs_always_inline \
	libs_s2##name##_add_s2##name##__(s2##name a__, s2##name b__) { \
		return (s2##name) { a__.x + b__.x, a__.y + b__.y }; }
# endif /* LIBS_STRUCT2_ADD_STRUCT2 */

# ifndef LIBS_STRUCT2_ADD_STRUCT3
#  define LIBS_STRUCT2_ADD_STRUCT3(name) \
	s2##name libs_always_inline \
	libs_s2##name##_add_s3##name##__(s2##name a__, s3##name b__) { \
		return (s2##name) { a__.x + b__.x, a__.y + b__.y }; }
# endif /* LIBS_STRUCT2_ADD_STRUCT3 */

# ifndef LIBS_STRUCT2_ADD_STRUCT4
#  define LIBS_STRUCT2_ADD_STRUCT4(name) \
	s2##name libs_always_inline \
	libs_s2##name##_add_s4##name##__(s2##name a__, s4##name b__) { \
		return (s2##name) { a__.x + b__.x, a__.y + b__.y }; }
# endif /* LIBS_STRUCT2_ADD_STRUCT4 */

# ifndef LIBS_STRUCT3_ADD_STRUCT2
#  define LIBS_STRUCT3_ADD_STRUCT2(name) \
	s3##name libs_always_inline \
	libs_s3##name##_add_s2##name##__(s3##name a__, s2##name b__) { \
		return (s3##name) { a__.x + b__.x, a__.y + b__.y, 0 }; }
# endif /* LIBS_STRUCT3_ADD_STRUCT2 */

# ifndef LIBS_STRUCT3_ADD_STRUCT3
#  define LIBS_STRUCT3_ADD_STRUCT3(name) \
	s3##name libs_always_inline \
	libs_s3##name##_add_s3##name##__(s3##name a__, s3##name b__) { \
		return (s3##name) { a__.x + b__.x, a__.y + b__.y, a__.z + b__.z }; }
# endif /* LIBS_STRUCT3_ADD_STRUCT3 */

# ifndef LIBS_STRUCT3_ADD_STRUCT4
#  define LIBS_STRUCT3_ADD_STRUCT4(name) \
	s3##name libs_always_inline \
	libs_s3##name##_add_s4##name##__(s3##name a__, s4##name b__) { \
		return (s3##name) { a__.x + b__.x, a__.y + b__.y, a__.z + b__.z }; }
# endif /* LIBS_STRUCT3_ADD_STRUCT4 */

# ifndef LIBS_STRUCT4_ADD_STRUCT2
#  define LIBS_STRUCT4_ADD_STRUCT2(name) \
	s4##name libs_always_inline \
	libs_s4##name##_add_s2##name##__(s4##name a__, s2##name b__) { \
		return (s4##name) { a__.x + b__.x, a__.y + b__.y, 0, 0 }; }
# endif /* LIBS_STRUCT4_ADD_STRUCT2 */

# ifndef LIBS_STRUCT4_ADD_STRUCT3
#  define LIBS_STRUCT4_ADD_STRUCT3(name) \
	s4##name libs_always_inline \
	libs_s4##name##_add_s3##name##__(s4##name a__, s3##name b__) { \
		return (s4##name) { a__.x + b__.x, a__.y + b__.y, a__.z + b__.z, 0 }; }
# endif /* LIBS_STRUCT4_ADD_STRUCT3 */

# ifndef LIBS_STRUCT4_ADD_STRUCT4
#  define LIBS_STRUCT4_ADD_STRUCT4(name) \
	s4##name libs_always_inline \
		libs_s4##name##_add_s4##name##__(s4##name a__, s4##name b__) { \
			return (s4##name) { a__.x + b__.x, a__.y + b__.y, \
								a__.z + b__.z, a__.w + b__.w, }; }
# endif /* LIBS_STRUCT4_ADD_STRUCT4 */

# ifndef LIBS_CREATE_234_STRUCT
#  define LIBS_CREATE_234_STRUCT(name, type) \
	LIBS_CREATE_STRUCT2(name, type); \
	LIBS_CREATE_STRUCT3(name, type); \
	LIBS_CREATE_STRUCT4(name, type); \
	LIBS_INIT_STRUCT2(name, type); \
	LIBS_INIT_STRUCT3(name, type); \
	LIBS_INIT_STRUCT4(name, type); \
	LIBS_STRUCT2_TO_STRUCT4(name, type); \
	LIBS_STRUCT2_TO_STRUCT3(name, type); \
	LIBS_STRUCT3_TO_STRUCT4(name, type); \
	LIBS_STRUCT3_TO_STRUCT2(name); \
	LIBS_STRUCT4_TO_STRUCT3(name); \
	LIBS_STRUCT4_TO_STRUCT2(name); \
	LIBS_STRUCT2_ADD_STRUCT2(name); \
	LIBS_STRUCT2_ADD_STRUCT3(name); \
	LIBS_STRUCT2_ADD_STRUCT4(name); \
	LIBS_STRUCT3_ADD_STRUCT2(name); \
	LIBS_STRUCT3_ADD_STRUCT3(name); \
	LIBS_STRUCT3_ADD_STRUCT4(name); \
	LIBS_STRUCT4_ADD_STRUCT2(name); \
	LIBS_STRUCT4_ADD_STRUCT3(name); \
	LIBS_STRUCT4_ADD_STRUCT4(name);
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

/* "delete" macroses for structs creating. */
# ifdef LIBS_CREATE_STRUCT2
#  undef LIBS_CREATE_STRUCT2
# endif /* LIBS_CREATE_STRUCT2 */
# ifdef LIBS_CREATE_STRUCT3
#  undef LIBS_CREATE_STRUCT3
# endif /* LIBS_CREATE_STRUCT3 */
# ifdef LIBS_CREATE_STRUCT4
#  undef LIBS_CREATE_STRUCT4
# endif /* LIBS_CREATE_STRUCT4 */
# ifdef LIBS_CREATE_234_STRUCT
#  undef LIBS_CREATE_234_STRUCT
# endif /* LIBS_CREATE_234_STRUCT */

# ifdef LIBS_STRUCT2_TO_STRUCT4
#  undef LIBS_STRUCT2_TO_STRUCT4
# endif /* LIBS_STRUCT2_TO_STRUCT4 */
# ifdef LIBS_STRUCT2_TO_STRUCT3
#  undef LIBS_STRUCT2_TO_STRUCT3
# endif /* LIBS_STRUCT2_TO_STRUCT3 */
# ifdef LIBS_STRUCT3_TO_STRUCT4
#  undef LIBS_STRUCT3_TO_STRUCT4
# endif /* LIBS_STRUCT3_TO_STRUCT4 */
# ifdef LIBS_STRUCT3_TO_STRUCT2
#  undef LIBS_STRUCT3_TO_STRUCT2
# endif /* LIBS_STRUCT3_TO_STRUCT2 */
# ifdef LIBS_STRUCT4_TO_STRUCT3
#  undef LIBS_STRUCT4_TO_STRUCT3
# endif /* LIBS_STRUCT4_TO_STRUCT3 */
# ifdef LIBS_STRUCT4_TO_STRUCT2
#  undef LIBS_STRUCT4_TO_STRUCT2
# endif /* LIBS_STRUCT4_TO_STRUCT2 */

# ifdef LIBS_STRUCT2_ADD_STRUCT2
#  undef LIBS_STRUCT2_ADD_STRUCT2
# endif /* LIBS_STRUCT2_ADD_STRUCT2 */
# ifdef LIBS_STRUCT2_ADD_STRUCT3
#  undef LIBS_STRUCT2_ADD_STRUCT3
# endif /* LIBS_STRUCT2_ADD_STRUCT3 */
# ifdef LIBS_STRUCT2_ADD_STRUCT4
#  undef LIBS_STRUCT2_ADD_STRUCT4
# endif /* LIBS_STRUCT2_ADD_STRUCT4 */
# ifdef LIBS_STRUCT3_ADD_STRUCT2
#  undef LIBS_STRUCT3_ADD_STRUCT2
# endif /* LIBS_STRUCT3_ADD_STRUCT2 */
# ifdef LIBS_STRUCT3_ADD_STRUCT3
#  undef LIBS_STRUCT3_ADD_STRUCT3
# endif /* LIBS_STRUCT3_ADD_STRUCT3 */
# ifdef LIBS_STRUCT3_ADD_STRUCT4
#  undef LIBS_STRUCT3_ADD_STRUCT4
# endif /* LIBS_STRUCT3_ADD_STRUCT4 */
# ifdef LIBS_STRUCT4_ADD_STRUCT2
#  undef LIBS_STRUCT4_ADD_STRUCT2
# endif /* LIBS_STRUCT4_ADD_STRUCT2 */
# ifdef LIBS_STRUCT4_ADD_STRUCT3
#  undef LIBS_STRUCT4_ADD_STRUCT3
# endif /* LIBS_STRUCT4_ADD_STRUCT3 */
# ifdef LIBS_STRUCT4_ADD_STRUCT4
#  undef LIBS_STRUCT4_ADD_STRUCT4
# endif /* LIBS_STRUCT4_ADD_STRUCT4 */

# ifdef libs_always_inline
#  undef libs_always_inline
# endif /* libs_always_inline */
#endif /* LIBSTRUCTS_H */
