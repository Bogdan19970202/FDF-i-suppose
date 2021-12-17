#ifndef FDF_H
# define FDF_H
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
char	**ft_split(char const *s, char c);
void	*ft_memmove(void *dst, const void *src, size_t len);
int	ft_atoi(const char *s);
char			*get_next_line(int fd);
unsigned int	ft_strlen(const char *s);
typedef struct s_pix{
  int x;
  int y;
  int z;
  int color;
  int end;
}     t_pix;

#endif