# include<stdio.h>
int indinsertion(int arr[],int ele,int pos,int *size){
  if(pos<=0||pos>*size+1){
  printf("invalid pos\n");
}
else{
for(int i=*size;i>=pos;i--)//inseration
  arr[i]=arr[i-1];
arr[pos-1]=ele;
}
(*size)++;
}

//deletion 
void delete(int arr[],int pos,int *size){
  if(pos<=0||pos>*size+1){
  printf("invalid position\n");
}
else{
for(int i=pos-1;i<*size-1;i++){
  arr[i]=arr[i+1];
}
(*size)--;
}
}
//linear search
int search(int key,int arr[],int size){
  for(int i=0;i<size;i++)
  if(arr[i]==key){
  return i;
}
return -1;
}
//traversal
void display(int arr[],int size){
for (int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}

int main(){
int arr[100];
int size,ele,pos,key,choice;
printf("enter size of array:");
scanf("%d",&size);
printf("enter elements:");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
while(1){
printf("Menu\n");
printf("1 insertion\n");
printf("2 deletion\n");
printf("3 searching\n");
printf("4 traversal\n");
printf("invalid\n");
printf("choice");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("\nenter the element to insert:");//inseration
scanf("%d",&ele);
printf("enter postion which you want insert the data:");
scanf("%d",&pos); 
indinsertion(arr,ele,pos,&size);
printf("\narray after insertion");
display(arr,size);
  break;
case 2:printf("\nenter postion which you want delete the data:");//deletion
scanf("%d",&pos); 
delete(arr,pos,&size);
printf("Array after deletion:\n");
display(arr, size);
break;
case 3:printf("\nenter number to search");//search
scanf("%d",&key);
int index = search(key, arr, size);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    break;
case 4:printf("original array:");
 display(arr,size);
 break;
case 5:printf("exist\n");
return 1;
default:
printf("invalid!Try again");
break;
}

}
return 0;
}
