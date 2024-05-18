#include<iostream>
#include<string>
using namespace std;
int main()
{
    // 使用字符数组来定义月份名称  
    const char* MONTHS_ARRAY[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // 使用字符数组  
    std::cout << "Using char array:\n";
    for (int i = 0; i < 12; ++i) {
        std::cout << i + 1 << ": " << MONTHS_ARRAY[i] << "\n";
    }


    // 创建一个指针数组来存放月份的指针  
    const char* MONTH_PTRS[12];
    for (int i = 0; i < 12; ++i) {
        // MONTHS_ARRAY[i]的每个元素都是指向字符数组（C风格字符串）的指针  
        MONTH_PTRS[i] = MONTHS_ARRAY[i];
    }

    // 使用指针数组  
    std::cout << "\nUsing pointer array:\n";
    for (int i = 0; i < 12; ++i) {
        std::cout << i + 1 << ": " << MONTH_PTRS[i] << "\n";
    }

    // 使用行指针（本质上是指向字符的指针，这里我们使用已定义的MONTHS_ARRAY）  
    // MONTHS_ARRAY 本身就是一个行指针（指针数组），所以上面的代码已经演示了这个概念  

    // 使用指向指针的指针  
    const char** MONTH_PPTR = MONTH_PTRS;
    std::cout << "\nUsing pointer to pointer:\n";
    for (int i = 0; i < 12; ++i, ++MONTH_PPTR) {
        std::cout << i + 1 << ": " << *MONTH_PPTR << "\n";
        // 这里，MONTH_PPTR是指向MONTH_PTRS中元素的指针，我们通过解引用它来获取月份名称  
    }

	return 0;
}