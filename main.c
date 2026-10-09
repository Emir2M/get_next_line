
#include "get_next_line.h"

int	main(void)
{
	char	*line;

	printf("Bir şeyler yazıp Enter'a basın (Çıkmak için Ctrl + D):\n");
	while ((line = get_next_line(0)) != NULL) // fd = 0 (stdin)
	{
		printf("GNL Okudu -> %s", line);
		free(line);
	}
	return (0);
}