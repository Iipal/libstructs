/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:02:26 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 21:28:15 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIONS_H
# define LIBUNIONS_H

# ifdef LIBS_NO_UNIONS
#  define LIBS_CREATE_2_UNION
#  define LIBS_CREATE_3_UNION
#  define LIBS_CREATE_4_UNION
#  define LIBS_CREATE_234_UNION

#  define LIBS_NO_SIGNED_UNIONS
#  define LIBS_NO_UNSIGNED_UNIONS
#  define LIBS_NO_FLOATING_UNIONS
#  define LIBS_NO_VOIDPTR_UNIONS
# endif /* LIBS_NO_UNIONS */

# ifndef LIBS_CREATE_2_UNION
#  define LIBS_CREATE_2_UNION(short_name, type) \
	typedef union u_2##short_name { \
		struct { type x; type y; }; \
		struct { type i; type j; }; \
	} u2##short_name __attribute__((aligned))
# endif /* LIBS_CREATE_2_UNION */

# ifndef LIBS_CREATE_3_UNION
#  define LIBS_CREATE_3_UNION(short_name, type) \
	typedef union u_3##short_name { \
		struct { type x; type y; type z; }; \
		struct { type i; type j; type k; }; \
	} u3##short_name __attribute__((aligned))
# endif /* LIBS_CREATE_3_UNION */

# ifndef LIBS_CREATE_4_UNION
#  define LIBS_CREATE_4_UNION(short_name, type) \
	typedef union u_4##short_name { \
		struct { type x; type y; type z; type w; }; \
		struct { type i; type j; type k; type l; }; \
	} u4##short_name __attribute__((aligned))
# endif /* LIBS_CREATE_4_UNION */

# ifndef LIBS_CREATE_234_UNION
#  define LIBS_CREATE_234_UNION(short_name, type) \
	LIBS_CREATE_2_UNION(short_name, type); \
	LIBS_CREATE_3_UNION(short_name, type); \
	LIBS_CREATE_4_UNION(short_name, type)
# endif /* LIBS_CREATE_234_UNION */

/* activate signed unions */
# ifndef LIBS_NO_SIGNED_UNIONS
#  ifndef LIBS_NO_CREATE_SIGNED_UNIONS
LIBS_CREATE_234_UNION(s, signed); /* signed: s2s;s3s;s4s */
#  endif /* LIBS_NO_CREATE_SIGNED_UNIONS */
#  ifndef LIBS_NO_CREATE_SIGNED_CHAR_UNIONS
LIBS_CREATE_234_UNION(sc, signed char); /* char: s2sc;s3sc;s4sc */
#  endif /* LIBS_NO_CREATE_SIGNED_CHAR_UNIONS */
#  ifndef LIBS_NO_CREATE_SIGNED_SHORT_UNIONS
LIBS_CREATE_234_UNION(ss, signed short); /* short: s2ss;s3ss;s4ss */
#  endif /* LIBS_NO_CREATE_SIGNED_SHORT_UNIONS */
#  ifndef LIBS_NO_CREATE_SIGNED_INT_UNIONS
LIBS_CREATE_234_UNION(si, signed int); /* int: s2si;s3si;s4si */
#  endif /* LIBS_NO_CREATE_SIGNED_INT_UNIONS */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_UNIONS
LIBS_CREATE_234_UNION(sl, signed long); /* long: s2sl;s3sl;s4sl */
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_UNIONS */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_LONG_UNIONS
LIBS_CREATE_234_UNION(sll, signed long long); /* long: s2sll;s3sll;s4sll */
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_LONG_UNIONS */
# endif /* LIBS_NO_SIGNED_UNIONS */

/* activate unsigned unions */
# ifndef LIBS_NO_UNSIGNED_UNIONS
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_UNIONS
LIBS_CREATE_234_UNION(u, unsigned); /* unsigned: s2u;s3u;s4u */
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_UNIONS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_UNIONS
LIBS_CREATE_234_UNION(uc, unsigned char); /* unsigned char: s2uc;s3uc;s4uc */
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_UNIONS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_SHORT_UNIONS
LIBS_CREATE_234_UNION(us, unsigned short); /* unsigned short: s2us;s3us;s4us */
#  endif /* LIBS_NO_CREATE_UNSIGNED_SHORT_UNIONS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_INT_UNIONS
LIBS_CREATE_234_UNION(ui, unsigned int); /* unsigned int: s2ui;s3ui;s4ui */
#  endif /* LIBS_NO_CREATE_UNSIGNED_INT_UNIONS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_UNIONS
LIBS_CREATE_234_UNION(ul, unsigned long); /* unsigned long: s2ul;s3ul;s4ul */
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_UNIONS */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_UNIONS
LIBS_CREATE_234_UNION(ull, unsigned long long); /* s2ull;s3ull;s4ull */
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_UNIONS */
# endif /* LIBS_NO_UNSIGNED_UNIONS */

/* actiavte floating point unions */
# ifndef LIBS_NO_FLOATING_UNIONS
#  ifndef LIBS_NO_CREATE_FLOATING_FLOAT_UNIONS
LIBS_CREATE_234_UNION(f, float); /* float: s2f;s3f;s4f */
#  endif /* LIBS_NO_CREATE_FLOATING_FLOAT_UNIONS */
#  ifndef LIBS_NO_CREATE_FLOATING_DOUBLE_UNIONS
LIBS_CREATE_234_UNION(d, double); /* double: s2d;s3d;s4d */
#  endif /* LIBS_NO_CREATE_FLOATING_DOUBLE_UNIONS */
#  ifndef LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_UNIONS
LIBS_CREATE_234_UNION(ld, double); /* long double: s2ld;s3ld;s4ld */
#  endif /* LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_UNIONS */
# endif /* LIBS_NO_FLOATING_UNIONS */

/* actiavte void pointer unions */
# ifndef LIBS_NO_VOIDPTR_UNIONS
#  ifndef LIBS_NO_CREATE_VOIDPTR_UNIONS
LIBS_CREATE_234_UNION(vptr, void*); /* void*: s2vptr;s3vptr;s4vptr */
#  endif /* LIBS_NO_CREATE_VOIDPTR_UNIONS */
# endif /* LIBS_NO_VOIDPTR_UNIONS */

/* "delete" macroses for unions creating. */
# ifdef LIBS_CREATE_2_UNION
#  undef LIBS_CREATE_2_UNION
# endif /* LIBS_CREATE_2_UNION */
# ifdef LIBS_CREATE_3_UNION
#  undef LIBS_CREATE_3_UNION
# endif /* LIBS_CREATE_3_UNION */
# ifdef LIBS_CREATE_4_UNION
#  undef LIBS_CREATE_4_UNION
# endif /* LIBS_CREATE_4_UNION */
# ifdef LIBS_CREATE_234_UNION
#  undef LIBS_CREATE_234_UNION
# endif /* LIBS_CREATE_234_UNION */
#endif /* LIBUNIONS_H */
