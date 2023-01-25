

// Marks Grading Program in 'C' 
# include<stdio.h>
int main() {
    int mark;
    printf("enter mark: ");
    scanf("%d",&mark);

    if(mark>=90){
         printf("A++ \n");
    }   
    else if(mark>80 && mark<90) {
         printf("A+ \n");
    }
    else if(mark>70 && mark<80) {
         printf("B \n");
    }
    else{
        printf("Pass");
    }
    return 0;
}


