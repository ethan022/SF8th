﻿// 0409.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

// 참조(Reference) 



void change(int& y) {
	y = 100;
}

// 오버로딩(Overloading)
// 함수 이름이 같지만 매개변수나 타입 달라야 합니다.
void add(int x) {
	cout << "첫번째 함수" << endl;
	x += 10;
	cout << "func의 x :" << x << endl;
}

int add(int x, int y) {
	cout << "두번째 함수" << endl;
	return x + y;
}

int add(float x, float y) {
	cout << "세번째 함수" << endl;
	return x + y;
}

int main()
{
	float x = 10.1;
	float y = 20.2;
	add(x, y);

	// 참조(Reference) 별칭! 
	//int x = 10;
	//int& ref = x;

	//cout << "x :" << x << endl;
	//cout << "ref :" << ref << endl;

	//change(x);
	//cout << "x :" << x << endl;

	//ref = 20;
	//x=30;

	//cout << "x :" << x << endl;
	//cout << "ref :" << ref << endl;
	
	//add(x);
	//cout <<"main의 x :" << x << endl;


}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
