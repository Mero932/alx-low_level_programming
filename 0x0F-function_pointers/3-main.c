int main(int argc, char *argv[]) 
{
if (argc != 4) 
{
printf("Usage: ./arithmetic <num1> <operator> <num2>\n");
return (1);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
char operator = argv[2][0];
int result;
if (operator == '+') 
{
result = num1 + num2;
} 
else if (operator == '-') 
{
result = num1 - num2;
}
else if (operator == '*') 
{
result = num1 * num2;
} 
else 
{
printf("Invalid operator\n");
return (1);
}
printf("Result: %d\n", result);
return (0);
}
