/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:35:55 by hthomas           #+#    #+#             */
/*   Updated: 2018/07/22 18:59:41 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include "stdlib.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_strcmp(char *s1, char *s2);
int		find_hauteur_largeur(char *figure, int *hauteur, int *largeur);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *buf, int start);
char	*ft_strcat(char *dest, char *buf);
char	*rush(int numero, int largeur, int hauteur);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
#endif
