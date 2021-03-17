#include <stddef.h>
#include <unistd.h>

ssize_t ft_read(int fd, void *buf, size_t count);
ssize_t	write(int fd, const void *buf, size_t count);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);