// ������� ����� ���� � ����������� � �������������� ������������
#include<iostream>

using std::cout;

#include<conio.h> // ��� _getche()

enum itsaWord {NO, YES}; // NO=0, YES=1

int main()
{
	setlocale(LC_ALL, "");
	itsaWord isWords = NO;  // isWords ����� YES, ����� 
	// �������� �����, � NO, ����� �������� �������
	char ch = 'a';			// ���������� ������� � ����������
	int wordcount = 0;		// ����� ����
	cout << "������� �����������: \n";
	do
	{
		ch = _getche();		// ���� �������
		if (ch == ' ' || ch == '\r') // ���� ������ ������,
		{
			if (isWords == YES) // � �� ����� ��������� �����.
			{					// ������, ����� �����������
				wordcount++;	// ���� �����
				isWords = NO;	// ����� �����
			}
		}						// � ��������� ������
		else                    // ���� ����� ������������ 
			if (isWords == NO)  // ���� ������� ���� �����.
				isWords = YES;  // �� ������������� ���� 
	} while (ch != '\r');      // ����� �� ������� Enter
	cout << "\n----����� ����: " << wordcount << "---\n";
	return 0;
}