#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	system("chcp 1251");
	cout << "\n����������: � ��������� ������ � ����� ���������� ������� ������ ������� ������ �������������\n";
	//��������� ������� �������
	int arr_size = 1;
here:
	cout << "���������: ���������������� ����������������\n������� ���������� ����� (1 ��� �����).\n";
	cin >> arr_size;
	if (arr_size < 1) goto here;
	//������ ����������
	float* speed = new float[arr_size]; //��������
	float* weight = new float[arr_size]; //����� ����������
	float* size_width = new float[arr_size]; // ������
	float* size_long = new float[arr_size]; // �����
	float* size_high = new float[arr_size]; // ������
	float* engine_capacity = new float[arr_size];//����� ���������
	int* wheels = new int[arr_size];//���������� ����
	int* doors = new int[arr_size]; //���������� ������
	int* year = new int[arr_size];//��� �������
	string name[9999]; //�������� ����������
	string colour[9999]; //����
	string transmission[9999];//������� �������

	while (true) //������ ������������ �����
	{
		int option = -1;
		int option2 = -1;
		cout << "\n�������� ���� �� ������������ �������:\n0)����� �� ���������\n1)�������� ������\n2)�������� ������ ������\n3)�������� ������ � ������\n4)������� ������ � ������\n";
		cin >> option;
		//����� �� ���������
		if (option == 0)
		{
			break;
			exit;
		}
		//���� ����� ������
		else if (option == 1)
		{
		option_arraysize:
			cout << "\n�� ������� ������� ����� ����� ������.\n ����������, �������� ������, ���� ��������� ������: �� 0 �� " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize;

			//������������ ��������� ������ � ������ � ������� � ������� "n"
			cout << "\n��������� �����, ������� ��������������� ������:\n";
			cout << "�������� ����������:\t"; cin >> name[option2]; cout << "\n";
			cout << "��� ������� (�.�.):\t"; cin >> year[option2]; cout << "\n";
			cout << "��������:\t"; cin >> speed[option2]; cout << "\n";
			cout << "����� ���������:\t"; cin >> engine_capacity[option2]; cout << "\n";
			cout << "���������� ������:\t"; cin >> doors[option2]; cout << "\n";
			cout << "���������� ����:\t"; cin >> wheels[option2]; cout << "\n";
			cout << "������:\t"; cin >> size_width[option2]; cout << "\n";
			cout << "�����:\t"; cin >> size_long[option2]; cout << "\n";
			cout << "������:\t"; cin >> size_high[option2]; cout << "\n";
			cout << "�����:\t "; cin >> weight[option2]; cout << "\n";
			cout << "������� �������:\t"; cin >> transmission[option2]; cout << "\n";
			cout << "����:\t "; cin >> colour[option2]; cout << "\n";
		}
		//������ ������ �� ������
		else if (option == 2)
		{
		option_arraysize_read:
			cout << "\n�� ������� ������� ������ ������ � ������.\n ����������, �������� ������, ������ ������� ������: �� 0 �� " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize_read;

			cout << "\n��������� ������:\n";
			cout << "�������� ����������:\t" << name[option2] << endl;
			cout << "��� ������� (�.�.):\t" << year[option2] << endl;
			cout << "��������:\t" << speed[option2] << endl;
			cout << "����� ���������:\t" << engine_capacity[option2] << endl;
			cout << "���������� ������:\t" << doors[option2] << endl;
			cout << "���������� ����:\t" << wheels[option2] << endl;
			cout << "������:\t" << size_width[option2] << endl;
			cout << "�����:\t" << size_long[option2] << endl;
			cout << "������:\t" << size_high[option2] << endl;
			cout << "�����:\t " << weight[option2] << endl;
			cout << "������� �������:\t" << transmission[option2] << endl;
			cout << "����:\t " << colour[option2] << endl;
		}
		//��������� ���������� ������
		else if (option == 3)
		{
		change_false:
			cout << "\n��������� ���������� ������\n������ ��������� ��������:\n0)��������\n1)�����\n2)������\n3)�����\n4)������\n5)�����\n6)�����\n7)���\n8)����\n9)������� �������\n10)��� �������\n11)����� ���������\n";
			int change1, change2;
			cout << "\n�������� ������ ������, � ����� ���: ";
			cout << "\n ������: "; cin >> change1;
			cout << "\n ��� ������: "; cin >> change2;
			if (change1 > arr_size - 1 || change2 > 11) goto change_false;
			switch (change2)
			{
			case 0: cout << "������� ������: " << speed[change1]; cout << "\n����� ������: "; cin >> speed[change1]; break; //��������
			case 1: cout << "������� ������: " << weight[change1]; cout << "\n����� ������: "; cin >> weight[change1]; break; //���
			case 2: cout << "������� ������: " << size_width[change1]; cout << "\n����� ������: "; cin >> size_width[change1]; break;//������
			case 3: cout << "������� ������: " << size_long[change1]; cout << "\n����� ������: "; cin >> size_long[change1]; break; //�����
			case 4: cout << "������� ������: " << size_high[change1]; cout << "\n����� ������: "; cin >> size_high[change1]; break; //������
			case 5: cout << "������� ������: " << wheels[change1]; cout << "\n����� ������: "; cin >> wheels[change1]; break; //�����
			case 6: cout << "������� ������: " << doors[change1]; cout << "\n����� ������: "; cin >> doors[change1]; break; //�����
			case 7: cout << "������� ������: " << name[change1]; cout << "\n����� ������: "; cin >> name[change1]; break; //���
			case 8: cout << "������� ������: " << colour[change1]; cout << "\n����� ������: "; cin >> colour[change1]; break; //����
			case 9: cout << "������� ������: " << transmission[change1]; cout << "\n����� ������: "; cin >> transmission[change1]; break;//������� �������
			case 10: cout << "������� ������: " << year[change1]; cout << "\n����� ������: "; cin >> year[change1]; break;//��� �������
			case 11: cout << "������� ������: " << engine_capacity[change1]; cout << "\n����� ������: "; cin >> engine_capacity[change1]; break;//����� ���������
			default: break;
			}
		}
		//��������
		else if (option == 4)
		{
		option_arraysize_del:
			cout << "\n�� ������� �������� ������.\n����������, �������� ������, ������ ������� ������: �� 0 �� " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize_del;
			name[option2] = "0";
			speed[option2] = 0;
			doors[option2] = 0;
			wheels[option2] = 0;
			size_width[option2] = 0;
			size_long[option2] = 0;
			size_high[option2] = 0;
			weight[option2] = 0;
			colour[option2] = "0";
			transmission[option2] = "0";
			year[option2] = 0;
			engine_capacity[option2] = 0;
		}
	}
	delete speed;
	delete weight;
	delete size_width;
	delete size_long;
	delete size_high;
	delete wheels;
	delete doors;
	delete year;
	delete engine_capacity;
}
