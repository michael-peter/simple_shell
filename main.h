#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

#include "macros.h"
#include "structs.h"

#include "hshell.h"
#include "hstring.h"
#include "herror.h"
#include "hbuiltin.h"

#endif /* _MAIN_H_ */
