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
		//cout << a; // private ��� ���� �Ұ�
		cout << b << endl; 
		cout << c << endl;
	}��
};
class Derived2: protected Base{
public:
	void print() {
		//cout << a; // private ���� �Ұ�
		cout << b << endl;
		cout << c << endl;
	}
};
class Derived3: public Base {
public:
	void print() {
		//cout << a; // private ���� �Ұ�
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
	d3.print(); //2 3 2 3 2 3 ���
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
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};

// �ڽ� Ŭ���� (�Ļ� Ŭ����)
class Student : public Person {
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}

	void study() {
		cout << name << " �л��� " << major << " ���� ���� ���Դϴ�." << endl;
	}
};

int main() {
	Student s("ȫ�浿", 21, "��ǻ�Ͱ���");
	s.show();   // �θ� Ŭ���� �Լ� ���, ��� :�̸�: ȫ�浿, ����: 21
	s.study();       // �ڽ� Ŭ���� �Լ� ���, ��� : ȫ�浿 �л��� ��ǻ�Ͱ��� ���� ���� ���Դϴ�.
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
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};

// �ڽ� Ŭ���� (�Ļ� Ŭ����)
class Student : public Person {
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}
	void show() { // �θ� Ŭ������ protected ��� �Լ� ����, introduce()�� ���������ڰ� protected�� �θ� Ŭ�����Ӹ� �ƴ϶� �ڽ� Ŭ���������� ���� ����
		introduce();
	}

	void study() {
		cout << name << " �л��� " << major << " ���� ���� ���Դϴ�." << endl;
	}
};

int main() {
	Student s("ȫ�浿", 21, "��ǻ�Ͱ���");
	s.show();   // �θ� Ŭ���� �Լ� ���
	s.study();       // �ڽ� Ŭ���� �Լ� ���
	return 0;
}
*/
/*
//�ڽ� Ŭ���� ���� ������ public���� private�� �ٲٱ�
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};

// �ڽ� Ŭ���� (�Ļ� Ŭ����)
class Student : private Person {   //�ڽ� Ŭ���� ���� ������ public���� private�� �ٲٱ�
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}
	
	void show() { // �θ� Ŭ������ public ��� �Լ� ����
		introduce();
	}
	void study() {
		cout << name << " �л��� " << major << " ���� ���� ���Դϴ�." << endl;
	}
};

int main() {
	Student s("ȫ�浿", 21, "��ǻ�Ͱ���");
	s.show();   // �θ� Ŭ���� �Լ� ���
	s.study();       // �ڽ� Ŭ���� �Լ� ���
	return 0;
}*/

/*
//�ڽ� Ŭ���� ���� ������ public���� protected�� �ٲٱ�
class Person {
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};

// �ڽ� Ŭ���� (�Ļ� Ŭ����)
class Student : protected Person {   //�ڽ� Ŭ���� ���� ������ public���� private�� �ٲٱ�
private:
	string major;

public:
	Student(string n, int a, string m) : Person(n, a), major(m) {}

	void show() { // �θ� Ŭ������ public ��� �Լ� ����
		introduce();
	}
	void study() {
		cout << name << " �л��� " << major << " ���� ���� ���Դϴ�." << endl;
	}
};

int main() {
	Student s("ȫ�浿", 21, "��ǻ�Ͱ���");
	s.show();   // �θ� Ŭ���� �Լ� ���
	s.study();       // �ڽ� Ŭ���� �Լ� ���
	return 0;
}// protected�� private�� ��������?
 // protected�� �ڽ� Ŭ�������� ���� ����, private�� �ڽ� Ŭ�������� ���� �Ұ�
*/
class Animal {
public:
	virtual void speak() {  
		cout << "������ �Ҹ��� ���ϴ�." << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "�۸�!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		cout << "�߿�!" << endl;
	}
};

int main() {

	Animal a1;
	Dog a2;
	Cat a3;

	a1.speak();
	a2.speak();
	a3.speak();

	return 0;
}
// Cat Dog 
// Animal a = b;
/*
class Animal {
public:
	virtual void speak() {  // ���� �Լ��� ����
		cout << "������ �Ҹ��� ���ϴ�." << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "�۸�!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		cout << "�߿�!" << endl;
	}
};

int main() {

	Animal a1;
	Dog a2;
	Cat a3;

	a1.speak();
	a2.speak();
	a3.speak();

	Dog b;
	Animal a = b;   // ��ü �����̽� �߻�!

	a.speak();  // Animal�� speak() ȣ���
	b.speak();  // Dog�� speak() ȣ���

	return 0;
}*/