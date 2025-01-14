/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palaca <pln.alaca21@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:41:53 by palaca            #+#    #+#             */
/*   Updated: 2024/10/28 05:17:50 by palaca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*j;

	i = 0;
	if (!lst)
		return (0);
	j = lst;
	while (j)
	{
		j = j->next;
		i++;
	}
	return (i);
}
