#include <stdio.h>
#include <stdib.h>
#include <string.h>
#include <fctl.h>
#include <errno.h>

#define STDERR_FILENO 2

int main()
{
	const char *message = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	if (write(STDERR_FILENO, message, len) != len)
{
	/* handle error*/
	return 1;
}
        return 1;
}
