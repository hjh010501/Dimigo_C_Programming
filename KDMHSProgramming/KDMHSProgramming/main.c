//
//  main.c
//  DIMIGO_PROGRAMMING
//
//  Created by KID on 2017. 9. 28..
//  Copyright © 2017년 KID. All rights reserved.
//

/*8월 24일 수업*/
//
//#include <stdio.h>
// int main()
// {
// int ninput = 0, bResult = 0;
// scanf("%d", &ninput);
// bResult = ninput < 4 || ninput >= 60;
// printf("Result:%d(1:True,0:False)\n", bResult);
// }

/*#include <stdio.h>
 int main()
 {
 int nAge = 0, nHeight = 0;
 printf("나이를 입력하세요 : ");
 scanf("%d", &nAge);
 printf("키를 입력하세요 : ");
 scanf("%d", &nHeight);
 
 printf("결과: %d (1:합격,0:불합격)\n", nAge >= 20 && nAge <= 30 && nHeight >= 150);
 }*/

/*#include <stdio.h>
 int main()
 {
 int i;
 float num = 0.0;
 
 for (i = 0; i < 100; i++)
 num += 0.1;
 printf("0.1을 100번 더한 결과:%f\n", num);
 
 }*/
/*8월 25일 수업*/
/*#include <stdio.h>
 int main()
 {
 int num = 5; // 00000101 0
 int result1 = num << 1; // 00001010 10
 int result2 = num << 2; // 00010100 20
 int result3 = num << 3; // 00101000 40
 
 printf("1칸 이동 결과:%d \n", result1);
 printf("2칸 이동 결과:%d \n", result2);
 printf("3칸 이동 결과:%d \n", result3);
 }*/
/*#include <stdio.h>
 int main()
 {
 int a = 5;//00000101
 int result1 = a >> 1;//00000010 2
 int result2 = a >> 2;//00000001 1
 int result3 = a >> 3;//00000000 0
 
 printf("1칸 이동 결과:%d \n", result1);
 printf("2칸 이동 결과:%d \n", result2);
 printf("3칸 이동 결과:%d \n", result3);
 
 
 }*/

//#include <stdio.h>
// int main()
// {
// char ch = 9;
// int inum = 1052;
// double dnum = 3.1415;
// printf("변수 ch의 크기: %d\n", sizeof ch);
// printf("변수 ch의 크기: %d\n", sizeof(inum));
// printf("변수 ch의 크기: %d\n", sizeof(dnum));//size of다음에 괄호 넣어도 되고 안넣어도 됨: 이유: 연산자이기때문에-size of가/ 함수는 필요/띄어쓰기 있는 것은 꼭 해야됨
//
// printf("char의 크기 : %d \n", sizeof(char));
// printf("char의 크기 : %d \n", sizeof(int ));
// printf("long의 크기 : %d \n", sizeof(long ));
// printf("long long의 크기 : %d \n\n", sizeof(long long ));
//
// printf("floar의 크기 : %d \n", sizeof(float));
// printf("double의 크기 : %d \n", sizeof(double));
// }

//#include <stdio.h>
// int main()
// {
// double num1 = 245;
// int num2 = 3.1415;
// int num3 = 129;
// char ch = num3;
//
// printf("정수 245를 실수로: %f \n", num1);
// printf("실수 3.1415를 정수로: %d \n", num2);
// printf("큰 정수 129를 작은 정수로: %d \n", ch);
//
// }

//8월 28일 수업
//#include <stdio.h>
// int main()
// {
// printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년");
// printf("%-8s %14s %5s \n", "김동수", "전자공학", "3");
// printf("%-8s %14s %5s \n", "이올수", "컴퓨터공학", "2");
// printf("%-8s %14s %5s \n", "한선영", "미술교육학", "4");
// }

//#include <stdio.h>
// int main()
// {
// float num1;
// double num2;
// long double num3;
//
// printf("실수 입력1(e 표기법): ");
// scanf("%f", &num1);
// printf("입력된 실수 %f \n", num1);
//
// printf("실수 입력2(e 표기법): ");
// scanf("%lf", &num2);
// printf("입력된 실수 %f \n", num2);
//
// printf("실수 입력3(e 표기법): ");
// scanf("%Lf", &num3);
// printf("입력된 실수 %Lf \n", num3);
//
// }

//#include <stdio.h>
// int main()
// {
// char ch = 0;
// ch = getchar();
// putchar(ch);
// putchar('Z');
// }






//Window only
//////////////////////////////////////////////////////////////////////??*****
//#include <stdio.h>
// int main() {
// char ch = 0;
// printf("아무 키나 누르면 다음으로 넘어갑니다.\n");
// ch = _getch();
//
// printf("입력한 키는 ");
// putchar(ch);
// printf("입니다.\n");
// }












//8월 29일 수업

//#include <stdio.h>
// int main() {
// int num = 0;
// while (num < 5) {
// printf("Hello world! %d \n",num);
// num++;
// }
// }
//
//#include <stdio.h>
// int main()
// {
// char ch = 0;
// while ((ch = getchar()) != '\n')//개행이 들어올때(enter칠때) 까지 다 받아서 내보냄
// {
// putchar(ch);//char은 한 글자씩 받지만 여러 글자쓰고 엔터치면 모두다 써짐-이유: 버퍼(사용자가 입력했을때 임시적으로 저장했다가 내보내는 공간)- 다 쓰면 알아서 하나씩 나옴=즉, 버퍼에 의해
// }
// }

