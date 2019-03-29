#include <stdio.h> 
#include <stdlib.h> 
int main()
{
 int H,M; 
 printf("請輸入現在時間(24小時制):"); 
 scanf("%d%d",&H,&M);
 int HtoM=H*60;
  
 if(HtoM+M>=450&&HtoM+M<=1020) 
 {
   printf("現在是上課時間");
 }
 else
 {
  printf("現在是下課時間");
 }
 system("PAUSE");
 return 0;
}
