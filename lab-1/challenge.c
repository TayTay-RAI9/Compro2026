#include <stdio.h>
int main() {
 printf("+---------------+--------+---------+$\n");
 printf("%-16s","| Name");
 printf("| Score1 | Score2  |$\n");
 printf("+---------------+--------+---------+$\n");
 printf("%8s","| Alice         |     85 |      90 |$\n");
 printf("%8s","| Bob           |     78 |      82 |$\n");
 printf("%8s","| Charlie       |     82 |      88 |$\n");
 printf("+----------------+--------+--------+$\n");
 return 0;

}