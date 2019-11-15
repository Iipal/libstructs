/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_unsigned.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:10:50 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:43:18 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_UNSIGNED_H
# define LIBS_UNSIGNED_H

# include "libs_macro.h"

# ifndef LIBSTRUCTS_H
#  error "include libstructs.h only instead of libs_unsigned."
# endif

/*
** unsigned char
*/
# ifdef LIBS_CREATE_UNSIGNED_CHAR_STRUCTS
LIBS_CREATE_2_STRUCT(uc, unsigned char);
LIBS_CREATE_3_STRUCT(uc, unsigned char);
LIBS_CREATE_4_STRUCT(uc, unsigned char);
# endif

/*
** unsigned short
*/
# ifdef LIBS_CREATE_UNSIGNED_SHORT_STRUCTS
LIBS_CREATE_2_STRUCT(us, unsigned short);
LIBS_CREATE_3_STRUCT(us, unsigned short);
LIBS_CREATE_4_STRUCT(us, unsigned short);
# endif

/*
** unsigned int
*/
# ifdef LIBS_CREATE_UNSIGNED_INT_STRUCTS
LIBS_CREATE_2_STRUCT(ui, unsigned int);
LIBS_CREATE_3_STRUCT(ui, unsigned int);
LIBS_CREATE_4_STRUCT(ui, unsigned int);
# endif

/*
** unsigned long
*/
# ifdef LIBS_CREATE_UNSIGNED_LONG_STRUCTS
LIBS_CREATE_2_STRUCT(ul, unsigned long);
LIBS_CREATE_3_STRUCT(ul, unsigned long);
LIBS_CREATE_4_STRUCT(ul, unsigned long);
# endif

# include "libs_macro_free.h"

#endif /* LIBS_UNSIGNED_H */
