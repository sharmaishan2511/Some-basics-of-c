#include <stdio.h>

struct employee{
    int emp_id;
    char emp_name[20];
    int emp_gross_pay;
    int emp_loan_choice;
    union {
        int housing_loan;
        int education_loan;
        int personal_loan;
    };
};

int main() {
    struct employee s;

    scanf("%d\n",&s.emp_id);
    scanf("%s\n",s.emp_name);
    scanf("%d\n",&s.emp_gross_pay);
    scanf("%d",&s.emp_loan_choice);

    if(s.emp_loan_choice==1){
        printf("%d\n",s.emp_id);
        printf("%s\n",s.emp_name);
        printf("%d\n",s.emp_gross_pay);
        printf("Housing loan\n");
        s.housing_loan = (s.emp_gross_pay*25*10)/100;
        printf("%d",s.housing_loan);
    }else if(s.emp_loan_choice==2){
        printf("%d\n",s.emp_id);
        printf("%s\n",s.emp_name);
        printf("%d\n",s.emp_gross_pay);
        printf("Education loan\n");
        s.education_loan = (s.emp_gross_pay*15*10)/100;
        printf("%d",s.education_loan);
    }else if(s.emp_loan_choice==3){
        printf("%d\n",s.emp_id);
        printf("%s\n",s.emp_name);
        printf("%d\n",s.emp_gross_pay);
        printf("Personal loan\n");
        s.personal_loan = (s.emp_gross_pay*10*10)/100;
        printf("%d",s.personal_loan);
    }else{
        printf("Invalid input");
    }

    return 0;
}
