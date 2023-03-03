/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:53:22 by rnarciso          #+#    #+#             */
/*   Updated: 2023/02/16 02:19:46 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "utils.h"

/*****************************************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*****************************************************************/

//printf function

int				ft_printf(const char *s, ...);
size_t			ft_converters(va_list args, const char s);
int				ft_putchar(char c);
unsigned long	ft_put_nbr(long long n, unsigned long len);
unsigned long	ft_plus_ultra(unsigned long n, unsigned long len);
int				ft_putstr(char *s);
size_t			ft_the_strlen(const char *s);
int				ft_pointer(unsigned long pp);
int				ft_hex(unsigned long long num, int base);
char			ft_convert(unsigned long long quotient,
					unsigned long long remainder, int base);

/*******************************************************************/

int				ft_isalpha(int i);
int				ft_toupper(int c);
int				ft_isdigit(int i);
int				ft_tolower(int i);
int				ft_isalnum(int i);
int				ft_isascii(int i);
int				ft_isprint(int i);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
size_t			ft_strlen(const char *str);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *src, const char *hidden, size_t n);
int				ft_atoi(const char *str);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_calloc(size_t nitems, size_t n);
char			*ft_strcpy(char *dest, char	*src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *src);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *s2);
void			ft_putnbr_fd(int n, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif