#include<iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int pizza = 0;
	int napitky = 0;
	int choose = 0;
	int pizzachoose = 0;
	int count = 0;
	int kollichestvo = 0;
	int price = 0;
	int itog;
	int summ = 0;
	int discount = 0;
	std::cout << "�������� �����";
	std::cout << "1)�����::������-3,50$,2)���������-3,25$, 3)������-4,65,4)������ ������-5,35$\n";
	if (pizzachoose == 1) {
		std::cout << "������";
	}
	else(pizzachoose == 2);
	{
		std::cout << "���������";
	}
	if (pizzachoose == 3)
	{
		std::cout << "������";
	}
	else(pizzachoose == 4);
	{
		std::cout << "������ ������";
	}
	std::cin >> pizzachoose;
	std::cout << "1)sprite-2$,2)cola-2$,3)fanta-2$\n";
	if (napitky == 1) {
		std::cout << "sprite";
	}
	else(napitky == 2);
	{
		std::cout << "cola";
	}
	if (napitky == 3)
	{
		std::cout << "fanta";
	}
	std::cin >> napitky;
	std::cout << "�������� ���������� ������";
	std::cin >> kollichestvo;
	if (summ > 50)
	{
		discount = summ / 5;
		std::cin >> discount;
		std::cout << "���� ������ �� ����� ������";
	}
	if (kollichestvo > 4)
	{
		std::cout << "������ ����� ����� � �������";
	}
	if (price > 2 || kollichestvo > 3)
	{
		std::cout << "������ 15% ������ �� �������, � �� �� ���� �����!";
		discount = kollichestvo / 100 * 15;
		std::cin >> discount;
	}
	std::cout << "���";
	std::cout << pizza << napitky << kollichestvo << price << "\n";
	itog = kollichestvo * price;
	std::cout << "����� � ������";
	std::cin >> itog;


	return 0;
}