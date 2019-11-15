/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_signed.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:02:13 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:20:24 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_SIGNED_H
# define LIBS_SIGNED_H

# include "libs_macro.h"

/*
** signed char
*/
# ifdef LIBS_CREATE_SIGNED_CHAR_STRUCTS
LIBS_CREATE_2_STRUCT(sc, char);
LIBS_CREATE_3_STRUCT(sc, char);
LIBS_CREATE_4_STRUCT(sc, char);
# endif

/*
** signed short
*/
# ifdef LIBS_CREATE_SIGNED_SHORT_STRUCTS
LIBS_CREATE_2_STRUCT(ss, short);
LIBS_CREATE_3_STRUCT(ss, short);
LIBS_CREATE_4_STRUCT(ss, short);
# endif

/*
** signed int
*/
# ifdef LIBS_CREATE_SIGNED_INT_STRUCTS
LIBS_CREATE_2_STRUCT(si, int);
LIBS_CREATE_3_STRUCT(si, int);
LIBS_CREATE_4_STRUCT(si, int);
# endif

/*
** signed long
*/
# ifdef LIBS_CREATE_SIGNED_LONG_STRUCTS
LIBS_CREATE_2_STRUCT(sl, long);
LIBS_CREATE_3_STRUCT(sl, long);
LIBS_CREATE_4_STRUCT(sl, long);
# endif

# include "libs_macro_free.h"

#endif /* LIBS_SIGNED_H */
