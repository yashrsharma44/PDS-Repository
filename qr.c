#include <stdio.h>
int main() {
int x = 0, n;
scanf("%d", &n);
if (n > 8) {
if (n < 9) x = 1;
}
else {
if (n > 4)
if (n < 6) x = 2;
else x = 3;
else
if (n > 2) x = 4;
else x = 5;
}
printf("%d\n", x);
return 0;
}