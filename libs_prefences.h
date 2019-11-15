/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_prefences.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:05:27 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:22:26 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_PREFENCES_H
# define LIBS_PREFENCES_H

/*
** Activate of creating signed struct types
*/
# ifndef LIBS_NO_SIGNED_STRUCTS
#  ifndef LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS
#   define LIBS_CREATE_SIGNED_CHAR_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS */

#  ifndef LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS
#   define LIBS_CREATE_SIGNED_SHORT_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS */

#  ifndef LIBS_NO_CREATE_SIGNED_INT_STRUCTS
#   define LIBS_CREATE_SIGNED_INT_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_INT_STRUCTS */

#  ifndef LIBS_NO_CREATE_SIGNED_LONG_STRUCTS
#   define LIBS_CREATE_SIGNED_LONG_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_STRUCTS */
# endif /* LIBS_NO_SIGNED_STRUCTS */

/*
** Activate of creating unsigned struct types
*/
# ifndef LIBS_NO_UNSIGNED_STRUCTS
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS
#   define LIBS_CREATE_UNSIGNED_CHAR_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS */

#  ifndef LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS
#   define LIBS_CREATE_UNSIGNED_SHORT_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS */

#  ifndef LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS
#   define LIBS_CREATE_UNSIGNED_INT_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS */

#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS
#   define LIBS_CREATE_UNSIGNED_LONG_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS */
# endif /* LIBS_NO_UNSIGNED_STRUCTS */

/*
** Activate of creating floating point types
*/
# ifndef LIBS_NO_FLOATING_STRUCTS
#  ifndef LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS
#   define LIBS_CREATE_FLOATING_FLOAT_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS */

#  ifndef LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS
#   define LIBS_CREATE_FLOATING_DOUBLE_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS */

#  ifndef LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
#   define LIBS_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS */

#endif /* LIBS_PREFENCES_H */
