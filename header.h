#ifndef ENTETE_INCLUDED
#define ENTETE_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "read_source.c"
#include "cripting.c"

#define LG 10

struct art
{
    char car;
};

void lecture(void);
void encriptage(void);

#endif // ENTETE_INCLUDED