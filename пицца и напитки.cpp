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
	std::cout << "выберите товар";
	std::cout << "1)пицца::сырная-3,50$,2)пепперони-3,25$, 3)диабло-4,65,4)четыре сезона-5,35$\n";
	if (pizzachoose == 1) {
		std::cout << "сырная";
	}
	else(pizzachoose == 2);
	{
		std::cout << "пепперони";
	}
	if (pizzachoose == 3)
	{
		std::cout << "диабло";
	}
	else(pizzachoose == 4);
	{
		std::cout << "четыре сезона";
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
	std::cout << "выберите количество товара";
	std::cin >> kollichestvo;
	if (summ > 50)
	{
		discount = summ / 5;
		std::cin >> discount;
		std::cout << "ваша скидка от суммы заказа";
	}
	if (kollichestvo > 4)
	{
		std::cout << "каждая пятая пицца в подарок";
	}
	if (price > 2 || kollichestvo > 3)
	{
		std::cout << "скидка 15% только на напитки, а не на весь заказ!";
		discount = kollichestvo / 100 * 15;
		std::cin >> discount;
	}
	std::cout << "чек";
	std::cout << pizza << napitky << kollichestvo << price << "\n";
	itog = kollichestvo * price;
	std::cout << "итого к оплате";
	std::cin >> itog;


	return 0;
}