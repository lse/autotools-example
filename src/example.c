#include <stdio.h>
#include <stdlib.h>

#include "thread.h"

static void usage(void)
{
	extern char *__progname;

	fprintf(stderr, "usage: %s number\n", __progname);
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		usage();

	int arg = atoi(argv[1]);

	if (arg <= 0)
		return 1;

	return thread_launch(arg);
}
