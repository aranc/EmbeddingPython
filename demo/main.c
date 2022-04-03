#include <stdio.h>
#include <string.h>

#include "bridge_api.h"

int main(int argc, char** argv)
{
  char cmd[500];

  printf("GO GO GO\n");

  while (1) {
    printf(">>> ");
    scanf("%s", cmd);
    if (!strncmp(cmd, "quit", 5)) {
        break;
    }
    printf("kkkkkk\n");
  }
  
  return 0;
}
