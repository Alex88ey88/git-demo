#include<stdio.h>
#include<math.h>

int enterNumber();
int enterPower();
void raiseNumber();

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		raiseNumber();// Vizov Funkcii vozvedeniya v stepen i vivod na ekran 5 raz
	}
	return 0;
}

void raiseNumber() //Exponentation Function
{
	int num = enterNumber();// Colling Function scaning of number&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
	int power = enterPower();// Colling Function scaning of power
	int res_amount = pow(num, power);// matematicheskoe reshenie zadachi
	printf("%d to the power of %d equals %d\n", num, power, res_amount);// vivod na ekran
}

int enterNumber()// Funkciya skanirovaniya vvedenogo chisla
{
	int num = 0;
	printf("\nEnter a Number:");
	scanf("%d", &num);
	return num;
}

int enterPower()// Funkciya skanirovaniya stepeni
{
	int power = 0;
	printf("Enter a Power:");
	scanf("%d", &power);
	return power;
}