#include <stdio.h> 
#include <stdlib.h> 
int main()
{
 int H,M; 
 printf("�п�J�{�b�ɶ�(24�p�ɨ�):"); 
 scanf("%d%d",&H,&M);
 int HtoM=H*60;
  
 if(HtoM+M>=450&&HtoM+M<=1020) 
 {
   printf("�{�b�O�W�Үɶ�");
 }
 else
 {
  printf("�{�b�O�U�Үɶ�");
 }
 system("PAUSE");
 return 0;
}
