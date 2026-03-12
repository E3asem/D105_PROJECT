#include <stdio.h>
#define DEBUG
#define code1   0
#define code2   1

#if code1 == 1
int main() {

#ifdef DEBUG
printf("Debug Mode");
#endif


}

#elif code2 == 1
int main() {

printf("hello");

}
#endif // code2
