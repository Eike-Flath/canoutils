#include <stdlib.h>
#include <string.h>

#include "ls.h"

char *strdup(char const *s)
{
    int len = strlen(s);
    char *dupped = malloc(len + 1);

    strcpy(dupped, s);
    dupped[len] = '\0';
    return dupped;
}
