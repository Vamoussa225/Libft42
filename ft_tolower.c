/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:40:22 by vkanate           #+#    #+#             */
/*   Updated: 2021/11/05 19:43:35 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int caractere)
{
	if (caractere >= 65 && caractere <= 90)
	{
		return (caractere + 32);
	}
	return (caractere);
}
