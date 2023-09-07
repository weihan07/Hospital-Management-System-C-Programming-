#include<stdio.h>
#include<string.h>
#include<conio.h>

struct hospitalSystem
{
    char name[30]; //Write
    int age;
    char symptom[30];
    char address[30];
    char gender[10];
    char phoneNo[15];
    char beneficiaryNo[15];
    char date[20];
    float BMI , height;
    int weight;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read(); //read data
void write();//write data
void add(); //add data
void view(); //view data
void update(); //update
void del(); //delete data
void calculateBMI(float height,int weight);//BMI data
void show();

void main()
{
    read();
    int c,i,q;

    while(c!=6)
    {
        printf("Hospital Management System\n");
        printf("\n\n1.Add Patients Details");
        printf("\n2.View Patients Details:");
        printf("\n3.Update Patients Details");
        printf("\n4.Delete Patients Details");
        printf("\n5.Exit");
        printf("\n\nChoose the option above (Write the number) : ");
        scanf("%d",&c);//option
        fflush(stdin);

        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//update
        {
            system("cls");
            update();
        }
        else if(c==4)//delete
        {
            system("cls");
            del();
        }
        else if(c==5)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input, please try again");
            getch();
        }
        printf("\n\n");
    }
}
void add()
{
    system("cls");
    printf("\n\n");
    printf("Data already in system = %d\n\n",num);//how many inputs
    printf("How many new entry? =");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(x[i].name);

        fflush(stdin);
        printf("Enter age = ");
        scanf("%d",&x[i].age);

        fflush(stdin);
        printf("Enter symptom = ");
        gets(x[i].symptom);

        fflush(stdin);
        printf("Enter address = ");
        gets(x[i].address);

        fflush(stdin);
        printf("Enter gender = ");
        gets(x[i].gender);

        fflush(stdin);
        printf("Enter phone number = ");
        gets(x[i].phoneNo);

        fflush(stdin);
        printf("Enter beneficiary phone number = ");
        gets(x[i].beneficiaryNo);

        fflush(stdin);
        printf("Enter date = ");//exp: 23 June 2021
        gets(x[i].date);

        fflush(stdin);
        printf("Enter height = ");
        scanf("%f", &x[i].height);

        fflush(stdin);
        printf("Enter weight = ");
        scanf("%d", &x[i].weight);

        float height = x[i].height, BMI;
        int weight = x[i].weight;

        fflush(stdin);
        x[i].BMI = (weight) / (height*height);

        printf("\nBMI is %.2f kg/m^2", x[i].BMI);

        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }

}
void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");

        printf("Patient Number = %d\n",i);

        printf("Name = ");
        puts(x[i].name);

        printf("Age = %d",x[i].age);

        printf("\r\nSymptom = ");
        puts(x[i].symptom);

        printf("Address = ");
        puts(x[i].address);

        printf("Gender = ");
        puts(x[i].gender);

        printf("Phone Number = ");
        puts(x[i].phoneNo);

        printf("Beneficiary Phone Number = ");
        puts(x[i].beneficiaryNo);

        printf("Date = ");
        puts(x[i].date);

        printf("Height = %.2f",x[i].height);

        printf("\nWeight = %d",x[i].weight);

        float height = x[i].height, BMI;
        int weight = x[i].weight;
        fflush(stdin);
        x[i].BMI = (weight) / (height*height);

        printf("\nBMI = %.2f",x[i].BMI);

        printf("\n\n");
    }

}
void update()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to update?\n");
    printf("\n\n1.Name");
    printf("\n2.Age");
    printf("\n3.Symptom");
    printf("\n4.Address");
    printf("\n5.Gender");
    printf("\n6.Phone Number");
    printf("\n7.Beneficiary Phone Number");
    printf("\n8.Date");
    printf("\n9.Height");
    printf("\n10.Weight");
    printf("\n\nChoose the option above (1-10) : ");
    scanf("%d",&q);//option
    if(q<=10)
    {
        printf("Enter the number of the patient in the record = ");
        scanf("%d",&p);//patient number in the list
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter new patients name = ");
                gets(x[p].name);
            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Age = ");
                scanf("%d",&x[p].age);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Symptom = ");
                gets(x[p].symptom);
            }
            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Address = ");
                gets(x[p].address);
            }
            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Gender = ");
                gets(x[p].gender);
            }
            else if(q==6)
            {
                fflush(stdin);
                printf("Enter the new Phone Number = ");
                gets(x[p].phoneNo);
            }
            else if(q==7)
            {
                fflush(stdin);
                printf("Enter the new Beneficiary phone number = ");
                gets(x[p].beneficiaryNo);
            }
            else if(q==8)
            {
                fflush(stdin);
                printf("Enter the new Date(exp:23 June 2021) = ");//exp: 23 June 2021
                gets(x[p].date);
            }
            else if(q==9)
            {
                fflush(stdin);
                printf("Enter the new height = ");
                scanf("%f",&x[p].height);
            }
            else if(q==10)
            {
                fflush(stdin);
                printf("Enter the new weight = ");
                scanf("%d",&x[p].weight);
            }
        }
        else
        {
            printf("\n\nInvalid Number \nTry Again.\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again\n\n");
    }

}
void del()
{
    int f,h;
    printf("Enter the number of the patient that you want to delete base on the list in the record(0-%d) =",num);
    scanf("%d",&f);
    if(f<num)
    {
        printf("Choose the option below:\n");
        printf("1.Remove the whole record");
        printf("\n2.Remove Name");
        printf("\n3.Remove Age");
        printf("\n4.Remove Symptom");
        printf("\n5.Remove Address");
        printf("\n6.Remove Gender");
        printf("\n7.Remove Phone Number");
        printf("\n8.Remove Beneficiary Phone Number");
        printf("\n9.Remove Date");
        printf("\n10.Remove Height");
        printf("\n11.Remove Weight");
        printf("\nChoose the option(1-11):");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                x[f].age=x[f+1].age;
                strcpy(x[f].symptom,x[f+1].symptom);
                strcpy(x[f].address,x[f+1].address);
                strcpy(x[f].gender,x[f+1].gender);
                strcpy(x[f].phoneNo,x[f+1].phoneNo);
                strcpy(x[f].beneficiaryNo,x[f+1].beneficiaryNo);
                strcpy(x[f].date,x[f+1].date);
                x[f].height=x[f+1].height;
                x[f].weight=x[f+1].weight;
                x[f].BMI=x[f+1].BMI;

                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            x[f].age=0;
        }
        else if(h==4)
        {
            strcpy(x[f].symptom,"Cleared");
        }
        else if(h==5)
        {
            strcpy(x[f].address,"Cleared");
        }
        else if(h==6)
        {
            strcpy(x[f].gender,"Cleared");
        }
        else if(h==7)
        {
            strcpy(x[f].phoneNo,"Cleared");
        }
        else if(h==8)
        {
            strcpy(x[f].beneficiaryNo,"Cleared");
        }
        else if(h==9)
        {
            strcpy(x[f].date,"Cleared");
        }
        else if(h==10)
        {
            x[f].height=0;
        }
        else if(h==11)
        {
            x[f].weight=0;
        }

    }
    else
        printf("\n\nInvalid Number\n");

}
void calculateBMI(float height,int weight)
{
    float BMI;

    //BMI = (weight) / (height*height);
    BMI = (weight) / (height*height);

    printf("\nBMI is %.2f kg/m^2", x[i].BMI);
    return;
}
void read()
{
    FILE *fp = fopen("patientbook.txt","r");
    if(fp == NULL)
    {
        fp = fopen("patientbook.txt","w");
        fclose(fp);
        printf("File does not exist\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct hospitalSystem),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patientbook.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct hospitalSystem),num, fp);

    fclose(fp);
}
