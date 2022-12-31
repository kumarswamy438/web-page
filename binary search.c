#include<stdio.h>
int main()
{
    int a[25],searchelement,i,j,size,high,low,mid,res=0,temp;
printf("enter the size of array:");
scanf("%d",&size);
//reading array logic
for(i=0;i<size;i++){
    printf("enter the %d element:",(i+1));
    scanf("%d",&a[i]);
    
}
printf("enter the search element:");
scanf("%d",&searchelement);
printf("printing array before sorting\n");
for ( i = 0; i < size; i++)
{
    printf("%d ",a[i]);
}
//bubble sorting logic
for(i=0;i<size;i++){
    for(j=0;j<size-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  
}
printf("\n");
  //printing array after sorting
  printf("printing array before sorting\n");
    for ( i = 0; i < size; i++)
{
    printf("%d ",a[i]);
}
//binary search logic
high=size-1;
low=0;

while(low<=high){
mid=(high+low)/2;
   if(searchelement==a[mid]){
      res+=1;
      break;
      

}
else if(searchelement>a[mid]){
   low=mid+1;
   

}
else
{
    high=mid-1;
}
if(res==1){
  printf("the element is present in the list");

}
if(res==0){
printf("the element is not  present in the list");

}
}











}
