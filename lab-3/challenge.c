#include <stdio.h>
 
int main(){
 
char calcgrade, physgrade, comgrade;
float calculus, physics, compro, calvalue, physvalue, comprovalue; 
 
 
 
printf("Enter your Calculus score:");
scanf("%f", &calculus);
 
printf("Enter your Physics score:");
scanf("%f", &physics);
 
printf("Enter your Compro score:");
scanf("%f", &compro);
 
if (physics < physics){
    physgrade = 'F';
    physvalue = 0.0;
}
else if (physics >= 50 && physics <= 60){
    physgrade = 'D';
    physvalue = 1.0;
}
else if (physics >= 60 && physics <= 70){
    physgrade = 'C';
    physvalue = 2.0;
}
else if (physics >= 70 && physics <= 80){
    physgrade = 'B';
    physvalue = 3.0;
}
else{
    physgrade = 'A';
    physvalue = 4.0;
}
 
if (calculus < calculus){
    calcgrade = 'F';
    calvalue = 0.0;
}
else if (calculus >= 50 && calculus <= 60){
    calcgrade = 'D';
    calvalue = 1.0;
}
else if (calculus >= 60 && calculus <= 70){
    calcgrade = 'C';
    calvalue = 2.0;
}
else if (calculus >= 70 && calculus <= 80){
    calcgrade = 'B';
    calvalue = 3.0;
}
else{
    calcgrade = 'A';
    calvalue = 4.0;
}
 
if (compro < compro){
    comgrade = 'F';
    comprovalue = 0.0;
}
else if (compro >= 50 && compro <= 60){
    comgrade = 'D';
    comprovalue = 1.0;
}
else if (compro >= 60 && compro <= 70){
    comgrade = 'C';
    comprovalue = 2.0;
}
else if (compro >= 70 && compro <= 80){
    comgrade = 'B';
    comprovalue = 3.0;
}
else{
    comgrade = 'A';
    comprovalue = 4.0;
}
 
printf("Subject Score Grade Grade\n--------------------------------------\n");
printf("Cal     %.0f  %c    %.2f\n", calculus, calcgrade, calvalue);
printf("Physics %.0f  %c    %.2f\n", physics, physgrade, physvalue);
printf("ComPro  %.0f  %c    %.2f\n", compro, comgrade, comprovalue);
printf("GPA: %.2f", (calvalue+physvalue+comprovalue)/3.0);
return 0;
}