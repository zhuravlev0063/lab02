#include <iostream>
// ������� ������: using namespace std;

int main() {
    std::string name; // ���������� ��� �������� ����� �����������

    // ����������� ��� ������������
    std::cout << "������� ���� ���: "; // ������� ������ �� ���� �����
    std::cin >> name; // ��������� ��� ������������ �� �����

    // ������� �������������� ��������� � ������ ������������
    std::cout << "Hello world from " << name << std::endl; // ���������� endl ��� �������� �� ����� ������

    return 0; // ��������� ���������
}