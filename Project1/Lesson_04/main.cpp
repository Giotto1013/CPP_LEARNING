#include <iostream>
using namespace std;

int main()
{
	//一.范围for语句 ：用于遍历一个序列
	//int v[]{ 12,13,14,16,18 };
	////for (auto x : v)		//数组v中每个元素依次放入x中，并打印x的值。把v中每个元素拷贝到x中，打印x值
	//for(auto &x : v)		//x为v中每个元素的引用，省去拷贝动作，提高系统效率
	//{
	//	cout << x << endl;
	//}

	/*cout << "--------------------------------------------------------------" << endl;

	for (auto x : { 20,45,58,36 })
	{
		cout << x << endl;
	}*/

	//二.动态内存分配问题 ：c语言中供程序使用的存储空间，有程序区，静态存储区（全局变量），动态存储区（局部变量）
	//c++中，把内存分为5个区
	//1.栈 ：一般函数内的局部变量都会放在这里，由编译器自动分配和释放
	//2.堆 ：程序员malloc/new分配，用free/delete来释放。忘记释放后，在整个程序结束后系统会回收
	//3.全局/静态存储区 ：全局变量和静态变量。程序结束时系统释放
	//4.常量存储区 ："I love China"之类的
	//5.程序代码区

	//堆和栈不同的用途和区别
	//1.栈：空间是有限的，这是系统规定的，分配速度快，程序员无法控制
	//2.堆：只要不超出实际拥有的物理内存，也在操作系统允许你分配的最大内存大小之内，都可以进行分配
			//分配速度比栈满。可随时用new/malloc来分配，用完后用delete/free来释放这块内存。非常灵活

	//malloc和free : c语言中，使用malloc和free从堆中来分配和释放内存用。
		//malloc和free是函数
	//malloc (memory allocation) : 动态内存分配
	//一般形式：
	//void* malloc(int NumBytes); //NumBytes : 要分配的字节数，分配成功则返回指向被分配内存的指针，分配失败则返回NULL
	//当分配的内存不使用时，要用free()函数将内存释放掉，供其他地方使用
	//free :
	//void free(void* FirstByte);	//将之前用malloc分配的内存空间还给操作系统，即释放这块内存
	//这样这块内存就被系统回收，并在需要的时候再由系统分配出去给其他地方使用

	//int* p = NULL;	//c语言写法，等价于数字0
	//p = (int *)malloc(sizeof(int));	//在堆中分配4个字节
	//if (p != NULL)
	//{
	//	//分配成功
	//	*p = 5;
	//	cout << *p << endl;

	//	//释放指针
	//	free(p);
	//}

	//char* point = NULL;
	//point = (char *)malloc(100 * sizeof(char));
	//if (point != NULL)
	//{
	//	//strcpy(point, "hello world !");
	//	strcpy_s(point, 13, "hello world!");

	//	cout << point << endl;

	//	//释放
	//	free(point);
	//}

	//int* p = (int*)malloc(sizeof(int) * 100);	//分配可以放得下100个整数的内存空间
	//if (p != NULL)
	//{
	//	int* q = p;
	//	*q++ = 1;	//等价于 *(q++)  ==> *q = 1; q++;
	//	*q++ = 5;
	//	cout << *p << endl;	//1
	//	cout << *(p + 1) << endl;	//5


	//	free(p);
	//}


	//new和delete : 运算符（标识符）。c++中就使用new/delete来分配和释放内存，不再使用malloc和free
	//new/delete和malloc/free干了一样的事就是分配和释放内存，但同时new/delete还干了更多的事，
		//譬如分配类空间时会自动调用类的构造函数
	//new一般使用格式
	//格式一 ：指针变量名 = new 类型标识符;
	//格式二 ：指针变量名 = new 类型标识符(初始值); ：初始值用圆括号括起来，表示初始值
	//格式三 ：指针变量名 = new 类型标识符[内存单元个数];	//[]表示数组

	//int* myint = new int;
	//if (myint != NULL)
	//{
	//	*myint = 8;	//*myint指针指向的变量
	//	cout << *myint << endl;

	//	delete myint;
	//}

	//int* myint = new int(18);	//分配int空间时将初始值设为18
	//if (myint != NULL)
	//{
	//	cout << *myint << endl;

	//	delete myint;
	//}

int* pa = new int[100];	//开辟一个大小为100的整形数组空间
if (pa != NULL)
{
	int* q = pa;

	*q++ = 1;	//pa[0] = 1
	*q++ = 18;	//pa[1] = 18.执行完这行，q已经指向pa[2]

	cout << *pa << endl;
	cout << *(pa + 1) << endl;

	//释放内存
	delete[] pa;		//释放int pa数组空间
					//new时用了[], delete时也必须用[],[]中不写数组大小

}

//额外强调
//1.配对使用 ：malloc必须有free; new必须有delete
//free/delete 不要重复调用


//malloc/free 和 new/delete区别：
//new/delete和malloc/free干了一样的事就是分配和释放内存，但同时new/delete还干了更多的事，
		//譬如分配类空间时会自动调用类的构造函数，delete时会自动调用析构函数
	

	//nullptr : c++11中引入的新关键字
	//也代表空指针
char* p = NULL;	//实际是一个0值
char* q = nullptr;	//避免NULL与整型值的混淆
int* a = nullptr;
//int b = nullptr;	//语法错误
//if (p == nullptr)
//{
//	cout << "good" << endl;
//}
//
//if (q == NULL)
//{
//	cout << "q == NULL" << endl;
//}

//使用nullptr能够避免在整数和指针之间发生混淆
//NULL与nullptr实际上是不同的类型
//结论：对于指针的初始化，和大家以往用到的和指针有关的NULL的场合，能用nullptr的全部用nullptr替代

cout << typeid(NULL).name() << endl;
cout << typeid(nullptr).name() << endl;
	
	return 0;
}