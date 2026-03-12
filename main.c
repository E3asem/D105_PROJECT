#include <stdio.h>
#define DEBUG

////comment 2 12-3-2026


#define code1   1
#define code2   0

///comment version 3 
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
