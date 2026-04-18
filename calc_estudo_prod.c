#include <stdio.h>
int main (void)
{
	float num1 = 0, num2 = 0, resul = 0;
	int calc = 0, prod = 0;
	
	printf ("Digite o primeiro numero para o calculo: ");
	scanf ("%f", &num1);
	
	printf ("Digite o segundo numero para o calculo: ");
	scanf ("%f", &num2);
	
	printf ("Escolha a operacao:\n1 = Soma\n2 = Subtracao\n3 = Multiplicacao\n4 = Divisao sem produto\n5 = Divisao com produto\n6 = Apenas produto\n:");
	scanf ("%d", &calc);
	
	switch (calc)
	{
		case 1:
		{
			resul = num1 + num2;
			printf ("O resultado de %.2f + %.2f e: %.2f", num1, num2, resul);
			break;
		}
		case 2:
		{
			resul = num1 - num2;
			printf ("O resultado de %.2f - %.2f e: %.2f", num1, num2, resul);
			break;
		}
		case 3:
		{
			resul = num1 * num2;
			printf ("O resultado de %.2f . %.2f e: %.2f", num1, num2, resul);
			break;
		}
		case 4:
		{
			resul = num1 / num2;
			printf ("O resultado de %.2f / %.2f e: %.2f", num1, num2, resul);
			break;
		}
		case 5:
		{
			resul = num1 / num2;
			prod = (int)num1 % (int)num2;
			printf ("O resultado de %.2f / %.2f e: %.2f\nO seu produto e de: %d", num1, num2, resul, prod);
			break;
		}
		case 6:
		{
			prod = (int)num1 % (int)num2;
			printf ("O produto de %.2f / %.2f e: %d", num1, num2, prod);
			break;
		}
		default:
		{
			printf ("Por favor, insira uma operacao valida...");
			break;
		}
	}
}
