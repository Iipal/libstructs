/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_macro.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:00:16 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:42:34 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_MACRO_H
# define LIBS_MACRO_H

# ifndef LIBSTRUCTS_H
#  error "include libstructs.h only instead of libs_macro.h."
# endif

# ifndef LIBS_CREATE_2_STRUCT
#  define LIBS_CREATE_2_STRUCT(short_name, type) \
	typedef struct s_2##short_name { \
		type x; type y; \
	} s2##short_name __attribute__((__aligned__));
# endif

# ifndef LIBS_CREATE_3_STRUCT
#  define LIBS_CREATE_3_STRUCT(short_name, type) \
	typedef struct s_3##short_name { \
		type x; type y; type z; \
	} s3##short_name __attribute__((__aligned__));
# endif

# ifndef LIBS_CREATE_4_STRUCT
#  define LIBS_CREATE_4_STRUCT(short_name, type) \
	typedef struct s_4##short_name { \
		type x; type y; type z; type w; \
	} s4##short_name __attribute__((__aligned__));
# endif

#endif /* LIBS_MACRO_H */
