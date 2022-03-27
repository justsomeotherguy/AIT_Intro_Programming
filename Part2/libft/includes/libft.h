/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:04:02 by jwilliam          #+#    #+#             */
/*   Updated: 2022/03/22 17:45:20 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_printf.h"
# include "get_next_line.h"

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

size_t		ft_strlen(const char *str);

void		*ft_memset(void *str, int c, size_t len);

void		ft_bzero(void *str, size_t len);

void		*ft_memcpy(void *dest, const void *src, size_t len);

void		*ft_memmove(void *dest, const void *src, size_t len);

char		*ft_strcat(char *dest, char *src);

int			ft_strlcpy(char *dest, const char *src, size_t len);

int			ft_strlcat(char *dest, const char *src, size_t len);

int			ft_toupper(int c);

int			ft_tolower(int c);

char		*ft_strchr(const char *str, int c);

char		*ft_strrchr(const char *str, int c);

int			ft_strncmp(const char *str1, const char *str2, size_t len);

void		*ft_memchr(const void *str, int c, size_t len);

int			ft_memcmp(const void *str1, const void *str2, size_t len);

char		*ft_strnstr(const char *big, const char *little, size_t len);

int			ft_atoi(const char *str);

void		*ft_calloc(size_t num, size_t size);

char		*ft_strdup(const char *str);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

char		**ft_split(char const *s, char c);

char		*ft_itoa(int n);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}	t_list;

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);

t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void *));

void		ft_lstclear(t_list **lst, void (*del)(void *));

void		ft_lstiter(t_list *lst, void (*f)(void *));

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif