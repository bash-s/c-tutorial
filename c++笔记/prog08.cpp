#include<iostream>
#include<string>
using namespace std;
int main()
{
    // ʹ���ַ������������·�����  
    const char* MONTHS_ARRAY[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // ʹ���ַ�����  
    std::cout << "Using char array:\n";
    for (int i = 0; i < 12; ++i) {
        std::cout << i + 1 << ": " << MONTHS_ARRAY[i] << "\n";
    }


    // ����һ��ָ������������·ݵ�ָ��  
    const char* MONTH_PTRS[12];
    for (int i = 0; i < 12; ++i) {
        // MONTHS_ARRAY[i]��ÿ��Ԫ�ض���ָ���ַ����飨C����ַ�������ָ��  
        MONTH_PTRS[i] = MONTHS_ARRAY[i];
    }

    // ʹ��ָ������  
    std::cout << "\nUsing pointer array:\n";
    for (int i = 0; i < 12; ++i) {
        std::cout << i + 1 << ": " << MONTH_PTRS[i] << "\n";
    }

    // ʹ����ָ�루��������ָ���ַ���ָ�룬��������ʹ���Ѷ����MONTHS_ARRAY��  
    // MONTHS_ARRAY �������һ����ָ�루ָ�����飩����������Ĵ����Ѿ���ʾ���������  

    // ʹ��ָ��ָ���ָ��  
    const char** MONTH_PPTR = MONTH_PTRS;
    std::cout << "\nUsing pointer to pointer:\n";
    for (int i = 0; i < 12; ++i, ++MONTH_PPTR) {
        std::cout << i + 1 << ": " << *MONTH_PPTR << "\n";
        // ���MONTH_PPTR��ָ��MONTH_PTRS��Ԫ�ص�ָ�룬����ͨ��������������ȡ�·�����  
    }

	return 0;
}