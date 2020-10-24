
//#include <cstdio>
#include "project3.h"

#include <iostream>	//头文件且无扩展名

using namespace lisi;

//同名实体：同名函数；同名变量；同名的类定义


//张三的函数
namespace zhangsan	//定义命名空间
{
	void radius()
	{
		printf("张三的radius\n");
	}

}

struct student
{
	char name[100];
	int number;
};

int main() {
	
	/**
	* 一. 命名空间简介
	* 为防止名字冲突而引进的机制
	* 系统中可定义多个命名空间
	* 每个命名空间有自己的名字，不可重复
	* 可看作作用域，在该命名空间中定义函数，在另一个命名空间中即使定义同名的函数或变量，也不会影响
	* （1）定义：
	* namespace [命名空间名]
	* {
	*	....
	*  }
	* 
	* （2）命名空间的定义可以不连续，甚至可以写在多个文件中
	* 若没有定义这个命名空间，那么 namespace [命名空间名] 会创建一个namespace
	* 若已经定义了该namespace, namespace [命名空间名] 相当于打开已经存在的命名空间，并为其添加新成员的声明
	* 
	* （3）外部如何访问某个命名空间中的radius()方法
	* 格式 ： [命名空间名]::实体名		:: -> 作用域运算符
	* OR
	* using namespace [命名空间名]
	*/
	
	//zhangsan::radius();
	////lisi::radius();
	//radius();
	//radius2();

	/*
	* 基本输入输出cin, cout
	* c++中，使用C++标准库进行输入输出
	* iostream : 输入 输出流
	* 流 ： 字符序列
	
	*/

	//std::cout 基本输出
	//std::cout << "welcome to study C++ !!\n";

	/*
	* (1).std:: 命名空间, 标准库命名空间
	* (2).cout 一个对象，向控制台输出, 标准输出对象
	* (3).<< 输出运算符
	* (4).\n 换行符
	*/

	//int x = 3;
	////std::cout << x << "的平方为" << x * x << "\n";
	//std::cout << x << "的平方为" << x * x << std::endl;
	//x++;
	//std::cout << x << "的平方为" << x * x << std::endl;

	//std::endl : 模板函数名，相当于函数指针
	//能看到std::cout的时候，一般都能看到std::endl
	//作用：
	//（1）输出换行符 \n
	//（2）强制刷新输出缓冲区, 缓冲区中所有数据都被系统清除了
			//输出缓冲区 ：一段内存， cout是向输出缓冲区输出内容
			//输出缓冲区什么时候把内容输出到屏幕上
			//a). 缓冲区满了
			//b). 程序执行到main() return
			//c). 调用std::endl, 强制刷新输出缓冲区 ： 把缓冲区的内容往屏幕上写
			//d). 当系统不太繁忙时，系统会查看缓冲区内容，将新内容输出到屏幕

	//ostream &std::cout.operator<<()  //定义， << 返回一个写入了给定值的cout对象

	//int i = 3;
	//std::cout << i-- << i-- << std::endl;	//结果为2， 3
	////避免在一个表达式中超过一次的改变变量值


	/*
	* std::cin : 标准输入
	* 
	*/
	std::cout << "请输入两个数" << std::endl;
	int value1 = 0, value2 = 0;
	std::cin >> value1 >> value2;
	std::cout << value1  <<  "和" << value2 << "相加结果为" << value1 + value2 << std::endl;
	/*
	* 1. cin 也是一个iostream对象，标准输入
	* 2. >> 输入运算符（运算符重载）
	* 3. 返回其左侧运算对象作为其运算结果
	*/
	
	return 0;
}