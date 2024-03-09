//Name: Kelly Shirley
//Date: 3/8/2024

#include <stdio.h>

int totalSort = 0;
int arrSort[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

typedef struct element{
    int data;
    int numswaps;
} element;

void bubbleSwap(struct element *arr, int i, int j)
{
    struct element temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    totalSort = totalSort+1;
    arr[j].numswaps = arr[j].numswaps + 1;
    arr[i].numswaps = arr[i].numswaps + 1;
}

void bubbleSort(struct element *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j].data > arr[j + 1].data)
                bubbleSwap(arr, j, j + 1);
}

void selectionSwap(struct element *xp, struct element *yp) 
{ 
    struct element temp = *xp; 
    *xp = *yp; 
    *yp = temp;
    totalSort = totalSort + 1;
    yp->numswaps = yp->numswaps + 1;
    xp->numswaps = xp->numswaps + 1;
} 

void selectionSort(struct element *arr, int n) 
{ 
    int i, j, min_idx; 

    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j].data < arr[min_idx].data) 
            min_idx = j; 
           if(min_idx != i) 
            selectionSwap(&arr[min_idx], &arr[i]); 
    } 
} 

int main()
{

    struct element bubble1Element1 = {97, 0};
    struct element bubble1Element2 = {16, 0};
    struct element bubble1Element3 = {45, 0};
    struct element bubble1Element4 = {63, 0};
    struct element bubble1Element5 = {13, 0};
    struct element bubble1Element6 = {22, 0};
    struct element bubble1Element7 = {7, 0};
    struct element bubble1Element8 = {58, 0};
    struct element bubble1Element9 = {72, 0};

    struct element bubble2Element1 = {90, 0};
    struct element bubble2Element2 = {80, 0};
    struct element bubble2Element3 = {70, 0};
    struct element bubble2Element4 = {60, 0};
    struct element bubble2Element5 = {50, 0};
    struct element bubble2Element6 = {40, 0};
    struct element bubble2Element7 = {30, 0};
    struct element bubble2Element8 = {20, 0};
    struct element bubble2Element9 = {10, 0};

    struct element selection1Element1 = {97, 0};
    struct element selection1Element2 = {16, 0};
    struct element selection1Element3 = {45, 0};
    struct element selection1Element4 = {63, 0};
    struct element selection1Element5 = {13, 0};
    struct element selection1Element6 = {22, 0};
    struct element selection1Element7 = {7, 0};
    struct element selection1Element8 = {58, 0};
    struct element selection1Element9 = {72, 0};

    struct element selection2Element1 = {90, 0};
    struct element selection2Element2 = {80, 0};
    struct element selection2Element3 = {70, 0};
    struct element selection2Element4 = {60, 0};
    struct element selection2Element5 = {50, 0};
    struct element selection2Element6 = {40, 0};
    struct element selection2Element7 = {30, 0};
    struct element selection2Element8 = {20, 0};
    struct element selection2Element9 = {10, 0};


    struct element bubble1Elements[] = {bubble1Element1, bubble1Element2, bubble1Element3, bubble1Element4, bubble1Element5, bubble1Element6, bubble1Element7, bubble1Element8, bubble1Element9};

  struct element bubble2Elements[] = {bubble2Element1, bubble2Element2, bubble2Element3, bubble2Element4, bubble2Element5, bubble2Element6, bubble2Element7, bubble2Element8, bubble2Element9};

  struct element selection1Elements[] = {selection1Element1, selection1Element2, selection1Element3, selection1Element4, selection1Element5, selection1Element6,selection1Element7, selection1Element8, selection1Element9};

  struct element selection2Elements[] = {selection2Element1,selection2Element2,selection2Element3, selection2Element4, selection2Element5,selection2Element6, selection2Element7, selection2Element8, selection2Element9};
  
  
    
    int N1 = 9;
    bubbleSort(bubble1Elements, 9);
    printf("Sorted array: ");
    printf("\n");
    for (int i = 0; i < 9; i++)
      {
        printf("%d: ", bubble1Elements[i].data);
        printf("%d ", bubble1Elements[i].numswaps);
        printf("\n");
      }
    printf("Number of times swapped: %d", totalSort);

  totalSort = 0;
  printf("\n");
  printf("\n");

  bubbleSort(bubble2Elements, 9);
  printf("Sorted array: ");
  printf("\n");
  for (int i = 0; i < 9; i++)
    {
      printf("%d: ", bubble2Elements[i].data);
      printf("%d ", bubble2Elements[i].numswaps);
      printf("\n");
    }
  printf("Number of times swapped: %d", totalSort);

  totalSort = 0;
  printf("\n");
  printf("\n");

  selectionSort(selection1Elements, 9);
  printf("Sorted array: ");
  printf("\n");
  for (int i = 0; i < 9; i++)
    {
      printf("%d: ", selection1Elements[i].data);
      printf("%d ", selection1Elements[i].numswaps);
      printf("\n");
    }
  printf("Number of times swapped: %d", totalSort);

  totalSort = 0;
  printf("\n");
  printf("\n");

  selectionSort(selection2Elements, 9);
  printf("Sorted array: ");
  printf("\n");
  for (int i = 0; i < 9; i++)
    {
      printf("%d: ", selection2Elements[i].data);
      printf("%d ", selection2Elements[i].numswaps);
      printf("\n");
    }
  printf("Number of times swapped: %d", totalSort);

  
    
  
  return 0;
}