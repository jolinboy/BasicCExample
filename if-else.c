#include <stdio.h>
int main(void) {
int a, b, c;
for( ; ; ) {
if(3*a+b-2*c==24) {
printf("A:%d, B:%d, C:%d", a, b, c);
break; }
a++;
b++;
c++; }
}
