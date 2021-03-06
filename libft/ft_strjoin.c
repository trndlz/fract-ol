/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmervin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:10:18 by tmervin           #+#    #+#             */
/*   Updated: 2018/04/04 11:13:16 by tmervin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lt;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	lt = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((ret = (char*)malloc(sizeof(char) * lt)) == NULL)
		return (NULL);
	ret = ft_strcpy(ret, s1);
	ret = ft_strcat(ret, s2);
	return (ret);
}
