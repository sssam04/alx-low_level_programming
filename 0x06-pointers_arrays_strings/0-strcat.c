#include "main.h"



/**
 *_strcat - This function appends the @src string to the @dest string
 * overwrite the terminating null byte at the end of dest
 *then adds a terminating null byte
 * Return: returns poiner to @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 */



char *_strcat(char *dest, char *src)

{



			int index = 0, dest_len = 0;



			while (dest[index++])

				dest_len++;



				for (index = 0; src[index]; index++)

				dest[dest_len++] = src[index];



				return (dest);

}
