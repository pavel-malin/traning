// ������������� ��������� ���� ��� ������ ��������� 
#include<iostream>

using std::cout;
using std::cin;

const int clubs = 0;
const int diamonds = 1;  // �����
const int hearts = 2;
const int spades = 3;   
const int jack = 11;	 // ����������� ����
const int queen = 12;
const int king = 13;
const int ace = 14;

////////////////////////////////
struct card
{
	int number;  // �����������
	int suit;    // �����
};
/////////////////////////////

int main()
{
	setlocale(LC_ALL, "");
	card temp, chosen, prize; // ��� �����
	int position;
	card card1 = { 7, clubs }; // ������������� ����� 1
	cout << "����� 1: 7 ����\n";
	card card2 = { jack, hearts }; // ������������� ����� 2
	cout << "����� 2: ����� ������\n";
	card card3 = { ace, spades }; // ������������� ����� 3
	cout << "����� 3: ��� ���\n";
	prize = card3;
	cout << "������ ������� ����� 1 � ����� 3...\n";
	temp = card3; card3 = card1; card1 = temp;
	cout << "������ ������� ����� 2 � ����� 3...\n";
	temp = card3; card3 = card2; card2 = temp;
	cout << "������ ������� ����� 1 � ����� 2...\n";
	temp = card2; card2 = card1; card1 = temp;
	cout << "�� ����� ������� (1,2 ��� 3) ������ ��� ���? ";
	cin >> position;
	switch (position)
	{
	case 1:
		chosen = card1;
		break;
	case 2:
		chosen = card2;
		break;
	case 3:
		chosen = card3;
		break;
	}
	if (chosen.number == prize.number &&  // 
		chosen.suit == prize.suit)
		cout << "���������! �� ��������!\n";
	else
		cout << "�������. �� ��������.\n";
	return 0;
}