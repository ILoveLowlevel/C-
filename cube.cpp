
#include <Windows.h>
#include <iostream>
using namespace std;

void cube() {


	int sft_space_value = 15; //unnecessary
	int square_first_top1_0 = 0;
	int square_first_top2_1 = 15;
	int a = 5;
	int square_cont_tot = 20; //sft1_0+sft2_1 = toplamı ;
	//space 15 
	system("color a");
	




	for (int i = 0; i < 5; i++)
	{


		for (int i = 0; i < sft_space_value; i++)
		{
			cout << " ";
		}

		sft_space_value--;



		for (int i = 0; i < 15; i++)
		{
			cout << "8";

			Sleep(5);
		}




		for (int i = 0; i < square_first_top1_0; i++)
		{
			cout << "0";
			Sleep(5);
		}
		square_first_top1_0++;
		cout << endl;



	}

	sft_space_value = 10;




	for (int i = 0; i < 10; i++)
	{


		for (int i = 0; i < sft_space_value; i++)
		{
			cout << " ";
		}


		for (int i = 0; i < 15; i++)
		{
			cout << "H";
			Sleep(5);
		}

		for (int i = 0; i < 5; i++)
		{
			cout << "0";
			Sleep(5);
		}



		cout << endl;




	}

	for (int i = 0; i < 5; i++)
	{




		for (int i = 0; i < sft_space_value; i++)
		{
			cout << " ";
		}


		for (int i = 0; i < 15; i++)
		{
			cout << "H";
		}



		for (int i = 0; i < a; i++)
		{
			cout << "0";

		}
		a--;
		square_first_top1_0++;




		cout << endl;




	}











}




int main()
{
  
	
	

	while (true) {

		system("color 0");
		system("color 1");
		system("color 2");
		system("color 3");
		system("color 4");
		system("color 5");
		system("color 6");
		cout << endl << endl;
		cube();
	}







}
