// 0403.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

// 더하기 함수
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
// 빼기 함수
int subtract(int a, int b) {
    return a - b;
}

// 곱하기 함수
int multiply(int x, int y) {
    return x * y;
}

// 나누기 함수
double divide(int a, int b) {
    return static_cast<double>(a) / b;
}

// 홀짝 판별기
void checkOddEven(int num) {
    if (num % 2 == 0) {
        cout << "짝수입니다." << endl;
    }
    else {
        cout << "홀수입니다." << endl;
    }
}

// 최대값 찾기
int findMax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main()
{
    // 더하기 함수 호출
    int result1 = add(10, 20);
    cout << "10 + 20 = " << result1 << endl;

    // 빼기 함수 호출
    int result2 = subtract(10, 20);
    cout << "10 - 20 = " << result2 << endl;

    // 곱하기 함수 호출
    int result3 = multiply(4, 5);
    cout << "4 * 5 = " << result3 << endl;

    // 나누기 함수 호출
    double result4 = divide(10, 3);
    cout << "10 / 3 = " << result4 << endl;

    // 홀짝 판별기
    int num;
    cout << "숫자를 입력하세요 : ";
    cin >> num;
    checkOddEven(num);

    // 최대값 찾기
    int maxNum = findMax(10, 20, 30);
    cout << "최대값 : " << maxNum << endl;


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
