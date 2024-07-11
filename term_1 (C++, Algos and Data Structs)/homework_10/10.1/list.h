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

//����������� ������ ��������� ����������������� �������
Vertex read(List *&list);

//��������� ������ � ������� �� ������ ������
void blockRoadToCity(std::vector<List*> &adjacencyList, const int city);

//�������� ������
void removeList(List *&list);