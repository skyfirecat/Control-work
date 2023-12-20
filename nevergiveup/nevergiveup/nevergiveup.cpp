#include <iostream>

void program1()
{
	std::cout << "Enter your number: ";
	long a, b = 0, x;
	int counter;
	std::cin >> a;
	if (a <= 0)
	{
		std::cout << "Number should be natural.";
		return;
	}
	bool done = false;
	while (done == false)
	{
		a = a + b;
		x = a;
		b = 0;
		counter = 0;
		while (x > 0)
		{
			counter++;
			x = x / 10;
		}
		x = a;
		while (x > 0)
		{
			b += x % 10 * pow(10, (counter - 1));
			x = x / 10;
			counter--;
		}
		std::cout << a << "\n";
		if (a == b)
		{
			done = true;
		}
	}
}

void program2()
{
	std::cout << "Start entering a sequence of numbers, if you want to end enter 0: ";
	int a = 1, max1 = 0, max2 = 0;
	while (a != 0)
	{
		std::cin >> a;
		if (a < max1 && a > max2)
		{
			max2 = a;
		}
		else if (a == max1 && a > max2)
		{
			max2 = a;
		}
		else if (a > max1 && a > max2)
		{
			max2 = max1;
			max1 = a;
		}
	}
	std::cout << "max1 = " << max1 << "\n";
	std::cout << "max2 = " << max2 << "\n";
}

void program3()
{
	std::cout << "Enter your number: ";
	int a;
	std::cin >> a;
	if (a <= 0 || a % 2 != 0)
	{
		std::cout << "Number should be both natural and % 2.";
		return;
	}
	for (int i = 2; i <= a / 2; i++)
	{
		bool flag1 = true;
		if (i != 2)
		{
			for (int j = i - 1; j >= 2; j--)
			{
				if (i % j == 0)
				{
					flag1 = false;
					break;
				}
			}
			if (flag1 == false)
			{
				continue;
			}
		}
		for (int c = 2; c <= a; c++)
		{
			bool flag2 = true;
			if (c != 2)
			{
				for (int r = c - 1; r >= 2; r--)
				{
					if (c % r == 0)
					{
						flag2 = false;
						break;
					}
				}
				if (flag2 == false)
				{
					continue;
				}
			}
			if (i + c == a)
			{
				std::cout << i << '+' << c << '=' << a << '\n';
			}
		}
	}
}

int main()
{
	// program1();
	// program2();
	// program3();
	return 0;
}