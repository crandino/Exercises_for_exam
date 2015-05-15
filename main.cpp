#include <stdio.h>
#include "String.h"
#include "Cercle.h"

int main(int argc, char **argv)
{
	String s("   Hola mundo  ");
	s.trim();

	printf("%s", s.getString());

	getchar();

	return 0;
}