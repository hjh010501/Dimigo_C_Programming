//
//  main.c
//  DIMIGO_PROGRAMMING
//
//  Created by KID on 2017. 9. 28..
//  Copyright © 2017년 KID. All rights reserved.
//

/*8월 24일 수업*/

/*#include <stdio.h>
 int main()
 {
 int ninput = 0, bResult = 0;
 scanf("%d", &ninput);
 bResult = ninput < 4 || ninput >= 60;
 printf("Result:%d(1:True,0:False)\n", bResult);
 }*/
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
/*#include <stdio.h>
 int main()
 {
 char ch = 9;
 int inum = 1052;
 double dnum = 3.1415;
 printf("변수 ch의 크기: %d\n", sizeof ch);
 printf("변수 ch의 크기: %d\n", sizeof(inum));
 printf("변수 ch의 크기: %d\n", sizeof(dnum));//size of다음에 괄호 넣어도 되고 안넣어도 됨: 이유: 연산자이기때문에-size of가/ 함수는 필요/띄어쓰기 있는 것은 꼭 해야됨
 
 printf("char의 크기 : %d \n", sizeof(char));
 printf("char의 크기 : %d \n", sizeof(int ));
 printf("long의 크기 : %d \n", sizeof(long ));
 printf("long long의 크기 : %d \n\n", sizeof(long long ));
 
 printf("floar의 크기 : %d \n", sizeof(float));
 printf("double의 크기 : %d \n", sizeof(double));
 }*/
/*#include <stdio.h>
 int main()
 {
 double num1 = 245;
 int num2 = 3.1415;
 int num3 = 129;
 char ch = num3;
 
 printf("정수 245를 실수로: %f \n", num1);
 printf("실수 3.1415를 정수로: %d \n", num2);
 printf("큰 정수 129를 작은 정수로: %d \n", ch);
 
 }*/
//8월 28일 수업
/*#include <stdio.h>
 int main()
 {
 printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년");
 printf("%-8s %14s %5s \n", "김동수", "전자공학", "3");
 printf("%-8s %14s %5s \n", "이올수", "컴퓨터공학", "2");
 printf("%-8s %14s %5s \n", "한선영", "미술교육학", "4");
 }*/
/*#include <stdio.h>
 int main()
 {
 float num1;
 double num2;
 long double num3;
 
 printf("실수 입력1(e 표기법): ");
 scanf("%f", &num1);
 printf("입력된 실수 %f \n", num1);
 
 printf("실수 입력2(e 표기법): ");
 scanf("%lf", &num2);
 printf("입력된 실수 %f \n", num2);
 
 printf("실수 입력3(e 표기법): ");
 scanf("%Lf", &num3);
 printf("입력된 실수 %Lf \n", num3);
 
 
 }*/
/*#include <stdio.h>
 int main()
 {
 char ch = 0;
 ch = getchar();
 putchar(ch);
 putchar('Z');
 }*/
/*#include <stdio.h>
 #include <conio.h>
 int main() {
 char ch = 0;
 printf("아무 키나 누르면 다음으로 넘어갑니다.\n");
 ch = _getch();
 
 printf("입력한 키는 ");
 putchar(ch);
 printf("입니다.\n");
 }*/
//8월 29일 수업
/*#include <stdio.h>
 int main() {
 int num = 0;
 while (num < 5) {
 printf("Hello world! %d \n",num);
 num++;
 }
 }*/
/*#include <stdio.h>
 int main()
 {
 char ch = 0;
 while ((ch = getchar()) != '\n')//개행이 들어올때(enter칠때) 까지 다 받아서 내보냄
 {
 putchar(ch);//char은 한 글자씩 받지만 여러 글자쓰고 엔터치면 모두다 써짐-이유: 버퍼(사용자가 입력했을때 임시적으로 저장했다가 내보내는 공간)- 다 쓰면 알아서 하나씩 나옴=즉, 버퍼에 의해
 }
 }*/
//8월 31일 수업
/*#include <stdio.h>
 int main()//0 입력할때까지 실행후 합 - 한번은 실행 후 반복(do while 문 특징)
 {
 int total = 0, num = 0;
 do
 {
 printf("정수 입력 (0 to quit) : ");
 scanf("%d", &num);
 total += num;//total = total +num;
 } while (num != 0);
 printf("합계 : %d \n", total);
 
 }*/
