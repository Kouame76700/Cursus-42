/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:50:08 by tmichel           #+#    #+#             */
/*   Updated: 2023/05/23 20:41:36 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_strchr(char *str, int searchedChar);
char	*ft_strdup(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(char *str, int searchedChar);
int		ft_toupper(int character);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_isdigit(int c);
int		ft_isascii(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int		ft_tolower(int character);
int		ft_isprint(int c);
#endif
