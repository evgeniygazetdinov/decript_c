
#include "stdio.h"
#include "string.h"

// probably replace by struct
// and reformat by one array
const char LOWERCASE_ALPHABET[] = "abcdefghijklmnopqrstuvwxyz";
const char UPPERCASE_ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char DIGITS[] = "0123456789";
const char HEX_DIGITS[] = "0123456789ABCDEF";
const char PUNCTUATION[] = ".,!?;:'\"-()[]{}";

int find_position(char for_find, char **current_case)
{
  for (int i = 0; i < sizeof(LOWERCASE_ALPHABET) - 1; i++)
  {
    if (LOWERCASE_ALPHABET[i] == for_find)
    {
      *current_case = "lower";
      return i;
    }
  }
  for (int i = 0; i < sizeof(UPPERCASE_ALPHABET) - 1; i++)
  {
    if (UPPERCASE_ALPHABET[i] == for_find)
    {
      *current_case = "upper";
      return i;
    }
  }
  return -1;
}

void crypt(char *array_data, int *file_size)
{

  for (int i = 0; i < *file_size; i++)
  {
    char *str;
    int position = find_position(array_data[i], &str);
    // TODO fix space dots command issue probably could resolve with symbols array
    // resolve keys as dict
    // when you has key and get value by that key
    printf("%s %d\n", str, position);
    printf("\n%d\n", i);
    // set algo for crypt here;
  }
}
void decript(char *array_data, int file_size)
{
}
