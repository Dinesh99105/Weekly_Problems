#include <stdio.h>

int main() {
 int x1, v1, x2, v2;
 int dist;
  printf(" for first Kangaroo /n");
  printf("initial dist ");
  scanf("%d",&x1);
  printf("distance per jump(velocity):");
  scanf("%d",&v1);
  printf(" for second Kangaroo /n ");
  printf("initial dist: ");
  scanf("%d",&x2);
  printf("distance per jump(velocity)");
  scanf("%d",&v2);
	

if((x1 - x2) % (v2 - v1) == 0){
printf("yes");
}else
printf("no");

return 0;
}
