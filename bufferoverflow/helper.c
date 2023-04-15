#include <stdio.h>
#include <stdlib.h>

#define STACK_GOAL 0xBFFF0000U
#define MAX_PAD 0xFFFF

int main(int argc, char *argv[], char *envp[])
{
	volatile int canary = 0xDEADBEEF;

#ifdef COOKIE
	alloca(COOKIE);
#endif

	int ret = _main(argc, argv, envp);

	if (canary != 0xDEADBEEF) {
		fprintf(stderr, "Uh oh, the canary is dead.\n" \
				"Don't overwrite the stack frame for main().\n");
	}
	return ret;
}
