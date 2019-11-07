#include<stdio.h>
int Max(int a[], int n) {
int sum=0,max=0,i++;
for(i=0;i<n;i++) {
sum+=a[i];
}
if(sum<0){
sum=0;
}
else if(sum>max){
max=sum; 
}
return sum;

int main() {
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("%d",Max((a,n));
