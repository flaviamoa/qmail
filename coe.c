#include <fcntl.h>
#include "coe.h"

int coe(fd)
int fd;

void coeFcntl(){
  return fcntl(fd,F_SETFD,1);
}

{
  return coeFcntl();
}
