#include <stdio.h>

int
main ()
{

  char *STATIC_WELCOM_MESSAGE = " Welcom on API generator CLI !";
  char *STATIC_GET_STARTED_MESSAGE =
    " To start, please learn about the CLI commands available : $ api-generator --help ";


  //Beginning quickly
  char *STATIC_BEGIN_MESSAGE = " ** QUICK BEGINNING (root directory) ** ";
  char CMD_LIST[][30] =
    { "$ /bin/setup.js [args]", "$ /bin/generator.js [args]" };
  size_t i = 0;

  //Introduction output
  printf ("%s \n \n %s", STATIC_WELCOM_MESSAGE, STATIC_GET_STARTED_MESSAGE);


  //Beginning output
  printf ("\n \n %s \n", STATIC_BEGIN_MESSAGE);

  for (i = 0; i < sizeof (CMD_LIST) / sizeof (CMD_LIST[0]); i++)
    {
      printf ("\n %s \n", CMD_LIST[i]);
    }


  return 0;
}
