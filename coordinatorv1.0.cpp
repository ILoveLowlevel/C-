
#include <iostream>
#include <stdio.h>
#include <cstdlib>
void coordiantorsquare (){

	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int topedge = 0;
	int sidedge = 0;

	printf("\033[0;32m  x1 y1 x2 y2 values:");
	scanf_s("%d",&x1);
	scanf_s("%d",&y1);
	scanf_s("%d",&x2);
	scanf_s("%d",&y2);

	
	

	if (x2 > x1)
	{
     topedge = x2 - x1;
	}
	else
	{
		topedge = x1 - x2;
	}

	if (y2 > y1)
	{
    sidedge = y2 - y1;
	}
	else
	{
	sidedge = y1 - y2;
	}



	for (int i = 0; i <= x1; i++)
	{
		printf(" ");
	}


	for (int a = 0; a <= y1; a++)
	{
		printf("\n");
		// control the value y1
	}

	for (int b = 0; b <= x1; b++)
	{
		printf(" ");
	}



	for (int m = 0; m  <= topedge; m++)
	{
     
		for (int s = 0; s <= sidedge; s++)
		{
			printf("* ");
		}

		printf("\n");

		for (int c = 0; c <= x1; c++)
		{
			printf(" ");
		}



	}



}



int main()
{
	int tux = 0;
	while (true)
	{
     coordiantorsquare();
	 scanf_s("%d",&tux);
	 system("CLS");
	}
	
	

}
