#pragma once
#include <iostream>

typedef char FlagType;

//��� ������ ����
struct Stack;

//�������� �����
Stack *createStack();

//���������� �������� � ����
void push(Stack *&stack, FlagType value);

//�������� ����� �� �������
bool isEmpty(Stack *&stack);

//������ ��������� �������� �����
FlagType peek(Stack *&stack);

//�������� �������� �� �����
void pop(Stack *&stack);

//�������� �����
void deleteStack(Stack *&stack);

//���������� �����
std::string stackRemainder(Stack *&stack);