#ifndef __ERR_HDLR_H__
#define __ERR_HDLR_H__

#define MAXLINE 4096

void err_dump(const char *, ...);
void err_msg(const char *, ...);
void err_quit(const char *, ...);
void err_exit(int, const char*, ...);
void err_ret(const char *, ...);
void err_sys(const char *, ...);

#endif /* __ERR_HDLR_H__ */
