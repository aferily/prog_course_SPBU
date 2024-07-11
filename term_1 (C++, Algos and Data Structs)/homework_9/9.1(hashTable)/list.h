#pragma once
#include <iostream>

//������ ������ (������ � �� �������)
struct LineDate;

//��������� ������ ������
struct List;

//�������� ������ ������
List *createList();

//����������������� ������� ������������� ������ (true) ��� ��������� ������ � ������ (� �������� = 1), ���� ������ � ��� ����������� (false) 
bool findAndAdd(List *&list, const LineDate newLine);

//������� ������ �������� ������ �� ������
const LineDate pop(List *&list);

//������ ������
void printList(List *&list, int &currentLenght);

//�������� ������
void deleteList(List *&list);
