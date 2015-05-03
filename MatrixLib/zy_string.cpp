#include <stdio.h>
#include <cstring>

int kmp(const char* w, const char* s)
{
  int i=0;
  int m=0;
  
}

void test1(char* s1)
  {
  s1="abc";
  printf("%d\n",strlen(s1));
  printf("%d\n",sizeof(s1));
  }
  


int main(int argc,char** argv)
{
  char* s1;
  s1=new char[100];
  printf("%d\n",strlen(s1));
  printf("%d\n",sizeof(s1));
  test1(s1);
  
  printf("%d\n",strlen(s1));
  printf("%d\n",sizeof(s1));
  
  char s2[100]="test123456";
  printf("%d\n",strlen(s2));
  printf("%d\n",sizeof(s2));
  
}