//8월 31일 수업
//#include <stdio.h>
// int main()//0 입력할때까지 실행후 합 - 한번은 실행 후 반복(do while 문 특징)
// {
// int total = 0, num = 0;
// do
// {
// printf("정수 입력 (0 to quit) : ");
// scanf("%d", &num);
// total += num;//total = total +num;
// } while (num != 0);
// printf("합계 : %d \n", total);
//
// }

//#include <stdio.h>
// int main()
// {
// int num = 0, total = 0;
// do
// {
// num++;
// if (num % 2 == 0) {
// total += num;
// }
// }
// while (num >= 0 && num <= 100);
// printf("합계: %d \n", total);
// }

//#include <stdio.h>
// int main()
// {
// int cur = 2;
// int is = 0;
// do
// {
// is = 1;
//
// while (is < 10)
// {
// printf("%d * %d = %d \n", cur, is, cur*is);
//
// is++;
// }
// cur++;
//
// } while (cur < 10);
// }

//#include <stdio.h>
// int main()
// {
// int total = 0;
// int i, num;
// printf("0부터 num까지의 덧셈 , num은? ");
// scanf("%d", &num);
//
// for (i = 0; i < num + 1; i++)
// {
// total += i;
// printf("0부터 %d까지 덧셈결과: %d \n", i, total);
// }
// }


//#include <stdio.h>
// int main()
// {
// double total = 0.0;
// double input = 0.0;
// int num = 0;
// for ( ; input >= 0.0; ) {
// total += input;
// printf(" 실수 입력(minus to quit) : ");
// scanf("%lf", &input);
// num++;
//
// }
// printf("평균: %lf \n", total / (num - 1));
// }


/*#include <stdio.h>
 int main()
 {
 int cur, is;
 for (cur = 2; cur < 10; cur++)
 {
 for (is = 1; is < 10; is++)
 printf("%d * %d = %d \n", cur, is, cur*is);
 
 printf("\n");
 }
 }*/

/*#include <stdio.h>
 int main()
 {
 int opt;
 double num1, num2;
 double result;
 printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \ㅜ");
 printf("선택 ? ");
 scanf("%d", &opt);
 printf("두 개의 실수 입력 : ");
 scanf("%lf %lf", &num1, &num2);
 
 if(opt == 1)
 resulf=num1 + num2
 if(opt == 2)
 resulf=num1 - num2;
 if(opt == 3)
 resulf=num1 * num2;
 if(opt == 4)
 resulf=num1 / num2;
 printf("결과 : %f \n",result);
 }*/
//9월 11일 수업
/*#include <stdio.h>
 int main()
 {
 int input = 0; int nSelect = 0;
 scanf("%d", &input);
 
 if (input <= 10)
 nSelect = 10;
 else
 nSelect = 20;
 
 (nSelect = input <= 10 ? 10 : 20 ;)
 
 printf("%d\n", nSelect);
 }*/

/*#include <stdio.h>
 int main()
 {
 int input = 0;
 char ch = 'A';
 printf("점수를 입력하세요: ");
 scanf("%d", &input);
 if (input >= 80) {
 if (input >= 90)
 ch = 'A';
 else
 ch = 'B';
 }
 else
 {
 if (input >= 70)
 ch = 'C';
 else
 {
 ch = 'D';
 if (input < 60)
 ch = 'F';
 }
 }
 printf("%c\n", ch);
 }*/

//방식 1
/*#include <stdio.h>
 int main()
 {
 int Max = 0;
 int a, b, c;
 scanf("%d %d %d", &a, &b, &c);
 Max = a;
 Max = b > Max ? b : Max;
 Max = c > Max ? c : Max;
 printf("Max : %d\n", Max);
 }*/
//방식 2
/*#include <stdio.h>
 int main()
 {
 int Max = -9999, input = 0;
 scanf("%d", &input);
 Max = input > Max ? input : Max;
 scanf("%d", &input);
 Max = input > Max ? input : Max;
 scanf("%d", &input);
 Max = input > Max ? input : Max;
 
 printf("Max : %d\n", Max);
 
 }*/
//방식 2가 방식 1보다 좋은 것
//이유: 방식 1은 5개 비교하면 5개 다 받아서 해야됨 하지만 방식 2는 걍 복사 붙여넣기

//9월 12일 수업
//방식 1- break가 없어서 누른 숫자만 되는 것이 아니라 그 뒤 숫자 다나옴.

/*#include <stdio.h>
 int main()
 {
 int num;
 printf("1 이상 5 이하인 정수 입력: ");
 scanf("%d", &num);
 switch (num)
 {
 case 1:
 printf("1은 ONE \n");
 
 case 2:
 printf("2는 TWO \n");
 
 case 3:
 printf("3은 THREE \n");
 
 case 4:
 printf("4는 FOUR \n");
 
 case 5:
 printf("5는 FIVE \n");
 default:
 printf("I don't know! \n");
 }
 
 
 }*/
//방법 2- break 있어서 누른 숫자만 나옴
/*#include <stdio.h>
 int main()
 {
 int num;
 printf("1 이상 5 이하인 정수 입력: ");
 scanf("%d", &num);
 switch (num)
 {
 case 1:
 printf("1은 ONE \n");
 break;
 
 case 2:
 printf("2는 TWO \n");
 break;
 
 case 3:
 printf("3은 THREE \n");
 break;
 
 case 4:
 printf("4는 FOUR \n");
 break;
 
 case 5:
 printf("5는 FIVE \n");
 break;
 
 default:
 printf("I don't know! \n");
 }*/

