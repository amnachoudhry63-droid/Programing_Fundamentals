
#include <stdio.h>

int main() {
    int num, last_no, rest_of_nos, doubled;

    printf("Enter a number: ");
    scanf("%d", &num);

    // ----- Step 1 -----
    last_no= num % 10;
     rest_of_nos= num / 10;
    doubled =last_no * 2;
    num =  rest_of_nos - doubled;
    printf("Result: %d\n", num);

    if (num == 0 || num == 7 || num == -7) {
           printf(" Number is divisible by 7 \n");
    } else {
        // ----- Step 2 -----
        last_no= num % 10;
         rest_of_nos = num / 10;
        doubled = last_no* 2;
        num =  rest_of_nos - doubled;
        printf("Result: %d\n", num);

        if (num == 0 || num == 7 || num == -7) {
               printf(" Number is divisible by 7 \n");
        } else {
            // ----- Step 3 -----
          last_no= num % 10;
             rest_of_nos = num / 10;
            doubled = last_no * 2;
            num =  rest_of_nos - doubled;
          printf("Result: %d\n", num);

            if (num == 0 || num == 7 || num == -7) {
                 printf(" Number is divisible by 7 \n");
            } else {
                // ----- Step 4 -----
                last_no = num % 10;
                rest_of_nos = num / 10;
                doubled =last_no * 2;
                num =  rest_of_nos- doubled;
            printf("Result: %d\n", num);

                if (num == 0 || num == 7 || num == -7) {
                    printf(" Number is divisible by 7 \n");
                } else {
                    // ----- Step 5 -----
                    last_no = num % 10;
                     rest_of_nos = num / 10;
                    doubled = last_no * 2;
                    num = rest_of_nos- doubled;
                printf("Result: %d\n", num);

                    if (num == 0 || num == 7 || num == -7) {
                           printf(" Number is divisible by 7 \n");
                    } else {
                        printf(" Number is NOT divisible by 7 (stopped after 5 steps)\n");
                    }
                }
            }
        }
    }

    return 0;
}
