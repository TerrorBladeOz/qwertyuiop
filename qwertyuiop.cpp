#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
using namespace std;
void a()

{
	
	int a, b, c, g = 0;
	cout << "Введите начало диапозона: "; cin >> a;
	cout << "Введите конец диапозона: "; cin >> b;
	cout << "Введите число: "; cin >> c;

	for (int i = a; i < b; i++)
	{
		if (i == c)g = 1;
	}

	while (g != 1)
	{
		if (g == 0) { cout << "Число не входит в диапозон, повторите ввод: "; cin >> c; }
		for (int i = a; i < b; i++)
		{
			if (i == c)g = 1;
		}
		if (g == 1) { cout << "Число входит в диапозон ";}
	}
}

void a1()
{
	srand(time(NULL));
	int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, y = 1;
	int q = 30, q1 = 50, q2 = 150, q3 = 45, q4 = 300;
	int a = rand() % 10, a1 = rand() % 10, a2 = rand() % 10, a3 = rand() % 10, a4 = rand() % 10;
	int b, c;
	setlocale(LC_ALL, "rus");
	cout << "\t\tКассовый аппарат: Покупай или умри\n";
	cout << "Ниже товар и код товара\n";
	cout << "Хлеб - 1, Молоко - 2, Мясо - 3, Печенье - 4, Вино - 5\n";
	cout << "Хлеб "<<a<<" , Молоко "<<a1<<" , Мясо "<<a2<<" , Печенье "<<a3<<" , Вино "<<a4<<endl;
	cout << "Хлеб - 30р, Молоко - 50р, Мясо - 150р, Печенье - 45р, Вино - 300р\n";
	cout << "Выберите товар: "; cin >> b;
	if (b > 5 || b < 1)
	{
		cout << "\nОШИБКА\n";  exit(0);
	}
	cout << "Количество: "; cin >> c;

	if (b == 1)
	{
		cout << "Вы выбрали хлеб в количестве " << c << " ш.\n";
		sum = q * c;
		cout << "Сумма покупки " << sum << endl;
	}
	if (b == 2)
	{
		cout << "Вы выбрали молоко в количестве " << c << " ш.\n";
		sum1 = q1 * c;
		cout << "Сумма покупки " << sum1 << endl;
	}
	if (b == 3)
	{
		cout << "Вы выбрали мясо в количестве " << c << " ш.\n";
		sum2 = q2 * c;
		cout << "Сумма покупки " << sum2 << endl;
	}
	if (b == 4)
	{
		cout << "Вы выбрали печенье в количестве " << c << " ш.\n";
		sum3 = q3 * c;
		cout << "Сумма покупки " << sum3 << endl;
	}
	if (b == 5)
	{
		cout << "Вы выбрали вино в количестве " << c << " ш.\n";
		sum4 = q4 * c;
		cout << "Сумма покупки " << sum4 << endl;
	}
	if (c == 0)cout << "Сумма покупки: " << sum + sum1 + sum2 + sum3 + sum4;
	while (y != 0)
	{
		cout << "\n\n";
		cout << "Следующий товар 0 - нет, все кроме нуля - да >>> "; cin >> y;
		if (y == 0) 
		{
			cout << "Сумма покупки: " << sum + sum1 + sum2 + sum3 + sum4; break;
		}
		cout << "\n";
		cout << "Выберите товар: "; cin >> b; 
		if (b > 5 || b < 1)
		{
			cout << "\nОШИБКА\n";  exit(0);
		}
		cout << "Количество: "; cin >> c;
		cout << "Количество: "; cin >> c;

		if (b == 1)
		{
			cout << "Вы выбрали хлеб в количестве " << c <<" ш.\n";
			sum = q * c;
			cout << "Сумма покупки "<<sum<<endl;
		}
		if (b == 2)
		{
			cout << "Вы выбрали молоко в количестве " << c << " ш.\n";
			sum1 = q1 * c;
			cout << "Сумма покупки " << sum1 << endl;
		}
		if (b == 3)
		{
			cout << "Вы выбрали мясо в количестве " << c << " ш.\n";
			sum2 = q2 * c;
			cout << "Сумма покупки " << sum2 << endl;
		}
		if (b == 4)
		{
			cout << "Вы выбрали печенье в количестве " << c << " ш.\n";
			sum3= q3 * c;
			cout << "Сумма покупки " << sum3 << endl;
		}
		if (b == 5)
		{
			cout << "Вы выбрали вино в количестве " << c << " ш.\n";
			sum4 = q4 * c;
			cout << "Сумма покупки " << sum4 << endl;
		}
		if (y== 0)cout << "\nСумма покупки: "<<sum+sum1+sum2+sum3+sum4;
	} 
}
	
