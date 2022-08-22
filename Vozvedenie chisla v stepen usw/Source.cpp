#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define stepen
//#define ascii
//#define ryad
//#define ryad_1
//#define ryad_2
//#define umnozenie_pifagor
#define umnozenie

void main()
{
	setlocale(LC_ALL, "");

#ifdef stepen
	double a, b;
	cout << "\n\n\t���������� ����� � �������\n\n";
	cout << "������� ��������� �������: ";	cin >> a;
	cout << "\n������� ���������� �������: ";	cin >> b;
	double c = 1;
	if (b < 0)
	{
		a = 1 / a;
		b = -b;
	}
	for (int i = 1; i <= b; i++)
		{
			c *= a;
		}
		cout << "\n�����: " << a << " � ������� " << b << " = " << c << endl;
	

	main();

#endif // stepen 

#ifdef ascii
	cout << "\n\t������� ASCII-��������\n\n";

	int simvol = 0;

	for (int i = 0;i < 16;i++)
	{
		for (int j = 0; j < 16;j++)
		{
			cout << "\t"<<(char)simvol;
			simvol++;
		}
		cout << endl << endl;
	}
	cout << endl;
#endif // ascii

#ifdef ryad
	cout << "\t\t��� ���������" << endl<< endl;
	cout << "������� ������ ���� ���������: ";
	double predel;
	cin >> predel;
	int a=0, b = 1, c=0;
	while (a<=predel)
	{
		cout << " " << a;
		c = a + b;
		a = b;
		b = c;
		
	}
	cout << endl << endl;
#endif // ryad

#ifdef ryad_1
	cout << "\t\t��� ���������" << endl << endl;
	cout << "������� ����������� ���������� ����� ���� ���������: ";
	double predel;
	cin >> predel;
	int a = 0, b = 1, c = 0;
	for (int i=0; i < predel; i++)
	{
		cout << " " << a;
		c = a + b;
		a = b;
		b = c;

	}
	cout << endl << endl;

#endif // ryad_1

#ifdef ryad_2
	cout << "\t\t��� ������� �����" << endl << endl;
	cout << "������� ������� �����: ";
	int predel;
	int a = 0;
	while (a != 1)
	{
		cin >> predel;
		if (predel < 0)
		{
			cout << "����� ������ ���� ������� �������������!" << endl << endl;
			cout << "������� ������� �����: ";
        }
        else if (predel == 2) a = 1;
		else if (predel == 3) a = 1;
		else if (predel == 5) a = 1;
		else if (predel == 7) a = 1;
		else if	(predel % 2 == 0 || predel % 3 == 0 || predel % 5 == 0 || predel % 7 == 0)
		{
			cout << "����� ������ ���� �������!" << endl << endl;
			cout << "������� ������� �����: ";
		}
		else a = 1;
	}

	for (int i = 2; i <= predel; i++)
	{
		if (i == 2) cout << i << " ";
		else if (i == 3) cout << i << " ";
		else if (i == 5) cout << i << " ";
		else if (i == 7) cout << i << " ";
		else if (i % 2 == 0) cout << "";
		else if (i % 3 == 0) cout << "";
		else if (i % 5 == 0) cout << "";
		else if (i % 7 == 0) cout << "";
		else cout << i << " ";

	}
	cout << endl << endl;


#endif // ryad_2

#ifdef umnozenie_pifagor
	cout << "\t\t������� ��������� ��������\n\n";

	cout << " " << "\t" << "|";
	for (int i = 1; i <= 10;i++)
	{
		cout << "  " << i  << "\t" << "|";
	}

	cout << endl;

	for (int i = 1;i <= 10;i++)
	{
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << "  " << i << "\t" << "|";
		for (int j = 1;j <= 10;j++)
		{
			cout << "  "<< i * j << "\t" << "|" ;
		}
		cout << endl;
		
	}
	cout << "-----------------------------------------------------------------------------------------" << endl;


#endif // umnozenie


#ifdef umnozenie
	cout << "\n\t\t\t\t������� ���������\n\n\n";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout <<"  " << j<< " * " << i << " = " << j * i << "\t";
		}

		cout << endl;
	}

	cout << endl << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 6; j <= 10; j++)
		{
			cout << "  " << j << " * " << i << " = " << j * i << "\t";
		}

		cout << endl;
	}

#endif // umnozenie

}