#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buff;
	ssize_t rd, wr;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fl = open(filename, O_RDONLY);

	rd = read(fl, buff, letters);

	close(fl);

	wr = write(STDOUT_FILENO, buff, rd);

	return (rd);
}

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

