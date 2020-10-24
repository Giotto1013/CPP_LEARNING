// Lesson_05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "student.h"
using namespace std;



//void func(student tmpstu)   //形参为结构变量
//void func(student &tmpstu)      //形参使用引用
//{
//    tmpstu.number = 2000;
//    strcpy_s(tmpstu.name, sizeof(tmpstu.name), "who");
//    return;
//}

//void func(student* ptmpstu)
//{
//    ptmpstu->number = 2000;
//    strcpy_s(ptmpstu->name, sizeof(ptmpstu->name), "who");
//    return;
//
//}


int main()
{
    //一.结构回顾
    //结构 ：自定义数据类型
    student student1;   //定义一个结构变量，可省略struct
    student1.number = 100;
    strcpy_s(student1.name, sizeof(student1.name), "zhangsan");

    //cout << student1.number << endl;
    //cout << student1.name << endl;

    ////func(student1);     //直接传值效率低，因为实参传递给形参时，发生了内存内容的拷贝

    ////func(&student1);    //用指向结构体的指针做函数的参数

    //student1.func();    //调用成员函数

    //cout << student1.number << endl;    //student1的值没有被函数func改变
    //cout << student1.name << endl;



    //C++中的结构和C中的结构有什么区别
    //C++中的结构具备了C中结构中的所有功能，还增加了很多扩展功能
    //C++中的结构不仅仅有成员变量，还可以在其中定义成员函数(方法)


    //二. 权限修饰符 ：public, private, protected

    //public : 公有。用这个修饰符修饰 结构/类 中的成员变量/成员函数，就可以被外界访问
        //能够被外界访问。像该类的外部接口一样
    //private : 私有。用这个修饰符修饰 结构/类 中的成员变量/成员函数，只能被内部定义的成员函数使用

    //三.类
    //也是用户自定义的数据类型
    //1.不管C还是C++,结构用struct来定义
    //2.为方便理解，可看作是C语言中的结构
    //结构和类的区别
        //1.类这个概念，只在C++中才有，C中没有类这个概念
        //2.结构用struct定义，类用class定义
    //在C中，定义一个属于结构的变量，叫结构变量
    //在C++中定义一个属于类的变量，叫对象
        //都是一块能够存储数据并且具有某种类型的内存空间
        //c++中，结构和类及其相似
        //a).C++ 结构 内部的成员变量以及成员函数默认的访问权限是public
            //C++ 类 内部的成员变量以及成员函数默认的访问权限是private
        //b).C++ 结构体 继承默认都是public
            //C++ 类 继承默认都是private

    
    //四.类的组织 ：书写规范
    //类的定义代码写在头文件 .h 中, 头文件名可以与类名相同 ：student.h
    //类的具体实现代码，放在 .cpp 中 : student.cpp

    return 0;
}

