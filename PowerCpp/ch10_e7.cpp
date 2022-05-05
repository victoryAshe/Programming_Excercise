#include <string>
#include <iostream>
using namespace std;

/*
* Visual Studio 2017~ 버전에서는 오류가 발생한다.
* (strcpy->strcpy_s, char* -> string 변경 강제)
* 이 소스를 그대로 사용하기 위해서는 아래의 설정이 추가로 필요하다.
* 1. 전처리기 속성 작성: 프로젝트 > 속성> C++ > 전처리기 > _CRT_SECURE_NO_WARNINGS
* 2. 속성 변경: 프로젝트 > 속성 > 언어> 준수모드 > 아니오(/permissive)
*/

class Car
{
	int speed; int gear; char* colour;		// 속도, 기어, 색상
public:
	Car(int s, int g, char* c)				// 생성자
	{
		speed = s; gear = g;
		colour = new char[strlen(c) + 1];	// ★ 동적 메모리 할당
		strcpy(colour, c);					// 메모리 할당한 char 배열에 c를 복사
	}

	~Car()									// ★ 소멸자: 동적 메모리를 반납해야 함!
	{
		delete[] colour;
	}
};
/*
void main()
{
	Car c(0, 1, "yellow");
	return;									// 프로그램 종료 시 자동으로 소멸자가 호출됨
}
*/
