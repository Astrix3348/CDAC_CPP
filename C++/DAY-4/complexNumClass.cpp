#include <iostream>
using namespace std;

class Complex
{
public:
	int real;
	int imaginary;

	Complex(int real, int imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
};

void add(Complex c1, Complex c2)
{
	Complex res(0, 0);
	res.real = c1.real + c2.real;
	res.imaginary = c1.imaginary + c2.imaginary;

	cout << "addition gives us " << res.real << " + " << res.imaginary << "i" << endl;
	cout << endl;
}

void multiply(Complex c1, Complex c2)
{
	Complex res(0, 0);
	int real = c1.real * c2.real;
	int r = c1.real * c2.imaginary;
	int imaginary = c1.imaginary * c2.real;
	int img = -(c1.imaginary * c2.imaginary);

	res.real = real + img;
	res.imaginary = r + imaginary;

	cout << "multiplication gives us " << res.real << " + " << res.imaginary << "i" << endl;
	cout << endl;
}

void subtraction(Complex c1, Complex c2)
{
	Complex res(0, 0);
	res.real = c1.real - c2.real;
	res.imaginary = c1.imaginary - c2.imaginary;

	cout << "subtraction gives us " << res.real << " + " << res.imaginary << "i" << endl;
	cout << endl;
}

int main()
{
	int real;
	int imaginary;
	int n;

	cout << "Enter real and imaginary for c1: ";
	cin >> real >> imaginary;
	Complex c1(real, imaginary);

	cout << "Enter real and imaginary for c2: ";
	cin >> real >> imaginary;
	Complex c2(real, imaginary);
	cout << endl;

	do
	{

		cout << "Enter 1 to add" << endl;
		cout << "Enter 2 to subtract" << endl;
		cout << "Enter 3 to multiply" << endl;
		cout << "Enter 4 to exit" << endl;
		cout << endl;

		cout << "What do you want to do? ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
			add(c1, c2);
			break;
		case 2:
			subtraction(c1, c2);
			break;
		case 3:
			multiply(c1, c2);
			break;
		default:
			cout << "Exiting..." << endl;
			break;
		}

	} while (n != 4);

	return 0;
}