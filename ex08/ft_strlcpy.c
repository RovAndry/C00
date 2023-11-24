#include <unistd.h>
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int count = 0;

	while (*(src + count ) != '\0')
	{
	count++;
	}

	if(count == size)
	{
		for(int i = 0 ; i < count - 1; i ++)
		{
			*(dest + i) = *(src + i);
		}		
		*(dest + count - 1) = '\0';
	}
	else if (count < size)
	{
		for (int i = 0 ; i < count;i++)
		{
			*(dest + i ) = *(src + i);
		}
		*(dest + count -1) = *(src + count - 1 );
	}

	else 	
	{
		for (int i = 0 ; i < size - 1;i++)
		{	
			*(dest + i ) = *(src + i );
		}
		*(dest + size - 1) = '\0';
	}

	for (int k = 0 ; k <size ;k++)
	{
		write(1,( dest+k ),1);
	}	
		
	return count;
}

void main()
{
	char s []= "anana";
	int size =6;
	char d [size];
	int t ;
	t = ft_strlcpy(d,s,size);
	
	printf("%d",t);
}
