#include "funzioni.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	char *path;

	if (argc > 3)
		write(1, "Too many arguments, maximum is 2", 36);
	if (argc == 2)
		path = "numbers.dict";
		solve(path, argv[1]);
	if (argc == 3)
		path = argv[1];
		solve(path, argv[2]);
	return (0);
}
