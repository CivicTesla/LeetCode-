#include <iostream>
#include <algorithm>
#include <vector>
#include "../../include/test/timeTest.h"
#include "../../include/breaknine/print.h"
using namespace std;

//! �������루Hamming distance����������������֮�䲻ͬλ�ĸ�������
class Solution {
public:
    //t O()|O()
    int hammingDistance(int x, int y)
    {
        int diff = x ^ y, ans = 0;// ^��������������ͬ����1
        while (diff)//��0��true
        {
            print("------��n��ѭ��------");
            ans += diff & 1;// and �����,11Ϊ1������Ϊ0��Ŀ�ģ�������һλ�Ƿ�Ϊ1������ans++
            diff >>= 1;// ����1λ�����һλ�ѱ���⣬������������shileѭ�������һλ��ֱ��diffΪ0��
        }
        return ans;
    }
};

// ����
TimeTEST(test_1)
{
    std::cout << "this is test_1" << std::endl;
    //* ��ʵ����
    Solution solve;
    // * ------��ʾ�������
    print(solve.hammingDistance(1,4));//1bin:0001,4bin:0100
}