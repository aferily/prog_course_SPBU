#pragma once
#include <vector>

//������ �������
struct Vertex;

//��������������� ������ ������
struct List;

//�������� ������ ������
List *createList();

//���������� ����� ������� � ��������������� ������
void add(List *&list, const Vertex &newVertexData);

//������� �������� ������� ������
int pop(List *&list);

//��������� ������� ������� � ������, ���� ������� � ��� ��� ���������� � distanceToTree ����������� (true), ����� (false)
bool isBelongWithLongDistance(List *&list, const Vertex sourceVertex);

//�������� ������
void removeList(List *&list);