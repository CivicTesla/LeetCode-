#include <iostream>
#include <algorithm>
#include <vector>
#include "../../include/test/timeTest.h"
using namespace std;

class Solution {
public:
    //t O()|O()
    vector<int> func0(vector<int> vec,int target){
    }
    int func1(vector<int> vec,int target){
    }
};

// 测试
int main() {

    //*构造一维数组
    vector<int> vec{2,7,11,15};
    int target = 1 ;
    //* 构造二维数组
    vector<vector<int>> vec{{1,0,1,1,0,1,0,1},{1,0,1,1,0,1,1,1},{0,0,0,0,0,0,0,1}};

    //* 类实例化
    Solution solve;
    
    // * ------显示整数结果
    cout << solve.func1(vec,target) << endl;

    // * ------显示整数结果结束
    // * ----------------------显示数组
    vector<int> vec =  solve.func0(vec,target);//调用func
    vector<int>::iterator ite = vec.begin();
	for (; ite != vec.end(); ite++){
		cout << *ite;
		cout << ",";
	}
    cout << endl;// * ----------------------显示数组结束
}