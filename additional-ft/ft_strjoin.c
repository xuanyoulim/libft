/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 21:34:21 by xlim              #+#    #+#             */
/*   Updated: 2018/07/15 22:32:15 by xlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	if (!s1 || !s2)
		return (NULL);
	out = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
		return (NULL);
	out = ft_strdup(s1);
	ft_strcat(out, s2);
	return (out);
}
