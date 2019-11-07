#include <stdio.h>
int main() {
int n,r,i,j,c,o;
i=0;
j=1;
c=1;
scanf("%d,&n);
int a[];
while(n>0){
r=n%10;
o+=r*j;
if(c/3==0) {
a[i]=o;
j=1;
c=1;
o=0;
i++;
}
else{
j*=2;
c++;
}
n/=10;
}
if(c!=1){
a[i]=o;
}
for(i=i;i>-1;i--){
printf("%d",a[i]);
}
return 0;
}
