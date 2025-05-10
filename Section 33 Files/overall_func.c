#include <stdio.h>

/*

fgetc(<pointer_to_a_file>) --> reading, This will read each character 

fputc(<char>, <pointer_to_a_file>) --> writing, This will write each character to the file 

fprintf(<pointer_to_a_file>, <placeholders>, <parameter>) --> Writing, Whatever we are printing to output, we would like to write it in the file. 

fscanf(<pointer_to_a_file>, <palceholders>, <parameter>) --> Reading, Reads info from a file and stores it in variables

fputs(<string>, <pointer_to_a_file>) --> Writing, works the same way as puts() but it writes it to a file, but it doesn't include the \n 

fgets(<string>, <sizeof(string), <pointer_to_a_file>) --> Reading, Gets the string from the file or whatever is specified as the last parameter
                                                          and outputs it to the terminal


*/