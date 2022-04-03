#include <stdio.h>
#include <string.h>

#include "bridge_api.h"

int main(int argc, char** argv)
{
  char cmd[500];
  char res[500];

  Py_Initialize();
  import_bridge();

  printf("run \"hello world\" test:\n");
  hello_world();
  printf("\n");

  printf("GO GO GO\n");

  while (1) {
    printf(">>> ");
    scanf("%s", cmd);
    if (!strncmp(cmd, "quit", 5)) {
        break;
    }

    parse_command(cmd, res);
    printf("%s\n", res);
  }
  
  Py_Finalize();

  return 0;
}
