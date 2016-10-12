#include <stdio.h>
int main () {
  int weighting, counter = 0, grade = 0, total = 0, average = 0, end = 0;
  while(end != 1) {
    printf("Enter grade from 0 to 100 :\n");
    scanf("%d", &grade);
    printf("Enter weighting of the course :\n");
    scanf("%d", &weighting);
    printf("Do you want to end now and see the result? Enter 1 as yes, 0 to continue :\n");
    scanf("%d", &end);
    //Calculation
    total = total + grade * weighting;
                counter = counter + weighting;
  }

  if (counter != 0) {
        average = total / counter;
        printf("\n\nYour average is %d\n",average);
        }
  else {
    printf("weighting cannot be zero!");
    return 0;
  }

  //Average Score
  // else if is not a function, it is a minimal coding method combining "else" and "if" !
  if (average >= 90)
    printf("Grade: A\n");
  else if (grade >= 80 && grade < 90)
    printf("Grade: B\n");
  else if (grade >= 70 && grade < 80)
    printf("Grade: C\n");
  else if (grade >= 60 && grade < 70)
    printf("Grade: D\n");
  else
    printf("Grade: F\n");
}
