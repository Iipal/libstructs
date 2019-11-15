/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_preferences.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:05:27 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:59:24 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_PREFERENCES_H
# define LIBS_PREFERENCES_H

# ifndef LIBSTRUCTS_H
#  error "include libstructs.h only instead of libs_prefences.h."
# endif

/*
** Activate of creating signed struct types
*/
# ifndef LIBS_NO_SIGNED_STRUCTS

/* enable signed chars */
#  ifndef LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS
#   define LIBS_CREATE_SIGNED_CHAR_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_CHAR_STRUCTS */

/* enable signed shorts */
#  ifndef LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS
#   define LIBS_CREATE_SIGNED_SHORT_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_SHORT_STRUCTS */

/* enable signed ints */
#  ifndef LIBS_NO_CREATE_SIGNED_INT_STRUCTS
#   define LIBS_CREATE_SIGNED_INT_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_INT_STRUCTS */

/* enable signed longs */
#  ifndef LIBS_NO_CREATE_SIGNED_LONG_STRUCTS
#   define LIBS_CREATE_SIGNED_LONG_STRUCTS
#  endif /* LIBS_NO_CREATE_SIGNED_LONG_STRUCTS */

# endif /* LIBS_NO_SIGNED_STRUCTS */

/*
** Activate of creating unsigned struct types
*/
# ifndef LIBS_NO_UNSIGNED_STRUCTS

/* enable unsigned chars */
#  ifndef LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS
#   define LIBS_CREATE_UNSIGNED_CHAR_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_CHAR_STRUCTS */

/* enable unsigned shorts */
#  ifndef LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS
#   define LIBS_CREATE_UNSIGNED_SHORT_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_SHORT_STRUCTS */

/* enable unsigned ints */
#  ifndef LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS
#   define LIBS_CREATE_UNSIGNED_INT_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_INT_STRUCTS */

/* enable unsigned longs */
#  ifndef LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS
#   define LIBS_CREATE_UNSIGNED_LONG_STRUCTS
#  endif /* LIBS_NO_CREATE_UNSIGNED_LONG_STRUCTS */

# endif /* LIBS_NO_UNSIGNED_STRUCTS */

/*
** Activate of creating floating point types
*/
# ifndef LIBS_NO_FLOATING_STRUCTS

/* enable floats */
#  ifndef LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS
#   define LIBS_CREATE_FLOATING_FLOAT_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_FLOAT_STRUCTS */

/* enable doubles */
#  ifndef LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS
#   define LIBS_CREATE_FLOATING_DOUBLE_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_DOUBLE_STRUCTS */

/* enable long doubles */
#  ifndef LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
#   define LIBS_CREATE_FLOATING_LONG_DOUBLE_STRUCTS
#  endif /* LIBS_NO_CREATE_FLOATING_LONG_DOUBLE_STRUCTS */

# endif /* LIBS_NO_FLOATING_STRUCTS */

#endif /* LIBS_PREFERENCES_H */
