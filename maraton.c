# erik_Movsesyan_maraton.c

// 1. Հայտարարել int տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից։
/* #include <stdio.h>

int main() {
    int user_input;
    printf("Please enter an integer: ");
    scanf("%d", &user_input);  
    printf("You entered: %d\n", user_input);

    return 0;
} */

// 2. Հայտարարել double տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից։
/*
#include <stdio.h>
int main() {
    double user_input; 
    printf("Please enter a double: ");
    scanf("%lf", &user_input); 
    printf("You entered: %lf\n", user_input);

    return 0;
}
*/

// 3. Հայտարարել char տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից։
/*
#include <stdio.h>
int main (){
    char user_input;
    printf("Please enter a char: ");
    scanf(" %c", &user_input);
    printf("You entered: %c\n", user_input);

    return 0;
}
*/
// 4. Գրեl ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երկու ամբողջ թիվ և պահել դրանց գումարը “total” անունով փոփոխականում:
/*  #include <stdio.h>
int main() {
    int x, y, total;
    printf("Write the first integer: ");
    scanf("%d", &x);
    printf("Write the second integer: ");
    scanf("%d", &y);
    total = x + y;
    printf("The sum of %d and %d is %d\n", x, y, total);

    return 0;
}
*/
// 5. Գրեl ծրագիր, որը թույլ կտա օգտվողին մուտքագրել իր տարիքը և պահել այն “age” անունով փոփոխականում։ Էկրանին պետք է տպի հետևյալ ֆորմատով՝ « "You are [age] years old."։

/* #include <stdio.h>
int main() {
    int age;
    printf("Write Your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    return 0;
} */
// 6. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x ամբողջ թվային փոփոխականի արժեքը և կտպի էկրանին (4 * x + 21 * x * x - 12) արտահայտության արդյունքը։
/* #include <stdio.h>
int main() {
    int x;
    printf("Please write the value of x: ");
    scanf("%d", &x);
    int res = 4 * x + 21 * x * x - 12;
    printf("Result of (4 * x + 21 * x * x - 12): x = %d is %d\n", x, res);

    return 0;
} */
// 7. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x իրական թվային փոփոխականի արժեքը և կտպի էկրանին (x / (5 + 2) + 30 * x - 51 ) արտահայտության արդյունքը։
/* #include <stdio.h>
int main () {
    int x;
    printf ("PLease write the value of x: ");
    scanf ("%d", &x);
    int res = x / (5 + 2) + 30 * x - 51;
    printf("Result of (x / (5 + 2) + 30 * x - 51 ): x= %d is %d\n", x, res);
    return 0;
} */

// 8.Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x և y ամբողջ թվային փոփոխականների արժեքները և կտպի էկրանին (x * y + 21 * x / y - 200) արտահայտության արդյունքը:
/*  #include <stdio.h>
int main () {
    int x;
    int y;
    printf ("PLease write the value of x: ");
    scanf ("%d", &x);
    printf ("pLease write the value of y: ");
    scanf ("%d", &y);
    int res = x * y + 21 * x / y - 200;
    printf("Result of (x * y + 21 * x / y - 200): x=%d, y=%d is %d\n", x,y,res);
    return 0;
} */
// 9.Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը, որը լինելու է լատինական այբուբենի մեծատառ։ Տպել էկրանին մուտքագրված տառին համապատասխանող փոքրատառը։

/* #include <stdio.h>
int main () {
    char sym;
    printf ("Please write char: ");
    scanf ("%c", &sym);
    if (sym >= 'A' && sym <= 'Z') {
        char loweSym = sym + 32;
            printf("The lowercase letter is: %c\n", loweSym);
    } else {
        printf("False input. Please enter an uppercase letter.\n");
    }
    return 0;
} */
// 10. Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:
/*
#include <stdio.h>

int main() {
    char sym; 
    printf("Please enter a sym: ");
    scanf(" %c", &sym);
    if (sym >= '0' && sym <= '9') {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
*/
// 11. Գրել  ծրագիր, որը թույլ է տալիս օգտագործողին մուտքագրել տեքստ և հաշվում է տեքստի ձայնավորների և բաղաձայնների քանակը: Տպում է էկրանին քանակը։
/* 
#include <stdio.h>
int main() {
    char text[1000];
    int vowels = 0, consonants = 0;

    printf("Write text: ");
    scanf(" %999[^\n]", text);

    for (int i = 0; text[i]; i++) {
        char c = text[i] | 32;
        if ((c >= 'a' && c <= 'z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n Consonants: %d\n", vowels, consonants);
    return 0;
}
*/
// 12. Գրել  ծրագիր, մուտքագրված տողի համար ստուգում է, թե արդյոք այն պալինդրոմ է (կարդում է նույնը սկզբից և վերջից): 
/*
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; 
        }
    }

    return 1;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
*/
// 13. Գրել  ծրագիր, որը փոխակերպում է Ցելսիուսով մուտքագրված ջերմաստիճանը Ֆարենհեյթի՝ օգտագործելով «(Celsius * 9/5) + 32» բանաձևը և տպում է էկրանին  արդյունքը՝ օգտագործելով «printf»:

/* #include <stdio.h>
int main() {
    float Celsius, fahrenheit;
    printf("Please write Celsius: ");
    scanf("%f", &Celsius);
    fahrenheit = Celsius * 9/5 + 32;
    printf("Celsius= %.1f and fahrenheit= %.1f\n", Celsius, fahrenheit);
    return 0;
} 
*/

//14. Գրել ծրագիր, թույլ է տալի օգտվողին մուտքագրել իր տարիքը և տպում է էկրանին  հաղորդագրություն հետևյալ պայմանների հիման վրա.
      // a.Եթե տարիքը 18-ից պակաս է,  տպեք էկրանին «Դուք անչափահաս եք»:
      // b.Եթե տարիքը 18-ից 65 տարեկան է (ներառյալ), տպեք էկրանին  «Դուք չափահաս եք»:
      // c. Եթե տարիքը 65-ից բարձր է, տպեք էկրանին  «Դու տարեց քաղաքացի ես»:

/*
#include <stdio.h>
int main() {
    int age;

    printf("Please write your age: ");
    scanf("%d", &age);

    while (age > 0) { 

        if (age < 18) {
            printf("You are a minor: %d\n", age);
        } else if (age >= 18 && age <= 65) {
            printf("You are an adult: %d\n", age);
        } else {
            printf("You are an older citizen: %d\n", age);
        }
        printf("Please write your age (or enter 0 to exit): ");
        scanf("%d", &age);
    }

    return 0;
}
*/

/* 15.Գրել ծրագիր, որը կարդում է աշակերտի ստացած գնահատականները առարկայից և ցուցադրում համապատասխան գնահատականը՝  ըստ հետևյալ պայմանների.
    - Գնահատականը եթե 90-ից 100 (ներառյալ)՝ A դասարան
    - Գնահատականը եթե 80-ից 89-ը՝ B դասարան
    - Գնահատականը եթե 70-ից 79-ը՝ C դասարան
    - Գնահատականը եթե 60-ից 69-ը՝ D դասարան
    - 60-ից ցածր գնահատականներ. Դասարան E
*/
/*
#include <stdio.h>

int main() {
    int score;

    printf("Please write the student score: ");
    scanf("%d", &score);
    char class;

    if (score >= 90 && score <= 100) {
        class = 'A';
    } else if (score >= 80 && score <= 89) {
        class = 'B';
    } else if (score >= 70 && score <= 79) {
        class = 'C';
    } else if (score >= 60 && score <= 69) {
        class = 'D';
    } else {
        class = 'E';
    }

    // Display the corresponding grade
    printf("The student class is: %c\n", class);

    return 0;
}
*/

//16.  Գրեք ծրագիր, որը ստանում է մարդու հասակը (սանտիմետրերով) և ստուգում, թե արդյոք դա իրավասու է որոշակի զբոսանքի զվարճանքի այգում: Ուղևորության համար անհրաժեշտ է նվազագույնը 150 սմ բարձրություն: Ցուցադրել «Դուք համապատասխանում եք»: եթե հասակը մեծ է կամ հավասար է 150 սմ։ Հակառակ դեպքում ցուցադրեք «Ներողություն, դուք չեք համապատասխանում»:
/*
#include <stdio.h>

int main() {
    int height;
    printf("Please write Your height in cm: ");
    scanf ("%d", &height);

    while (height > 0) {
        if (height >= 150) {
        printf("You can participate: %d cm\n", height);
        } else {
            printf ("Sorry, you can't participate: %d cm\n", height);
        }
        printf ("Please write your height in cm:");
        scanf ("%d", &height);
 
    }
        return 0;
}
*/

// 17. Գրել ծրագիր, որը էկրանին կտպի A && B | |  !B ^ A Բուլյան արտահայտության ճշտության աղյուսակը։
/*
 #include <stdio.h>

int main() {
    int A, B;

    printf("Truth Table for A && B || !B ^ A\n");
    printf("A\tB\tExpression Result\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            int result = A && B || !B ^ A;

            printf("%d\t%d\t%d\n", A, B, result);
        }
    }

    return 0;
}
*/
// 18  Գրել ծրագիր, որը էկրանին կտպի A || B && !(B || A) Բուլյան արտահայտության ճշտության աղյուսակը։
/* #include <stdio.h>

int main() {
    int A, B;

    printf("Truth Table for A || B && !(B || A)\n");
    printf("A\tB\tExpression Result\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            int result = A || B && !(B || A);

            printf("%d\t%d\t%d\n", A, B, result);
        }
    }

    return 0;
} */

// 19 Գրել ծրագիր, որը էկրանին կտպի !(A && B) || A && !B || A Բուլյան արտահայտության ճշտության աղյուսակը։
/*
#include <stdio.h>

int main() {
    int A, B;

    printf("Truth Table for  !(A && B) || A && !B || A\n");
    printf("A\tB\tExpression Result\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            int result =  !(A && B) || A && !B || A;

            printf("%d\t%d\t%d\n", A, B, result);
        }
    }

    return 0;
} */
// 20. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ:
/*
#include <stdio.h>

int main() {
    int number;

    printf("Please write number: ");
    scanf("%d", &number);
    
    if (number % 2 ==0){
        printf ("%d is even number: \n", number);
    } else {
        printf ("%d is odd number:\n", number);
    }
    return 0;
} 
*/
// 21 Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:
/*
#include <stdio.h>

int main() {
    char letter;

    printf("Write a letter: ");
    scanf(" %c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ||
            letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            printf("%c is a vowel.\n", letter);
        } else {
            printf("%c is a consonant.\n", letter);
        }
    } else {
        printf("false input. Please enter a letter.\n");
    }

    return 0;
}
*/
// 22 Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը: 

/* #include <stdio.h>

int main() {
    double num1, num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);
    if (num1 > num2) {
        printf("%.2lf is the largest number.\n", num1);
    } else if (num2 > num1) {
        printf("%.2lf is the largest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
} */
// 23 Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը:
/*
#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Write the first number: ");
    scanf("%lf", &num1);

    printf("Write the second number: ");
    scanf("%lf", &num2);

    printf("Write the third number: ");
    scanf("%lf", &num3);

    if ((num1 == num2 && num1 != num3) || 
        (num1 == num3 && num1 != num2) || 
        (num2 == num3 && num2 != num1)) {
        double largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
        printf("At least two nuembers are equal. The largest number is %.2lf.\n", largest);
    } else {
        printf("No two numbers are equal.\n");
    }

    return 0;
}
*/
// 24. Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե չորս թվերի գումարը հավասար է 0-ի տպել ամենափոքր թիվը:
/*
#include <stdio.h>

int main() {
    double num1, num2, num3, num4;

    printf("Write the first number: ");
    scanf("%lf", &num1);

    printf("Write the second number: ");
    scanf("%lf", &num2);

    printf("Write the third number: ");
    scanf("%lf", &num3);

    printf("Write the fourth number: ");
    scanf("%lf", &num4);

    double sum = num1 + num2 + num3 + num4;

    if (sum == 0) {
        double smallest = num1;

        if (num2 < smallest) {
            smallest = num2;
        }
        if (num3 < smallest) {
            smallest = num3;
        }
        if (num4 < smallest) {
            smallest = num4;
        }

        printf("The sum of the four numbers is 0, and the smallest number is %.2lf.\n", smallest);
    } else {
        printf("The sum of the four numbers is not 0.\n");
    }

    return 0;
}
*/
// 25. Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի և տպում է՝ տարին նահանջ տարի է, թե ոչ:
/* 
#include <stdio.h>

int main() {
    int year;
    printf("Write a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
*/

// 26. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր և տպում է այդ թվերի ամենամեծ ընդհանուր բաժանարարը:
/*
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    while (num1 != num2) {
        if (num1 > num2) num1 -= num2;
        else num2 -= num1;
    }

    while (num1 != num3) {
        if (num1 > num3) num1 -= num3;
        else num3 -= num1;
    }

    printf("The GCD of the three numbers is %d\n", num1);

    return 0;
}
*/
// 27 Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թիվ, եթե թվի հինգերորդ բիթը եղավ 0 սարքում է մեկ և տպում էկրանին հակառակ դեպքում թիվը պարզապես տպել էկրանին։
/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int five_Bit = (num >> 4) & 1;
    if (five_Bit == 0) {
        num |= (1 << 4);
        printf("The modified number with the fifth bit set to 1: %d\n", num);
    } else {
        printf("The fifth bit is already 1, so the number is: %d\n", num);
    }

    return 0;
}*/
//28.Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու ամբողջ թիվ, ստուգեք թվերը կարող են իրար վրա բաժանվել թե ոչ։

/*  #include <stdio.h>

int main() {
    int num1, num2;
    printf("Write the first integer: ");
    scanf("%d", &num1);

    printf("Write the second integer: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d is divisible by %d\n", num1, num2);
    } else if (num2 == 0) {
        printf("Error: Division by zero is'nt allowed.\n");
   } else {
        printf("%d is not divisible by %d\n", num1, num2);
    }

    return 0;
} */
// 29 Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի մեծատառ և փոքրատառ տեսքերը, թե՛ ոչ։
/* #include <stdio.h>

int main() {
    char symbol1, symbol2;

    printf("Write the first symbol: ");
    scanf(" %c", &symbol1); 

    printf("Write the second symbol: ");
    scanf(" %c", &symbol2);

    if ((symbol1 >= 'A' && symbol1 <= 'Z' && symbol2 >= 'a' && symbol2 <= 'z') ||
        (symbol1 >= 'a' && symbol1 <= 'z' && symbol2 >= 'A' && symbol2 <= 'Z')) {
        printf("The symbols represent the upper and lower Cases versions of the same letter.\n");
    } else {
        printf("The symbols is not represent the same letter in different cases.\n");
    }

    return 0;
} */

// 30  Գրեք ծրագիր, որը էկրանին տպում է 0-ից 100 թվերը։
/* 
#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
    return 0;
}
*/
// 31 Գրեք ծրագիր, որը էկրանին տպում է միայն 0-ից 100-ի կենտ թվերը:

/* #include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
        printf("%d\n", i);
    }
    }
    return 0;
} */
// 32 Գրեք ծրագիր, որն օգտվողին թույլ է տալիս մուտքագրել 12-ից մեծ ամբողջ թիվ և տպել այդ թիվը թվանշանների հակառակ հերթականությամբ։
/* #include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter an integer greater than 12: ");
        scanf("%d", &num);
    } while (num <= 12);
    printf("The number in reverse order: ");
    while (num) {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");

    return 0;
} */
// 33 Գրեք ծրագիր, որն օգտվողին թույլ է տալիս մուտքագրել թիվ և էկրանին տպում է այդ թվի թվանշանների գումարի արդյունքը:
/*
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10; 
        num /= 10;  
        sum += digit; 
    }
    printf("The sum of the digits: %d\n", sum);

    return 0;
}
*/
// 34. Գրեք ծրագիր, որը գեներացնում է Ֆիբոնաչիի հաջորդականությունը մինչև սահմանված թիվը օգտագործելով «do-while» օղակը: Խնդրեք օգտվողին մուտքագրել թիվը և ցուցադրել Ֆիբոնաչիի հաջորդականությունը:
/*
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Write the number of the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d: \n", n);

    if (n >= 1) {
        printf("%d, ", first);
    }

    if (n >= 2) {
        printf("%d, ", second);
    }

    if (n >= 3) {
        do {
            next = first + second;
            printf("%d, ", next);
            first = second;
            second = next;
            n--;
        } while (n > 2);
    }

    printf("\n");

    return 0;
}
*/

// 35. Գրեք ծրագիր, որը տպում է էկրանին տվյալ թվի բազմապատկման աղյուսակը:Հաշվի առեք, որ թիվը պետք է դրական լինի։
/*
#include <stdio.h>

int main() {
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);
    printf("Mult table for %d:\n", number);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
*/
// 36. Գրեք ծրագիր, որը հաշվարկում է բոլոր զույգ թվերի գումարը երկու տրված թվերի միջև։
/* #include <stdio.h>

int main() {
    int start, end;
    int sum = 0;
    printf("Write the start number: ");
    scanf("%d", &start);

    printf("Write the end number: ");
    scanf("%d", &end);

    if (start % 2 != 0) {
        start++;
    }
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    printf("The sum of even numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
*/
