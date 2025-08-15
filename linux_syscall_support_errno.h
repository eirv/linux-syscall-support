#include <errno.h>

#pragma push_macro("SYS_ERRNO")
#undef SYS_ERRNO
#define SYS_ERRNO errno
#include "linux_syscall_support.h"
#pragma pop_macro("SYS_ERRNO")
