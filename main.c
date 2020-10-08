#include <stdio.h>
#include <stdbool.h>
/**
  1.创建本地仓库 （空的）
  2.将当前默认工程提交（commit）到本地仓库
  3.将本地仓库分享到github中   远程仓库

 */

/**
 为什么需要这个东西
 只能存储一个数据
 int a = 10;
 float score = 89.5
 long size = 221

 如果需要存储多个数据 -》 数组
 1.C语言的数组只能存放同一种类型
   如果定义的数组类型是int 那么这个数组只能存放int类型的数据
 2.数组的定义特点  ：[ ]
 3.定义数组时必须明确知道数组元素的个数
    系统为这个变量分配内存空间时必须明确知道这个变量占据多少内存空间
    如果是系统基本类型：int float long double char bool short系统定义好了
    自己定义数组时，系统不知道你要放多少个元素，无法确定数组内存空间
    a.定义时明确指定元素的个数
      float height[10];
    b.不指定元素个数，通过初始化来计算
      int ages[] = {1,2,3,4,5};
    c.明确指定元素个数，并且初始化元素
      float scores[5] = {80,90}; //80 90 0 0 0
 */
int main() {
    int a = 10;
    float heights[10];

    int ages[] = {1,2,3,4,5};

    float scores[5] = {80,90}; //80 90 0 0 0

    return 0;
}


