#include <stdio.h>
#include <string.h>

#include "bridge_api.h"

int main(int argc, char** argv)
{
  char cmd[500];

  Py_Initialize();
  import_bridge();

  if (1) {
    Py_Finalize();
    return 0;
  }

  printf("run \"hello world\" test:\n");
  hello_world();
  printf("\n");

  if (1) {
    Py_Finalize();
    return 0;
  }

  printf("GO GO GO\n");

  while (1) {
    printf(">>> ");
    scanf("%s", cmd);
    if (!strncmp(cmd, "quit", 5)) {
        break;
    }
    printf("kkkkkk\n");
  }
  
  Py_Finalize();

  return 0;
}
