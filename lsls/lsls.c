#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main()
{
  // Directory path
  char path[100];

  // prompt user input
  printf("Enter path to list files: ");

  // User input
  scanf("%s", path);

  // function that will process the input and return files
  listfiles(path);


  return 0;
}