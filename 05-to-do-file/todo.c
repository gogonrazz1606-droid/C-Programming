#include <stdio.h>
#include <string.h>

char tasks[10][50];
int count=0;

void saveTasks(){
    FILE *file = fopen("tasks.txt","w");
    for (int i=0;i<count;i++) {
        fprintf(file,"%s\n",tasks[i]);
    }
    fclose (file);
}

void loadTasks(){
FILE *file =fopen("tasks.txt","r");
if(file==NULL) return;
while (fgets(tasks[count],50,file)){
        tasks[count][strcspn(tasks[count],"\n")]=0;
        count++;
}
        fclose(file);
}

void addTask() {
    if(count>10) {
        printf("Task list is full!\n");
        return;
    }
    printf("Enter new task: ");
    fgets(tasks[count],50,stdin);
    tasks[count][strcspn(tasks[count],"\n")]=0;
    count++;
    saveTasks();
    printf("Task added!\n");
}

void viewTasks(){
    if(count==0){
        printf("No tasks yet!\n");
        return;
    }
    printf("\n===YOUR TASKS===\n");
    for(int i=0;i<count;i++){
        printf("%d.%s\n",i+1, tasks[i]);
    }
}


int main(){
    int choice;
    loadTasks();

    while(1){
        printf("\n===TODO LIST===\n");
        printf("1. Add task\n");
        printf("2. View tasks\n");
        printf("3. Exit\n");
        printf("Choose (1-3): ");
        scanf("%d",&choice);
        getchar();

        switch (choice)        {
        case 1 :
            addTask();
            break;
        case 2 :
            viewTasks();
            break;
        case 3 :
            printf("GOOD BYE!\n");
            return 0;
        
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}