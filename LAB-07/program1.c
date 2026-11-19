#include <stdio.h>
struct sample {
int sampleID;
char sampleType[30];
float initialMass;
float finalMass;
float percentageChange;
};
int main() {
struct sample s[100]; // Fixed: 'sample' should be lowercase
int n, i;
printf("\nEnter number of samples : ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("\nEnter details of sample %d\n", i + 1);
printf("enter sample ID: ");
scanf("%d", &s[i].sampleID);
printf("enter sample type: "); // Fixed prompt text
scanf("%29s", s[i].sampleType);
printf("enter initial mass: ");
scanf("%f", &s[i].initialMass);
printf("enter final mass: ");
scanf("%f", &s[i].finalMass);
// Fixed: changed '.' to '-' for subtraction
s[i].percentageChange = ((s[i].finalMass - s[i].initialMass) / s[i].initialMass) *
100;
}
printf("\n--- Bioengineering Sample Report ---\n");
for (i = 0; i < n; i++) {
printf("\nSample ID: %d", s[i].sampleID);
printf("\nSample Type: %s", s[i].sampleType);
printf("\ninitialMass: %.2f", s[i].initialMass);
printf("\nfinalMass: %.2f", s[i].finalMass);
printf("\npercentage Mass Change: %.2f%%\n", s[i].percentageChange);
}
return 0; // Fixed: changed comma to semicolon
}
