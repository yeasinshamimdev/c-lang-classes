#include <stdio.h>
int main() {
  int tk;
  scanf("%d", &tk);

  if(tk >= 100)
  {
    printf("I will by a burger by %d taka", tk);
  } 
  else if(tk >= 50)
  {
    printf("I will by a fuska! by %d taka", tk);
  } 
  else
  {
    printf("Noting to buy by %d taka", tk);
  }

  return 0;
}