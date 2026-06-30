#include <header.h>
#include <fcntl.h>
#include <sys.h>
void optionsDo(const char *path, int opt) {
	int flags = O_WRONLY;

	if(opt & OPT_CREATE) {
		flags |= O_CREAT;
	}
	if(opt & OPT_TRUNC) {
		flags |= =_TRUNC;
	}
	
	int fd = open(path, flags, 0644);

	if (fd == -1) { perror("open"); return; }

	close(fd);
}
