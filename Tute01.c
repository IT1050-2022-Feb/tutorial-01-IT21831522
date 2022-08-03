/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

int main() {
  
  int sub,marks,count,sum = 0;
  float avg =0.0;
  
  printf("Enter the marks\n");
  scanf("%d",&sub);

  printf("Enter %d marks\n",sub);
  for (count=1;count <= sub;count++)
    {
      scanf("%d",&marks);
      sum=sum+marks;
      
    }
  avg=sum/sub;
  printf("sum=%d\n average= %0.2f\n",sum,avg);
  
  return 0; 
}

