/*
//구조체 멤버 자료로 학번, 이름 및 점수를 가지는 구조체 배열을 정의하고, 10명의 //학생에 대한 성적 자료를 각각 키보드로 입력하여 정의된 구조체 배 열에 저장하시오. //그리고 전체 총점과 평균 점수를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#define COL 10
using namespace std;

struct student{
  int num;
  char name[COL] = {};
  int grade;  
};

//double CAL(student S);

//double CAL(student S) {
//  int sum = 0;
//  sum += S.grade;
  
//}


int main() {
  student STU[COL];
  int sum = 0;

  for(int i = 0; i < COL; i++) {
    cout << "학번, 이름, 점수순으로 입력하세요: ";
    cin >> STU[i].num >> STU[i].name >> STU[i].grade;
    cin.ignore();
    sum += STU[i].grade;
  }
  cout << "총점: " << sum << "\n" << "평균점수: " << sum/COL << endl;
  return 0;
}
*/