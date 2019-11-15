/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_floating.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:13:27 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:42:16 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_FLOATING_H
# define LIBS_FLOATING_H

# ifndef LIBSTRUCTS_H
#  error "include libstructs.h only instead of libs_floating.h."
# endif

# include "libs_macro.h"

/*
** float
*/
# ifdef LIBS_CREATE_FLOATING_FLOAT_STRUCTS
LIBS_CREATE_2_STRUCT(f, float);
LIBS_CREATE_3_STRUCT(f, float);
LIBS_CREATE_4_STRUCT(f, float);
# endif

/*
** double
*/
# ifdef LIBS_CREATE_FLOATING_DOUBLE_STRUCTS
LIBS_CREATE_2_STRUCT(d, double);
LIBS_CREATE_3_STRUCT(d, double);
LIBS_CREATE_4_STRUCT(d, double);
# endif

/*
** long double
*/
# ifdef LIBS_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
LIBS_CREATE_2_STRUCT(ld, long double);
LIBS_CREATE_3_STRUCT(ld, long double);
LIBS_CREATE_4_STRUCT(ld, long double);
# endif

# include "libs_macro_free.h"

#endif /* LIBS_FLOATING_H */
