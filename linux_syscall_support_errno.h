#if defined(__cplusplus) && __has_include(<cerrno>)
#include <cerrno>
#else
#include <errno.h>
#endif

#pragma push_macro("SYS_ERRNO")
#undef SYS_ERRNO
#define SYS_ERRNO errno
#include "linux_syscall_support.h"
#pragma pop_macro("SYS_ERRNO")

#ifndef SYS_ERRNO
#undef LSS_ERRNO
#define LSS_ERRNO errno
#endif
