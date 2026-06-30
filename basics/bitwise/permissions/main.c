#include <header.h>
#include <stdio.h>

int main() {
	const char *path="/home/bidiu/create_test";
	int perm=0;
	optionsDo(path, OPT_CREATE|OPT_TRUNC);
	return 0;
}
