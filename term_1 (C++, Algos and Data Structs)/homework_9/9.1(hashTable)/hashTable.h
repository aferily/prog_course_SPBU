#pragma once
#include <iostream>
#include <vector>
#include "list.h"

//����������� � ��������� � ������ ����� ������
void hashing(std::vector<List*> &array, const LineDate &sourceLine, double &fillFactor);

//��������������� �����
void rehashing(std::vector<List*> &array, double &fillFactor);

//������ ����� (� ��������) � �������� �������
void printArray(std::vector<List*> &array);

//�������� �������
void deleteArray(std::vector<List*> &array);