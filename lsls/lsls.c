#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>

void listfiles(const char *path)
{
  struct dirent *ent;
  struct stat buf;

  DIR *dir = opendir(path);

  // if we can't open our directory
  if(!dir) {
    printf("Files don't exist\n");
    exit(1);
  };

  // While files are avaiable lets keep reading
  while ( (ent = readdir(dir)) != NULL ) {
    stat(ent->d_name, &buf);
    printf("%10ld ", buf.st_size );
    printf("%s\n", ent->d_name);
      if (buf.st_size == 512) {
        while ( (ent = readdir(opendir((ent->d_name))) ) != NULL ) {
          printf("%s\n", ent->d_name);
        }
      }
  };

  // Once we're done, lets close directory
  closedir(dir);

}

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
  scanf("%[^\n]", path);
    if (path[0] == 0) {
      path[0] = '.';
    };

  // function that will process the input and return files
  listfiles(path);


  return 0;
}