void a2()
{
	setlocale(LC_ALL, "rus");
	int a, a1, x, b, s, s1 = 0, s2 = 0, c = 0;
	cout << "Какую сложность выберите: легкая - 0, средняя - 1, сложная - 2 >>> ";
	cin >> b;
	while (c != 1) {

		switch (b) {
		case 0:
			x = 11;
			c = 1;
			break;
		case 1:
			x = 21;
			c = 1;
			break;
		case 2:
			x = 31;
			c = 1;
			break;
		default:
			cout << "Вы ввели неправильное значение сложности, повторите попытку: \n";
			cin >> b;
			break;
		}
	}
	switch (b) {
	case 0:
		cout << "Вы выбрали легкую сложность \n";
		break;
	case 1:
		cout << "Вы выбрали среднею сложность \n";
		break;
	case 2:
		cout << "Вы выбрали сложную сложность \n";
		break;
	}
	cout << "Чтобы остановить программу напишите 00\n";
	do {
		srand(time(NULL));
		a = rand() % x;
		a1 = rand() % x;
		cout << a << " * " << a1 << " = ";
		s = a * a1;
		cin >> s;
		if (s == a * a1) {
			cout << "Вы ответили правильно\n";
			s1++;
		}
		else if (s == 00) {
			cout << "Остановка программы >>> \n";
			break;
		}
		else {
			cout << "Вы ответили неправильно\n";
			s2++;
		}
	} while (s != 00);
	printf("Правильных ответов %d и не правильных ответов %d ", s1, s2);
	
}

void a4()
{
	cout << "\t\t**\n";
	cout << "\t       ****\n";
	cout << "\t      ******\n";
	cout << "\t     ********\n";
	cout << "\t    **********\n";
	cout << "\t     ********\n";
	cout << "\t      ******\n";
	cout << "\t       ****\n";
	cout << "\t\t**\n\n\n";

	int i, j, N = 9;
	int center = N / 2;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i <= center)
			{
				if (j >= center - i && j <= center + i)
					cout << "*";
				else
					cout << " ";
			}
			else
			{
				if (j >= center + i - N + 1 && j <= center - i + N - 1)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
	system("PAUSE");
}

void a5()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите длину прямоугольника: "; cin >> a;
	cout << "Введите ширину прямоугольника: "; cin >> b;
	string s(a, '*');
	string x(a - 2, ' ');
	cout << "Не заполненный\n";
	cout <<s<<endl;
	for (int i = 0; i < b - 2; i++)
	{
		cout << "*" << x << "*"<<endl;
	}
	if (b == 1){ cout << "" << endl; }
	else cout << s << endl;
	cout << "\n\n";
	cout << "Заполненный\n";
	for (int i = 0; i < b - 2; i++)
	{
		cout <<s<< endl;
	}
	if (b == 1) { cout << "" << endl; }
	else cout << s << endl;
}

void a6()
{
	setlocale(LC_ALL, "rus");
	int a, b = 0; int h = 0;
	for (int i = 0; i < 6; i++)
	{
		h++;
		cout << "Введите прибыль за " << h << " месяц: \n"; cin >> a;
		b = b + a;
	}
	cout << "Прибыль компании за 6 месяцев составляет "<<b<<" $";
}

void a7()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите размер массива: "; cin >> a;
	int* p= new int[a];
	cout << "Вводим массив >>>\n";
	for (int i = 0; i < a; i++)
	{
		cout << "Введите число №" << i + 1 << "-> ";
		cin >> p[i];
		cout << endl;
	}
	cout << "Выводим массив >>>\n";
	cout << "{ ";
	for (int i = 0; i < a; i++) {
		
		cout << p[i] <<", ";
		
	}
	cout << " }";
	cout << "\n\nВыводим перевернутый массив >>>\n";
	cout << "{ ";
	for (int i = a - 1; i >= 0; i--)
	{
		cout << p[i] << ", ";
	}
	cout << " }";
	
}

void a8()
{
	setlocale(LC_ALL, "rus");
	int a = 0,p[5];
	cout << "Вводим массив >>>\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 <<" сторону "<< "-> ";
		cin >> p[i];
		a = a + p[i];
		cout << endl;
	}
	cout << "Периметр пятиугольника равен "<<a;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int a, b = 0,p[12],x = 0,x1 = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Введите прибыль за " << i+1<< " месяц: \n"; 
		cin >> p[i];
		b = b + p[i];
	}
	int max = p[0];
	for (int i = 0; i < 12; ++i)
	{
		if (p[i] > max)
		{
			max = p[i];
			i = x;
		}
		
	}
	int min = p[0];
	for (int i = 0; i < 12; ++i)
	{
		if (p[i] < min)
		{
			min = p[i];
			i = x1;
		}
		
	}
	
	cout << "Прибыль компании за 12 месяцев составляет " << b << " $\n";
	cout << "Максимальная прибыль была в ";
	if (x == 0)cout << "январе"; 
	if (x == 1)cout << "феврале";
	if (x == 2)cout << "марте";
	if (x == 3)cout << "апреле";
	if (x == 4)cout << "мае";
	if (x == 5)cout << "июне";
	if (x == 6)cout << "яиюле";
	if (x == 7)cout << "августе";
	if (x == 8)cout << "сентябре";
	if (x == 9)cout << "октябре";
	if (x == 10)cout << "ноябре";
	if (x == 11)cout << "декабре";
	cout<<" и она состовляла " << max << " $\n";
	cout << "Минимальная прибыль была в "; 
	if (x1 == 0)cout << "январе";
	if (x1 == 1)cout << "феврале";
	if (x1 == 2)cout << "марте";
	if (x1 == 3)cout << "апреле";
	if (x1 == 4)cout << "мае";
	if (x1 == 5)cout << "июне";
	if (x1 == 6)cout << "яиюле";
	if (x1 == 7)cout << "августе";
	if (x1 == 8)cout << "сентябре";
	if (x1 == 9)cout << "октябре";
	if (x1 == 10)cout << "ноябре";
	if (x1 == 11)cout << "декабре";
	cout<<" и она состовляла " << min << " $\n";
}