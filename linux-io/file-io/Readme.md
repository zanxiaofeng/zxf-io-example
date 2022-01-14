## Open
### 定义
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
int creat(const char *pathname, mode_t mode);
int openat(int dirfd, const char *pathname, int flags);
int openat(int dirfd, const char *pathname, int flags, mode_t mode);
### 参数
#### flsgs
访问模式：
Ｏ_RDONLY, O_WRONLY, O_RDWR
打开文件的行为：(可以按位或)
Ｏ_APPEND, O_ASYNC, O_CLOEXEC, O_CREAT, O_DIRECT, O_DIRECTORY, O_EXCL, O_LARGEFILE, O_NOATIME+, O_NOCTTY, O_NOFOLLOW, O_NOBLOCK, O_SYNC, O_TRUNC
#### mode(For create file)
S_IRWXU, S_IRUSR, S_IWUSR, S_IXUSR, XIRWXG, S_IRGRP,S_IWGRP, S_IXGRP, S_IRWXO, S_IROTH, S_IWOTH, S_IXOTH
0644, 0777, 0664
### 返回值
成功时返回文件描述符，出错时返回－１并把errno设置成相应的错误值

## Ｒead
### 定义
`#include <sys/types.h>`
`#include <sys/stat.h>`
`#include <fcntl.h>`
`int open(const char* name, int flags)`
`int open(const char* name, int flags, mode_t mode)`
### 参数

### 返回值