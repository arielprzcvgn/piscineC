/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:08:27 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/13 14:12:04 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = (str[i] - 65 + 42) % 26 + 65;
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = (str[i] - 97 + 42) % 26 + 97;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_rot42(argv[1]));
	return (0);
}