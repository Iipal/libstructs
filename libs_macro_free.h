/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_macro_free.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:01:41 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/15 17:02:00 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_MACRO_FREE_H
# define LIBS_MACRO_FREE_H

# ifdef CREATE_2_STRUCT
#  undef CREATE_2_STRUCT
# endif
# ifdef CREATE_3_STRUCT
#  undef CREATE_3_STRUCT
# endif
# ifdef CREATE_4_STRUCT
#  undef CREATE_4_STRUCT
# endif

#endif /* LIBS_MACRO_FREE_H */
