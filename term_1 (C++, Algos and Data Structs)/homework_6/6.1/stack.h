#pragma once

typedef double FlagType;

//��������� ������ ����
struct Stack;

//�������� �����
Stack *createStack();

//���������� �������� � ����
void push(Stack *&stack, FlagType value);

//�������� ����� �� �������
bool isEmpty(Stack *&stack);

//�������� �������� �� �����
FlagType pop(Stack *&stack, bool &isEmptyStack);

//�������� �����
void deleteStack(Stack *&stack);

//������ �����
void printStack(Stack *&stack);