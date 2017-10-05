#include <stdio.h>
#include <string.h>
int skrtlen(char*skr);
char* skrtcpy(char*dest, char*source);
char* skrtmeow(char*dest,char*source);
int skrtcamp(char*s1, char*s2);
char* skrtcar(char*s, char c);
int main(){
  char s1[] = "ragers";
  char s2[] = "steroid";
  char s3[] = "balls";
  char s4[] = "ragers";
  printf("Testing strlen(s2):\n[Standard]:%lu\n[Mine]:%d\n", strlen(s2), skrtlen(s2));  
  printf("Testing strcpy(s2,s1):\n[Standard]:|%s|\n[Mine]:|%s|\n", strcpy(s2,s1),skrtcpy(s2,s1));
  char s5[] = "steroid";
  printf("Testing strcat(s4,s5):\n[Standard]:|%s|\n[Mine]:|%s|\n", strcat(s1,s5), strcat(s4,s5));
  char x[]="a";
  char y[]="b";
  printf("Testing strcmp(x,y):\n[Standard]:|%d|\n[Mine]:|%d|\n", strcmp(x,y), skrtcamp(x,y));
  char z[]="lolipop";
  char a ='p';
  printf("Testing strchr(z,a):\n[Standard]:|%s|\n[Mine]:|%s|\n",strchr(z,a),skrtcar(z,a));
  return 7;
}
int skrtlen(char*skr){
  int i =0;
  while (skr[i]){
      i++;
  }
  return i;
}
char* skrtcpy(char*dest, char*source){
  int i=0;
  while(source[i]){
    dest[i] = source[i];
    i++;
  }
  dest[i]=0;
  return dest;    
}

char* skrtmeow(char*dest,char*source){
  int len = strlen(dest);
  int i = 0;
  while(source[i]){
    dest[len+i] = source[i];
  }
  dest[len+i]=0;
  return dest;
}
int skrtcamp(char *s1, char* s2){
  int i = 0;
  while (s1[i] || s2[i]){
    if (s1[i]==s2[i]){
      i++;
    }
    else{
      return s1[i]-s2[i];
    }
  }
  return s1[i]-s2[i];
}
char* skrtcar(char*s,char c){
  int i =0;
  while (s[i]){
    if(s[i]==c){
      return s+i;
    }
    i++;
  }
  return s+i; 
}
