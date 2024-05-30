#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int
main()
{
	/*	some code	*/
	void* handler = dlopen("libfunc.so", RTLD_LAZY);
	if (!handler)
	{
		printf("error!\n%s\n", dlerror());
		exit(-1);
	}

	int (*hello) () = dlsym(handler,"hello");
	if (dlerror() != NULL)
	{
		printf("error!\n%s\n", dlerror());
		exit(-1);
	}

	hello();

	dlclose(handler);
	return 0;
}
