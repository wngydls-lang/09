#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //��ó���� SIZE �� 5�� �ٲ� //Mecro 

int main(int argc, char *argv[])
{
  int i, average;
  int sum;
  int grade[SIZE];
  sum = 0;
  
  
  for(i=0; i<SIZE; i++)
  {
           printf("�л� ������ �Է��ϼ���.\n");
           scanf("%d", &grade[i]);
           sum += grade[i];
  }
  average = sum / SIZE;
  printf("���� ���: %d\n", average);
    
  system("PAUSE");	
  return 0;
}
