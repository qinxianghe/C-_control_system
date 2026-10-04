#include <iostream>
#include "Manger.h"
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"

using namespace std;

int main() {
    Manger manager;
    manager.readFile_stu(); // 程序启动时读取学生文件
    manager.readFile_tea(); // 程序启动时读取教师文件

    // 显示主菜单或其他操作
    manager.menu_main(); 

    return 0;
}
