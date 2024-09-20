/*
[ 아래의 순서대로 문제 해결 ]

# 서술형수행평가와 동일한 방식임.

1. 코드 정리 : [Tab]키
2. 노트북 정보를 배열에 저장(타입 주의) : 번호,이름, 브랜드, 가격, 무게
	가. 무게 : 실수형, 1차원 배열
	나. 번호, 가격 : 정수형, 2차원 배열
	다. 이름 : 문자, 2차원 배열
	라. 브랜드 : 문자, 2차원 배열
3. 입력에 따른 검색 결과 찾기 : 반복문 이용
4. 함수 작성 : 제목 위아래 라인 작성, 타입에 따른 모양 및 문자의 갯수 설정
	line(10, '-');		//'-' 문자를 10개 출력함.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  char Name[100], Brand[100];
  int id, price, weight,a;

  printf("♣노트북 검색포털♣\n");
  printf("\n1.Lg\n2.삼성\n3.레노버\n4.Hp\n5.델\n6.ASUS\n7.MSI\n8.기가바이트\n9.레이저\n10.마이크로소프트\n11. 종료\n\n");
  while(1){

  printf("\n원하는 번호를 입력하세요 가장 가성비 좋은 노트북 : ");
  scanf("%d",&id);

  printf("\nId\tname\t\tprice\t\tweight\t\tBrand\n");



  if(id==1){
    printf("1\tLg그램\t\t150만원\t\t1.1kg\t\tLg");
  }
  else if(id==2){
    printf("2\t삼성Odyssey\t300만원\t\t3.4kg\t\t삼성");
  }
  else if(id==3){
    printf("3\tregion5\t\t120만원\t\t2.6kg\t\t레노버");
  }
  else if(id==4){
    printf("4\telite북\t\t110만원\t\t2.5kg\t\tHP");
  }
  else if(id==5){
    printf("5\t인스피론\t150만원\t\t2.6kg\t\t델");
  }
  else if(id==6){
    printf("6\t비보북S\t\t140만원\t\t2.7kg\t\tASUS");
  }
  else if(id==7){
    printf("7\t프레스티지\t250만원\t\t1.9kg\t\tMSI");
  }
  else if(id==8){
    printf("8\t어로스X\t\t230만원\t\t3.1kg\t\t기가바이트");
  }
  else if(id==9){
    printf("9\t레이저S.T\t170만원\t\t2.4kg\t\t레이저");
  }
  else if(id==10){
    printf("10\t서피스 프로\t160만원\t\t2.0kg\t\t마이크로소프트");
  }
  else if(id==11){
    break;
  }
}
  printf("종료되었습니다.");
  return 0;
}