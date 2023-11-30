#include <stdio.h>
#include <stdlib.h>

struct student{
         int     ID;
         char    name[100];
         float  grade;
  };
  
int main(int argc, char *argv[])
{
    //instance 선언
    struct student s1 = {12345678,"Bboong",2.67}; 
    
    //다른 값 변경
    s1.ID = 87654321;
    s1.name[0] = 'K';
    s1.name[1] = 'k';
    s1.grade = 2.16;
    
    printf("ID: %d\n",s1.ID); 
    printf("name: %s\n",s1.name);
    printf("grade: %f\n",s1.grade);
 
  system("PAUSE");	
  return 0;
}
