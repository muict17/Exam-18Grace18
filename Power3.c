#include<stdio.h>
int main() {
int n;
scanf("%d",&n);
while(n%3==0) {
n/=3;
}
if(n==1) {
printf("true");
}
else {
printf("false");
}
return 0;
}
