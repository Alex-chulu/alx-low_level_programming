#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @str: string
 * Return: string
 */

char *rot13(char *str)
{
	int alx, chulu;
	char alph[52] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' ,
			 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' ,
			 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z' , 'a' ,
			 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' ,
			 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' ,
			 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};

	char rot13key[52] = {'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' ,'V' ,
			'W' , 'X' , 'Y' , 'Z' ,'A' , 'B' , 'C' , 'D' , 'E' , 'F' ,
			'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'n' , 'o' , 'p' , 'q' , 'r' ,
	                's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , 'a' ,
	                'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm'};

	while (str[++alx])
	{
		for (chulu = 0; chulu < 52; chulu++)
		{
			if (str[alx] == alph[chulu])
			{
				str[index] = rot13key[chulu];
				break;
			}
		}
	}
	return (str);
}
