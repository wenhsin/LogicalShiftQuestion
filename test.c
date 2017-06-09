#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printBinary(unsigned int data)
{
	unsigned int temp;
	char j = 31;
        while(j>=0)
        {
                        temp = data & (0x1<<j);
                        if(temp)
                                printf("1");
                        else
                                printf("0");
                        j--;
        }

}
int main(void)
{

	char i = 0;
	unsigned int data;
	while(i<=64) 
	{
		data = 0x1<<i;
		printf("%02d => ", i);
		printBinary(data);
		printf("\n");
		i++;
	}

	printBinary(0x1<<32);	
	return 0;
}
