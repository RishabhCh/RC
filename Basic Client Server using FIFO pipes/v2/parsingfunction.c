#include <string.h>
#include "parsingfunction.h"

void parsingfunction(char buf[100], char *args[100])
{
	int j=0;
        char *ptr;
	ptr = strtok(buf," ");                  // Storing the location of first token
        // Loop to parse the command line string string till the end
        while(ptr != NULL)
        {
           args[j]=ptr;                         // Storing the location of the token to the pointer array
           ptr = strtok(NULL," ");              // Getting the location of the next token
           j = j+1;                             // Incrementing the index for the pointer array
        }
        args[j] = NULL;                         // Assigning NULL to the last index of the pointer array to mark the end of string

}	
