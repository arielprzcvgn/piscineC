/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:53:39 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/09 17:44:43 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		lenght;
	int		i;
	char	temp;

	i = 0;
	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	lenght--;
	while (i <= ((lenght / 2)))
	{
		temp = str[i];
		str[i] = str[lenght - i];
		str[lenght - i] = temp;
		i++;
	}
	return (str);
}
