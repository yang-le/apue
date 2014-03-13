
#include <errno.h>
#include <stdarg.h>

static void err_doit(int, int, const char *, va_list);

void
err_ret(const char *fmt, ...)
{
	va_list		ap;
	va_start(ap, fmt);
	err_doit(1, errno, fmt, ap);
	va_end(ap);
}


