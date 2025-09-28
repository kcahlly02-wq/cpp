#include <iostream>
#include <string>
using namespace std;

// 9/23
/*class Base {
private:
	int a = 1;
public:
	int b = 2;
protected:
	int c = 3;
};
class Derived1: private Base{
public:
	void print() {
		//cout << a; // private 멤버 접근 불가
		cout << b << endl; 
		cout << c << endl;
	}ㅊ
};
class Derived2: protected Base{
public:
	void print() {
		//cout << a; // private 접근 불가
		cout << b << endl;
		cout << c << endl;
	}
};
class Derived3: public Base {
public:
	void print() {
		//cout << a; // private 접근 불가
		cout << b << endl;
		cout << c << endl;
	}
};
int main()
{

	Derived1 d1;
	Derived2 d2;
	Derived3 d3;
	d1.print();
	d2.print();
	d3.print(); //2 3 2 3 2 3 출력
	return 0;
}*/
/*
// private introduce() 
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}
	void show() {
		introduce();
	}
private:
	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}

	void study() {
		cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
	}
};

int main() {
	Student s("홍길동", 21, "컴퓨터공학");
	s.show();   // 부모 클래스 함수 사용, 출력 :이름: 홍길동, 나이: 21
	s.study();       // 자식 클래스 함수 사용, 출력 : 홍길동 학생이 컴퓨터공학 전공 공부 중입니다.
	return 0;
}
*/
/*
// protected introduce()
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

protected:
	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}
	void show() { // 부모 클래스의 protected 멤버 함수 접근, introduce()의 접근지정자가 protected라 부모 클래스뿐만 아니라 자식 클래스에서도 접근 가능
		introduce();
	}

	void study() {
		cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
	}
};

int main() {
	Student s("홍길동", 21, "컴퓨터공학");
	s.show();   // 부모 클래스 함수 사용
	s.study();       // 자식 클래스 함수 사용
	return 0;
}
*/
/*
//자식 클래스 접근 지정자 public에서 private로 바꾸기
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스 (파생 클래스)
class Student : private Person {   //자식 클래스 접근 지정자 public에서 private로 바꾸기
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}
	
	void show() { // 부모 클래스의 public 멤버 함수 접근
		introduce();
	}
	void study() {
		cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
	}
};

int main() {
	Student s("홍길동", 21, "컴퓨터공학");
	s.show();   // 부모 클래스 함수 사용
	s.study();       // 자식 클래스 함수 사용
	return 0;
}*/

/*
//자식 클래스 접근 지정자 public에서 protected로 바꾸기
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스 (파생 클래스)
class Student : protected Person {   //자식 클래스 접근 지정자 public에서 private로 바꾸기
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}

	void show() { // 부모 클래스의 public 멤버 함수 접근
		introduce();
	}
	void study() {
		cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
	}
};

int main() {
	Student s("홍길동", 21, "컴퓨터공학");
	s.show();   // 부모 클래스 함수 사용
	s.study();       // 자식 클래스 함수 사용
	return 0;
}// protected랑 private는 차이점이?
 // protected는 자식 클래스에서 접근 가능, private는 자식 클래스에서 접근 불가
*/
/*
class Animal { // 부모 클래스
public:
	virtual void speak() {  // virtual - 가상 함수 선언 
		cout << "동물이 소리를 냅니다." << endl; 
	}
};

class Dog : public Animal { // 자식 클래스
public:
	void speak() override { //  override - 부모의 virtual 함수를 재정의
		cout << "멍멍!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override { //  override - 부모의 virtual 함수를 재정의
		cout << "야옹!" << endl;
	}
};

int main() {

	Animal a1;
	Dog a2;
	Cat a3;

	a1.speak(); // Animal speak() 호출 - "동물이 소리를 냅니다."
	a2.speak(); // Dog speak() 호출 - "멍멍!"
	a3.speak(); // Cat speak() 호출 - "야옹!"

	return 0;
}
*/
// Animal a = b;
/*
class Animal {
public:
	virtual void speak() {  // virtual - 가상 함수 선언 
		cout << "동물이 소리를 냅니다." << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override { //  override - 부모의 virtual 함수를 재정의
		cout << "멍멍!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override { //  override - 부모의 virtual 함수를 재정의
		cout << "야옹!" << endl;
	}
};

int main() {

	Animal a1;
	Dog a2;
	Cat a3;

	a1.speak(); // Animal speak() 호출 - "동물이 소리를 냅니다."
	a2.speak(); // Dog speak() 호출 - "멍멍!"
	a3.speak(); // Cat speak() 호출 - "야옹!"

	Dog b;
	Animal a = b;   // a는 Animal 객체, b는 Dog 타입의 객체 

	a.speak();  // Animal의 speak() 호출됨
	b.speak();  // Dog의 speak() 호출됨

	return 0;
}*/
