#include <stdio.h>
#include <stdlib.h>


#define LARGE_NUM 0xfffff0

struct People{
    int age;
    char* name;
};

struct People globalPeople;
int globalInt = 1;
double globalDouble = 2.4;
char globalArray[6] = "China";

int timeSuck()
{
  int x = 0;
  int a;
  for (a = 0; a < LARGE_NUM; a++)
    x++;
  return x;
}


int implicit(int * x, int size)
{
  int loopSize;
  int i;
	int retVal;

  loopSize = timeSuck();

  printf("Loop Size is %d\n", loopSize);
  
  for (i = 0; i < loopSize; i++)
    {
      x[i%size] = i;
      //printf("Value of x is %d", x[i%size]);
    }
 
}

void explicit(int * x)
{
  int a, b, c;
  double d, e, f;
  
  int writeContainerI;
  double writeContainerD;
    
  int i;

  a = 1;
  b = 2;
  c = 3;
  d = 4.0;
  e = 5.0;
  f = 6.0;


  for (i = 0; i < 4; i++)
    {
      a = b + c + timeSuck();
      writeContainerI = a + c;
      
      f = d + e;
      writeContainerD = f + e;
    }

  *x = f;

}

void mainLocal(int *var)
{
  int i, j;
  long dummy;
  for(i=0; i<0xff; i++){
//	for(j=0; j<0xff; j++){
		dummy=timeSuck();
		*var = *var + (dummy%2);
//	}
  }
}


int main()
{
	int * impInput = malloc(sizeof(int)*100);
	int exInput = 99;
	int mlInput = 0;
	int *ml_ptr = &mlInput;
	int i;
	for (i = 0; i < 0xff; i++)
		{
			implicit(impInput, 100);
			explicit(&exInput);
		}
	mainLocal(ml_ptr);
	printf("Final value is %d\n", impInput[exInput%5]);

	return 0;
}