/*#include <stdio.h>
 int main()
 {
 int num = 0, total = 0;
 do
 {
 num++;
 if (num % 2 == 0) {
 total += num;
 }
 }
 while (num >= 0 && num <= 100);
 printf("합계: %d \n", total);
 }
 */
/*#include <stdio.h>
 int main()
 {
 int cur = 2;
 int is = 0;
 do
 {
 is = 1;
 
 while (is < 10)
 {
 printf("%d * %d = %d \n", cur, is, cur*is);
 
 is++;
 }
 cur++;
 
 } while (cur < 10);
 }*/
/*#include <stdio.h>
 int main()
 {
 int total = 0;
 int i, num;
 printf("0부터 num까지의 덧셈 , num은? ");
 scanf("%d", &num);
 
 for (i = 0; i < num + 1; i++)
 {
 total += i;
 printf("0부터 %d까지 덧셈결과: %d \n", num, total);
 }
 }
 */
/*#include <stdio.h>
 int main()
 {
 double total = 0.0;
 double input = 0.0;
 int num = 0;
 for ( ; input >= 0.0; ) {
 total += input;
 printf(" 실수 입력(minus to quit) : ");
 scanf("%lf", &input);
 num++;
 
 }
 printf("평균: %lf \n", total / (num - 1));
 }*/


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
 
 (/*nSelect = input <= 10 ? 10 : 20 ;)
 
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
/*#include <stdio.h>
 void Add(int val);
 int num;//전역변수는 기본 0으로 초기화됨
 
 int main(void)
 {
 printf("num: %d \n", num);
 Add(3);
 printf("num : %d \n", num);
 num++;//전역변수 num의 값 1 증가
 printf("num : %d \n", num);
 }
 
 void Add(int val)
 {
 num += val;//전역변수 num의 값 val만큼 증가
 }*/

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
//p.248 3번 문제!!!! 다시 풀기 ㅜㅜ
/*#include <stdio.h>
 
 int GCM(int num1, int num2);
 
 int main()
 {
 int num1, num2;
 
 printf("두 개의 정수를 입력하시오: ");
 scanf("%d %d", &num1, &num2);
 
 printf("GCM: %d", GCM(num1, num2));
 return 0;
 
 }
 
 int GCM(int num1, int num2) {
 int result;
 result = num1;
 while (num1%result != 0 || num2%result != 0)
 result--;
 return result;
 }
 */
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
/*#include <stdio.h>
 int main()
 {
 int arr1[5] = { 1,2,3,4,5 };
 int arr2[] = { 1,2,3,4,5,6,7 };
 int arr3[5] = { 1,2 };
 int ar1Len, ar2Len, ar3Len,i;
 
 printf("배열 arr1 의 크기: %d \n", sizeof(arr1));
 printf("배열 arr2 의 크기: %d \n", sizeof(arr2));
 printf("배열 arr3 의 크기: %d \n", sizeof(arr3));
 
 ar1Len = sizeof(arr1) / sizeof(int);//배열 arr1 의 길이 계산
 
 ar2Len = sizeof(arr2) / sizeof(int);//배열 arr2 의 길이 계산
 
 
 ar3Len = sizeof(arr3) / sizeof(int);//배열 arr3 의 길이 계산
 
 
 for (i = 0; i < ar1Len; i++)
 printf("%d", arr1[i]);
 printf("\n");
 
 for (i = 0; i < ar2Len; i++)
 printf("%d", arr2[i]);
 printf("\n");
 
 for(i = 0; i < ar3Len; i++)
 printf("%d", arr3[i]);
 printf("\n");
 
 }*/
//문장 쓸때 ch로 하나씩 넣는데 마지막에 null문자 넣어서 원래 갯수+1
/*#include <stdio.h>
 int main()
 {
 int a[5] = { 30,40,10,50,20 };
 char b[6] = { 'H','e','l','l','o','\0' };
 char c[] = { "Hello" };
 char *d = "Hello";
 
 for (int i = 0; i < 5; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
 puts(b);
 puts(c);
 puts(d);
 }
 */


//
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
//    (*pnum) += 30;
//    pnum = &num2;
//    (*pnum) -= 30;
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
//    int * ptr = &arr[0];
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

#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;
    
    int *ptrArr[] = {ptr1, ptr2, ptr3};
    int **dptr = ptrArr;
    
    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
    
}
//int main() {
//    int a = 10, b = 3;
//    printf("%d %d\n", a--, --a);
//    printf("%d %d\n", ++b, b++);
//    return 0;
//}


