#include	<iostream>
using namespace std;

const float PI = 3.14159265f;

struct Circle {
    float  radius, cx, cy;
};

struct Rectangle {
    float  x1, y1;	// 좌측 하단의 꼭짓점 좌표
    float  x2, y2;	// 우측 상단의 꼭짓점 좌표
};

//직사각형 데이터 입력
void inputData(Rectangle &r){
	cout << "좌측 하단 좌표(x1,y1)";
	cin >> r.x1 >> r.y1;
	cout << "우측 상단 좌표(x2,y2)";
	cin >> r.x2 >> r.y2;
}

//직사각형 데이터 출력
void prData(Rectangle &r) {
	float res = (r.x2-r.x1)*(r.y2-r.y1);
	cout << "넓이 : " << res << endl;
}



// 원의 데이터 입력
void inputData(Circle &c)  // 함수 머리부
{
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표(x) : ";
	cin >> c.cx;
	cout << "중심좌표(y) : ";
	cin >> c.cy;
}

// 원의 데이터 출력
void prData(Circle &c)  // 함수 머리부
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}
 int area(Circle &c)
{
    return PI * c.radius * c.radius;
}

int main() {
	// Circle circle = {1, 2, 3};
	// inputData(circle);
	// cout << "입력된 원의 정보" << endl;
	// prData(circle);
	// cout << "원의 면적 = " << area(circle) << endl;

	Rectangle rect = {1.0, 2.0, 4.0, 5.0}; // 예시 직사각형
	prData(rect); // 직사각형 데이터 출력 및 넓이 계산
}
