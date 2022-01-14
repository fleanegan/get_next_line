/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_auxilliar.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <fschlute>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:03:02 by                   #+#    #+#             */
/*   Updated: 2021/11/23 09:15:55 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_AUXILLIAR_H
# define LIBFT_AUXILLIAR_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

size_t	count_trimmable_leading_chars(const char *src, const char *set);
size_t	count_trimmable_trailing_chars(const char *src, const char *set);
size_t	calc_len_sub_str(const char *src, const char *set);
int		count_substrings(const char *s, char *c);
int		is_char_in_set(char in, const char *set);
void	free_2d_char_array(char **mem);
int		calc_digits_in_number(int in);
size_t	calc_min_unsigned(size_t a, size_t b);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
#endif