//p.209-함수
/*#include <stdio.h> -printf는 헤더 파일인 stdio.h에 있음ㅇㅇ*/
/*#include <stdio.h>
 int ReadNum()
 {
 int ReadNum;
 scanf("%d", &ReadNum);
 return ReadNum;
 }
 
 int Add(int num1, int num2)
 {
 int result;
 
 result = num1 + num2;
 return result;
 }
 
 void ShowAddResult(int result)//void써야 하는 이유?-아무것도 안 되돌려줌
 {
 printf("%d", result);
 }
 
 void HowToUseThisProg(void) //인자전달 (X), 반환 값 (X)
 {
 printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
 printf("자! 그럼 두 개의 정수를 입력하세요. \n");
 }
 
 int main(void)
 {
 int result, num1, num2;
 HowToUseThisProg();
 num1 = ReadNum();
 num2 = ReadNum();
 result = Add(num1, num2);
 ShowAddResult(result);
 return 0;
 }*/
//p.217
/*#include <stdio.h>
 int NumberCompare(int num1, int num2);//밑에서 함수 선언할때 (int main보다) 위에 요것 해주어야 함.
 
 int main()
 {
 printf("3과 4중에서 큰 수는 %d 이다 . \n", NumberCompare(3, 4));
 printf("7과 2중에서 큰 수는 %d 이다 . \n", NumberCompare(7, 2));
 
 }
 
 int NumberCompare(int num1, int num2)
 {
 if (num1 > num2)
 return num1;
 else
 return num2;
 }*/
//9월 14일 수업
//p.222 지역변수 알고 있기 - 지역내에서만 유효하다는 특징/먼저 들어온애 먼저 나감/선언된 지역 외에서 자동 소멸 /p.222,223,224-224***
/*#include <stdio.h>
 
 int SimpleFuncOne(void)
 {
 int num = 0;//이후부터 SimpleFuncOne의 num 유효
 num++;
 printf("SimpleFuncOne num: %d \n", num);
 return 0;//SimpleFuncOne의 num 유효한 마지막 문장
 }
 int SimpleFuncTwo(void)
 {
 int num1 = 20;//이후부터 num1 유효
 int num2 = 30;//이후부터 num2 유효
 num1++, num2--;
 printf("num1&num2:%d %d \n", num1, num2);
 return 0;//num1,num2 유효한 마지막 문장
 }
 int main(void)
 {
 int num = 17;//이후 main의 num 유효
 SimpleFuncOne();
 SimpleFuncTwo();
 printf("main num: %d \n", num);
 return 0;//main의 num 유효한 마지막 문장
 }*/


//9월 15일 수업

//#include <stdio.h>
// void Add(int val);
// int num;//전역변수는 기본 0으로 초기화됨
//
// int main(void)
// {
// printf("num: %d \n", num);
// Add(3);
// printf("num : %d \n", num);
// num++;//전역변수 num의 값 1 증가
// printf("num : %d \n", num);
// }
//
// void Add(int val)
// {
// num += val;//전역변수 num의 값 val만큼 증가
// }

/*#include <stdio.h>
 
 void Recursive(int num)
 {
 if (num <= 0)//재귀 탈출 조건
 return;//재귀 탈출!
 printf("Recursive call!%d \n", num);
 Recursive(num - 1);
 }
 
 int main()
 {
 
 Recursive(3);
 }
 */
//p.243
/*#include <stdio.h>
 
 int Factorial(int n)
 {
 if (n == 0)
 return 1;
 else
 return n * Factorial(n - 1);
 }
 
 int main()
 {
 printf("1! = %d \n", Factorial(1));
 printf("2! = %d \n", Factorial(2));
 printf("3! = %d \n", Factorial(3));
 printf("4! = %d \n", Factorial(4));
 printf("9! = %d \n", Factorial(9));
 }*/

/*#include <stdio.h>
 
 int Factorial(int n)
 {
 if (n == 0)
 return 1;
 else
 return n * Factorial(n - 1);
 }
 
 int main()
 {
 int a;
 scanf("%d", &a);
 printf("%d", Factorial(a));
 }*/

/*#include <stdio.h>
 
 void NineNine(int num1, int num2);
 
 int main()
 {
 int num1, num2;
 
 printf("두 개의 정수 입력: ");
 scanf("%d %d", &num1, &num2);
 
 if (num1 > num2)
 NineNine(num2, num1);
 else
 NineNine(num1, num2);
 }
 
 void NineNine(int num1, int num2)
 {
 for (int i = num1; i <= num2; i++) {
 for (int j = 1; j <= 9; j++) {
 printf("%d * %d = %d\n", i, j, i*j);
 }
 }
 }*/
//p.248 3번 문제!!!! 다시 풀기ㅜㅜ

//#include <stdio.h>
//
// int GCM(int num1, int num2);
//
// int main()
// {
// int num1, num2;
//
// printf("두 개의 정수를 입력하시오: ");
// scanf("%d %d", &num1, &num2);
//
// printf("GCM: %d", GCM(num1, num2));
// return 0;
//
// }
//
// int GCM(int num1, int num2) {
// int result;
// result = num1;
// while (num1%result != 0 || num2%result != 0)
// result--;
// return result;
// }

//4번문제
/*#include <stdio.h>
 int main()
 {
 int a;
 printf("현재 당신이 소유하고 있는 금액: ");
 scanf("%d", &a);
 
 for (int i = 1; i <= a / 500; i++) {
 for (int j = 1; j <= a / 700; j++) {
 for (int k = 1; k <= a / 400; k++) {
 if (a == i * 500 + j * 700 + k * 400) {
 
 printf("크림빵 %d개\n새우깡 %d개\n콜라 %d개\n", i, j, k);
 }
 }
 }
 }
 printf("어떻게 구입하시겠습니까? \n");
 }*/
//9월 19일 수업
// 문제 5번
//꼭 다시 풀기!!!!!!!
/*
 #include <stdio.h>
 int IsPrime(int n);
 int main()
 {
 int i = 2, cnt = 0;
 
 while (cnt != 10)
 {
 if ( IsPrime(i) == 1) {
 printf("%d ", i);
 cnt++;
 }
 i++;
 }
 return 0;
 
 }
 
 int IsPrime(int n)
 {
 int diversors = 0, i;
 
 for (i = 1; i <= n; i++) {
 if (n % i == 0)
 diversors++;
 }
 if (diversors == 2)
 return 1;
 return 0;
 }
 */
/*#include <stdio.h>
 const int H = 60 * 60;//const=상수(바뀌지 않음)
 const int M = 60;
 void SecondToHMS(int sec);
 int main() {
 int sec;
 printf("초(second) 입력: ");
 scanf("%d", &sec);
 SecondToHMS(sec);
 }
 
 void SecondToHMS(int sec) {
 int h, m, s;
 h = sec / H;
 m = (sec - h*H) / M;
 s = sec - (h*H) - (m*M);
 printf("[h:%d, m:%d, s:%d]", h, m, s);
 }*/


//9월 21일 test 7 꼭 다시
/*#include<stdio.h>
 void number(int num);
 
 int main() {
 int n;
 printf("정수 n 입력: ");
 scanf("%d", &n);
 number(n);
 }
 
 void number(int num) {
 int n = 2;
 int i;
 for (i = 1 ; ; i++) {
 n = n << 1;
 if (n > num)
 break;
 }
 printf("공식을 만족하는 i의 최댓값은 %d", i);
 }*/


/*#include <stdio.h>
 int Power(int n) {
 int num=2;
 for (int i=1; i < n; i++) {
 num = num << 1;
 }
 return num;
 //if(n==0)
 //return 1;
 //else return Power(n - 1) * 2;
 
 }
 
 int main()
 {
 int num;
 
 printf("정수 입력 : ");
 scanf("%d", &num);
 
 printf("2의 %d승은 %d\n", num, Power(num));
 
 }*/

//9월 22일 수업
//배열-1.동일한 데이터 타입 모아둠=>왜 쓸까?-접근 편해서,관리하기 편하다. 2. 배열들은 데이터상에서 연속되어져있다. 3.배열명은 주소값갖는다.
//p.254
/*#include <stdio.h>
 int main()
 {
 int arr[5];
 int sum = 0, i;
 
 arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
 
 for (i = 0; i < 5; i++)
 sum += arr[i];
 
 printf("배열요소에 저장된 값의 합: %d \n", sum);
 }
 */

//#include <stdio.h>
// int main()
// {
// int arr1[5] = { 1,2,3,4,5 };
// int arr2[] = { 1,2,3,4,5,6,7 };
// int arr3[5] = { 1,2 };
// int ar1Len, ar2Len, ar3Len,i;
//
// printf("배열 arr1 의 크기: %d \n", sizeof(arr1));
// printf("배열 arr2 의 크기: %d \n", sizeof(arr2));
// printf("배열 arr3 의 크기: %d \n", sizeof(arr3));
//
// ar1Len = sizeof(arr1) / sizeof(int);//배열 arr1 의 길이 계산
//
// ar2Len = sizeof(arr2) / sizeof(int);//배열 arr2 의 길이 계산
//
//
// ar3Len = sizeof(arr3) / sizeof(int);//배열 arr3 의 길이 계산
//
//
// for (i = 0; i < ar1Len; i++)
// printf("%d", arr1[i]);
// printf("\n");
//
// for (i = 0; i < ar2Len; i++)
// printf("%d", arr2[i]);
// printf("\n");
//
// for(i = 0; i < ar3Len; i++)
// printf("%d", arr3[i]);
// printf("\n");
//
// }

//문장 쓸때 ch로 하나씩 넣는데 마지막에 null문자 넣어서 원래 갯수+1
//#include <stdio.h>
// int main()
// {
// int a[5] = { 30,40,10,50,20 };
// char b[6] = { 'H','e','l','l','o','\0' };
// char c[] = { "Hello" };
// char *d = "Hello";
//
// for (int i = 0; i < 5; i++) {
// printf("%d ", a[i]);
// }
// printf("\n");
// puts(b);
// puts(c);
// puts(d);
// }

//int main() {
//    int x = 10;
//    int* pnData;
//    pnData = &x;
//
//    printf("x : %d\n", x);
//
//    *pnData = 20;
//
//    printf("x: %d\n", x);
//    return 0;
//
//}

// 2017.10.10(화)_프로그래밍
//#include <stdio.h>
//
//int main() {
//
//    int num1 = 100, num2 = 100;
//    int * pnum;
//
//    pnum = &num1;
//    *pnum += 30;
//    pnum = &num2;
//    *pnum -= 30;
//
//    printf("num1:%d, num2:%d\n", num1, num2);
//    return 0;
//
//}

//#include <stdio.h>
//
//int main() {
//
//    int arr1[3] = {1,2,3};
//    double arr2[3] = {1.1,2.2,3.3};
//
//    printf("%d %g \n", *arr1, *arr2);
//    *arr1 += 100;
//    *arr2 += 120.5;
//    printf("%d %g \n", arr1[0], arr2[0]);
//
//}
//#include <stdio.h>
//
//int main() {
//    int arr[3] = {15,25,35};
//    int * ptr = arr;
//
//    printf("%d %d \n", ptr[0], arr[0]);
//    printf("%d %d \n", ptr[1], arr[1]);
//    printf("%d %d \n", ptr[2], arr[2]);
//    printf("%d %d \n", *ptr, *arr);
//
//    printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2));
//}

// 2017.10.12(목)_프로그래밍
// 배열 이름은 상수형태의 포인터(바꿀 수 없음), 배열의 첫번재 값 주소이다.
// p.291 포인터 변수와 배열의 이름 비교 표 체크
// p.299 중요한 결론! arr[i] == *arr[i]
// char str1[] = "My String" 에서 [] 는 널문자('\0') 때문에 10 입력되어짐.
// char * str = "test" 에서 str 이 가르키는 주소값은 t 를 가리키는 주소값과 같다.
// * 를 사용하여 선언한 포인터 배열, 문자열은 주소값 수정이 가능하다, 단 하나씩 값을 바꾸는것은 불가능하다.
//
//#include <stdio.h>
//
//int main() {
//    char str1[] = "My String";
//    char * str2 = "Your String";
//    printf("%s %s\n", str1, str2);
//
//    str2 = "Our String";
//    printf("%s %s \n", str1, str2);
//    str1[0] = 'X';
////    str2[0] = 'X';
//    printf("%s %s \n", str1, str2);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char * test;
//    test = "Dimigo";
//    printf(test);
//    return 0;
//}

// 2017.10.13(금)_프로그래밍
// 인자전달의 기본방식은 값의 복사!!!!!

//#include <stdio.h>
//
//int main() {
//    char test[] = {"HELLOWORLD"};
//    char * ptr1 = test;
//    printf("%s\n", ptr1 + 5);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int num1 = 10, num2 = 20, num3 = 30;
//    int * arr[3] = {&num1, &num2, &num3};
//
//    printf("%d \n", *arr[0]);
//    printf("%d \n", *arr[1]);
//    printf("%d \n", *arr[2]);
//}
//
// strArr[3] 이라는 포인터 배열은 "simple", "String", "Array" 라는 문자열 첫번째의 주소값을 가짐
// 따라서, printf 에 %s 서식문자를 통하여 문자열 첫번째 ~ 널문자의 주소값까지 출력함.
//#include <stdio.h>
//int main() {
//    char * strArr[3] = {"simple", "String", "Array"};
//    printf("%s \n", strArr[0]);
//    printf("%s \n", strArr[1]);
//    printf("%s \n", strArr[2]);
//    return 0;
//}
//
//#include <stdio.h>
//
//void fct(int * ptr) {
//    *ptr += 1;
//}
//int main () {
//    int age = 3;
//    fct(&age);
//    printf("%d", age);
//
//}
//void ShowArrayElem(int * param, int len) {
//    int i;
//    for (i = 0; i < len; i++) {
//        printf("%d ",param[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr1[3] = {1,2,3};
//    int arr2[5] = {4,5,6,7,8};
//    ShowArrayElem(arr1,sizeof(arr1)/sizeof(int));
//    ShowArrayElem(arr2,sizeof(arr2)/sizeof(int));
//    return 0;
//}

// 2017.10.16(월)_프로그래밍
// Call-By-Value : 값을 전달하는 것
// Call-By-Reference : 메모리 주소 전달 하는 것

//#include <stdio.h>
//
//void Swap(int * ptr1, int * ptr2) {
//    int temp = *ptr1;
//    *ptr1 = *ptr2;
//    *ptr2 = temp;
//}
//
//int main() {
//    int num1 = 10;
//    int num2 = 20;
//    printf("num1 num2 : %d %d \n", num1, num2);
//    Swap(&num1, &num2);
//    printf("num1 num2 : %d %d \n", num1, num2);
//    return 0;
//}

// 2017.10.23(월)_프로그래밍
//#include <stdio.h>
//
//int main() {
//    int villa[4][2];
//    int popu, i, j;
//
//    for(i = 0; i < 4; i++) {
//        for(j=0; j<2; j++) {
//            printf("%d층 %d호 인구수: ", i+1, j+1);
//            scanf("%d", &villa[i][j]);
//        }
//    }
//
//    for(i=0; i<4; i++) {
//        popu = 0;
//        popu += villa[i][0];
//        popu += villa[i][1];
//        printf("%d층 인구수: %d \n", i+1, popu);
//    }
//}

//#include <stdio.h>
//
//void SwapIntPtr(int **dp1, int **dp2) {
//    int * temp = *dp1;
//    *dp1 = *dp2;
//    *dp2 = temp;
//}
//
//int main() {
//    int num1 = 10, num2 = 20;
//    int *ptr1, *ptr2;
//    ptr1 = &num1, ptr2 = &num2;
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//
//    SwapIntPtr(&ptr1, &ptr2);
//    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//}

//#include <stdio.h>
//
//int main() {
//    int num1 = 10, num2 = 20, num3 = 30;
//    int *ptr1 = &num1;
//    int *ptr2 = &num2;
//    int *ptr3 = &num3;
//
//    int *ptrArr[] = {ptr1, ptr2, ptr3};
//    int **dptr = ptrArr;
//
//    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//
//}

// 2017.10.26(목)_프로그래밍
// void 포인터형은 어떠한 주소값이든 넣을 수 있다.
//#include <stdio.h>
//
//int main() {
//
//    int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
//    int arr2d[2][4] = {1,2,3,4,5,6,7,8};
//    int i, j;
//
//    int * whoA[4] = {&num1, &num2, &num3, &num4};
//    int(*whoB)[4] = arr2d;
//
//    printf("%d %d %d %d \n", *whoA[0],*whoA[1],*whoA[2],*whoA[3]);
//
//    for(i=0; i < 2; i++) {
//        for(j=0; j < 4; j++) {
//            printf("%d ", whoB[i][j]);
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//void SimpleAdder(int n1, int n2) {
//    printf("%d + %d = %d\n", n1, n2, n1+n2);
//}
//
//void ShowString(char * str) {
//    printf("%s \n", str);
//}
//
//int main() {
//    char * str = "Function Pointer";
//    int num1 = 10, num2 = 20;
//
//    void (*fptr1)(int, int) = SimpleAdder;
//    void (*fptr2)(char *) = ShowString;
//
//    fptr1(num1, num2);
//    fptr2(str);
//
//}
//
//#include <stdio.h>
//
//void SoSimpleFunc(void) {
//    printf("I'm so simple");
//}
//
//int main() {
//    int num = 20;
//    void * ptr;
//
//    ptr = &num;
//    printf("%p \n", ptr);
//
//    ptr = SoSimpleFunc;
//    printf("%p \n", ptr);
//}

// 2017.11.2(목)_프로그래밍
// 운영체제에게 전달하는 역활을 하는게 스트림
// EOF (End of File) 은 파일의 값을 표현하기 위해서 정리해 둠. 윈도우는 컨트롤 Z 맥은 컨트롤 D 임.
// fputs 는 개행 X, puts 는 개행 O

//int main() {
//    int ch;
//    while (1) {
//        ch = getchar();
//        if(ch == EOF) {
//            break;
//        }
//        putchar(ch);
//    }
//    return 0;
//}

//int main() {
//    char * str = "Simple String";
//
//    printf("1. puts test ------\n");
//    puts(str);
//    puts("So Simple String");
//
//    printf("2. fputs test ----- \n");
//    fputs(str, stdout); printf("\n");
//    fputs("So Simple String", stdout); printf("\n");
//    printf("3. end of main ----- \n" );
//    return 0;
//}

//void ClearLineFormReadBuffer(void) {
//    while(getchar() != "\n");
//}
////
// 2017.11.3(금)_프로그래밍
//int main() {
//    char perID[7];
//    char name[10];
//
//    fputs("주민번호 앞 6자리 입력: ");
//    fgets(perID, sizeof(perID));
//    ClearLineFormReadBuffer();
//
//    fputs("이름 입력: ");
//    fgets(name, sizeof(name));
//
//    printf("주민번호: %s\n", perID);
//    printf("이름: %s\n", name);
//}


//#include <string.h>
//
//void RemoveBSN(char str[]) {
//    int len = strlen(str);
//    str[len - 1] = 0;
//}
//
//int main() {
//    char str[100];
//    printf("문자열 입력: ");
//    fgets(str,sizeof(str));
//    printf("길이: %d, 내용 : %s", strlen(str), str);
//
//    RemoveBCN(str);
//
//    printf("길이: %d, 내용: %s \n", strlen(str), str);
//}
//int main() {
//    char str1[20] = "1234567890";
//    char str2[20];
//    char str3[5];
//
//    strcpy(str2, str1);
//    puts(str2);
//
//    strncpy(str3, str1, sizeof(str3));
//    puts(str3);
//
//    strncpy(str3, str1, sizeof(str3) - 1);
//    str3[sizeof(str3) - 1] = 0;
//    puts(str3);
//}

//int main() {
//    char str1[20] = "First~";
//    char str2[20] = "Second~";
//
//    char str3[20]="Simple num: ";
//    char str4[20] = "1234567890";
//
//    strcat(str1, str2);
//    puts(str1);
//
//    strncat(str3, str4, 7);
//    puts(str3);
//    return 0;
//}

// 2017.11.6(월)_프로그래밍
//#include <stdio.h>
//#include <math.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//int main() {
//    struct point pos1, pos2;
//    double distance;
//
//    printf("point1 pos: ");
//    scanf("%d %d", &pos1.xpos, &pos1.ypos);
//
//    printf("point2 pos: ");
//    scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//    distance = sqrt((double)(pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos));
//
//    printf("%g", distance);
//
//
//}

//#include <stdio.h>
//#include <string.h>
//
//struct person {
//    char name[20];
//    char phoneNum[20];
//    int age;
//};
//
//int main() {
//    struct person man1, man2;
//    strcpy(man1.name, "안성준");
//    strcpy(man1.phoneNum, "010-2343-1212");
//    man1.age = 23;
//
//    printf("이름 입력: "); scanf("%s", man2.name);
//    printf("번호 입력: "); scanf("%s", man2.phoneNum);
//    printf("나이 입력: "); scanf("%d", &man2.age);
//
//    printf("이름: %s \n", man1.name);
//    printf("번호: %s \n", man1.phoneNum);
//    printf("나이: %d \n", man1.age);
//
//    printf("이름: %s \n", man2.name);
//    printf("번호: %s \n", man2.phoneNum);
//    printf("나이: %d \n", man2.age);
//}

//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//struct person {
//    char name[20];
//    char phoneNum[20];
//    int age;
//};
//
//int main() {
//    struct point pos = {10,20};
//    struct person man = {"이승기", "010-1232-1212", 21};
//    printf("%d %d\n", pos.xpos, pos.ypos);
//    printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//}

// 2017.11.7(화)_프로그래밍
//
//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//int main() {
//
//    struct point arr[3];
//    int i;
//
//    for(i=0;i<3;i++) {
//        printf("점의 좌표 입력: ");
//        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//    }
//
//    for(i=0;i<3;i++) {
//        printf("[%d, %d] ",arr[i].xpos, arr[i].ypos);
//    }
//
//    return 0;
//
//}

//struct person {
//    char name[20];
//    char phoneNum[20];
//    int age;
//};
//
//int main() {
//    struct person arr[3] = {
//        {"이승기", "010-1212-0001", 21},
//        {"정지영", "010-1313-0002", 22},
//        {"한지수", "010-1717-0003", 19}
//    };
//
//    int i;
//    for (i = 0; i < 3; i++)
//        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
//
//    return 0;
//}




















//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//int main() {
//    struct point pos1 = {1,2};
//    struct point pos2 = {100, 200};
//    struct point * pptr = &pos1;
//
//    (*pptr).xpos += 4;
//    (*pptr).ypos += 5;
//
//    printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
//
//    pptr = &pos2;
//    pptr->xpos += 1;
//    pptr->ypos += 2;
//    printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//}
















// 2017.11.9(목)_프로그래밍
//
//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//struct circle {
//    double radius;
//    struct point * center;
//};
//
//int main() {
//    struct point cen = {2, 7};
//    double rad = 5.5;
//
//    struct circle ring = { rad, &cen};
//    printf("원의 반지름: %g \n", ring.radius);
//    printf("원의 중심: [%d, %d] \n", (ring.center)->xpos, (*(ring.center)).ypos);
//
//}
//
//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//    struct point * ptr;
//};
//
//int main() {
//    struct point pos1 = {1,1};
//    struct point pos2 = {2,2};
//    struct point pos3 = {3,3};
//
//    pos1.ptr =  &pos2;
//    pos2.ptr =  &pos3;
//    pos3.ptr =  &pos1;
//
//    printf("점의 연결관계...\n");
//    printf("[%d, %d]와(과) [%d, %d] 연결\n", pos1.xpos, pos1.ypos,pos1.ptr->xpos, pos1.ptr->ypos);
//    printf("[%d, %d]와(과) [%d, %d] 연결\n", pos2.xpos, pos2.ypos,pos2.ptr->xpos, pos2.ptr->ypos);
//    printf("[%d, %d]와(과) [%d, %d] 연결\n", pos3.xpos, pos3.ypos,pos3.ptr->xpos, pos3.ptr->ypos);
//}
//#include <stdio.h>
//
//typedef int INT;
//typedef int * PTR_INT;
//
//typedef unsigned int UINT;
//typedef unsigned int * PTR_UINT;
//
//typedef unsigned char UCHAR;
//typedef unsigned char * PTR_UCHAR;
//
//int main() {
//    INT num1 = 20;
//    PTR_INT pnum1 = &num1;
//
//    UINT num2 = 190;
//    PTR_UINT pnum2 = &num2;
//
//    UCHAR ch = 'z';
//    PTR_UCHAR pch = &ch;
//
//    printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
//}

// 2017.11.10(금)_프로그래밍
// p.477 구조체 이름의 생략, 이름 생략하면 기존에 쓰던 방식이 안되기 때문에 다쓰는거 추천, 프로그래머의 프로그래밍 성향에 따라 다 다름

//#include <stdio.h>
//
//struct point {
//    int xpos;
//    int ypos;
//};
//
//typedef struct point Point;
//
//typedef struct person {
//    char name[20];
//    char phoneNum[20];
//    int age;
//} Person;
//
//int main() {
//    Point pos = {10,20};
//    Person man = {"이승기", "010-1212-0001", 21};
//    printf("%d %d \n", pos.xpos, pos.ypos);
//    printf("%s %s %d \n",  man.name, man.phoneNum, man.age);
//}

// p.478
// 구조체 변수를 함수의 인자로 전달하거나 함수 내에서 return문을 통해서 구조체 변수를 반환하는 경우에 발생하는

//#include <stdio.h>
//
//typedef struct point {
//    int xpos;
//    int ypos;
//} Point;
//
//void ShowPosition(Point pos) {
//    printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//Point GetCurrentPosition(void) {
//    Point cen;
//    printf("Input current pos: ");
//    scanf("%d %d", &cen.xpos, &cen.ypos);
//    return cen;
//}
//
//int main() {
//    Point curPos = GetCurrentPosition();
//    ShowPosition(curPos);
//}

// p.479 그리고 구조체의 멤버로...

// p.482 기본 자료형 변수를 대상으로는 사칙연산 비롯해서 비교연산 등 다양한 연산 가능, 하지만 구조체 변수는 매우 제한된 형태의 연산만 허용, 대입연산, &연산....등 알아두기

//#include <stdio.h>
//
//typedef struct point {
//    int xpos;
//    int ypos;
//} Point;
//
//int main() {
//    Point pos1 = {1,2};
//    Point pos2;
//    pos2 = pos1;
//
//    printf("크기: %d \n", sizeof(pos1));
//    printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
//    printf("크기: %d \n", sizeof(pos2));
//    printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
//}

// 2017.11.13(월)_프로그래밍
// 23-1 그림 체크
// p.497 체크

//#include <stdio.h>
//
//typedef struct dbshort {
//    unsigned short upper;
//    unsigned short lower;
//} DBShort;
//
//typedef union rdbuf {
//    int iBuf;
//    char bBuf[4];
//    DBShort sBuf;
//} RDBuf;
//
//int main() {
//    RDBuf buf;
//    printf("정수 입력: ");
//    scanf("%d", &(buf.iBuf));
//
//    printf("상위 2바이트: %u \n", buf.sBuf.upper);
//    printf("하위 2바이트: %u \n", buf.sBuf.lower);
//    printf("상위 1바이트 아스키코드: %c \n", buf.bBuf[0]);
//    printf("하위 1바이트 아스키코드: %c \n", buf.bBuf[3]);
//}

//#include <stdio.h>
//
//typedef enum syllable {
//    Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
//} Syllable;
//
//
//void Sound(Syllable sy) {
//
//    switch (sy) {
//        case Do:
//            puts("도는 하얀 도라지"); return;
//        case Re:
//            puts("레는 하얀 도라지"); return;
//        case Mi:
//            puts("미는 하얀 도라지"); return;
//        case Fa:
//            puts("파는 하얀 도라지"); return;
//        case So:
//            puts("솔는 하얀 도라지"); return;
//        case La:
//            puts("라는 하얀 도라지"); return;
//        case Ti:
//            puts("시는 하얀 도라지"); return;
//    }
//    puts("다함께 노래 부르세~~");
//}
//
//int main() {
//    Syllable tone;
//    for(tone = Do; tone<=Ti; tone+=1)
//        Sound(tone);
//    return 0;
//}

// 2017.11.14(화)_프로그래밍
// < 개행이 \n 아니라고요? 별표 >, 운영체제마다 개행 문제가 달라 오류 발생, 하지만 텍스트모드와 바이너리 모드로 열면 잘 나옴
// p.510, p.511 파일의 개방 모드 별표, p.513, p.514 rt, wt 체크(readtext, writetext) | rb 등은 다 바이너리
// 텍스트모드는 저장할 때 개행같은거 잘 처리, 바이너리는 그대로 처리
//#include <stdio.h>
//
//int main() {
//    FILE * fp = fopen("data.txt", "wt");
//    if (fp == NULL) {
//        puts("파일 오픈 실퍠!");
//        return -1;
//    }
//    fputc('A', fp);
//    fputc('B', fp);
//    fputc('C', fp);
//    fclose(fp);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//
//    int ch, i;
//
//    FILE * fp = fopen("data.txt", "rt");
//
//    if(fp == NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    for(i=0; i<3; i++) {
//        ch = fgetc(fp);
//        printf("%c \n", ch);
//    }
//    fclose(fp);
//    return 0;
//
//}

// 2017.11.16(목)_프로그래밍
// p.514 개방 모드에 t 도 b 도 붙여주지 않으면 파일은 텍스트 모드로 개방되어짐 (줄치기)

//#include <stdio.h>
//
//int main() {
//    FILE * fp = fopen("simple.txt", "wt");
//    if(fp==NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    fputc('A', fp);
//    fputc('B', fp);
//    fputc('C', fp);
//    fputs("My name is Hong\n", fp);
//    fputs("Your name is Yoon\n", fp);
//    fclose(fp);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char str[30];
//    int ch;
//    FILE * fp = fopen("simple.txt", "rt");
//    if(fp == NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    ch = fgetc(fp);
//    printf("%c \n", ch);
//    ch = fgetc(fp);
//    printf("%c \n", ch);
//    ch = fgetc(fp);
//    printf("%c \n", ch);
//
//
//    fgets(str, sizeof(str), fp);
//    printf("%s", str);
//    fgets(str, sizeof(str), fp);
//    printf("%s", str);
//
//    fclose(fp);
//    return 0;
//}

// 2017.11.17(금)_프로그래밍
// p.519 fread, fwrite 체크, sizeof 크기의 데이터
// p.525 줄, p.526 코드 체크
// p.529 그림 24-8 체크
//#include <stdio.h>
//
//typedef struct fren {
//    char name[10];
//    char sex;
//    int age;
//} Friend;
//
//int main() {
//    FILE * fp;
//    Friend myfren1;
//    Friend myfren2;
//
//    fp=fopen("friend.bin", "wb");
//    printf("이름, 성별, 나이 순 입력: ");
//    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//    fwrite((void*)&myfren1, sizeof(myfren1),1,fp);
//    fclose(fp);
//
//    fp=fopen("friend.bin", "rb");
//    fread((void*)&myfren2, sizeof(myfren2), 1, fp);
//    printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);



//---------
//int main() {
//    int a = 10, b = 3;
//    printf("%d %d\n", a--, --a);
//    printf("%d %d\n", ++b, b++);
//    return 0;
//}



