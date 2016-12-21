#include<vector>
using namespace std;

//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
//例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
//NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        //assert(!rotateArray.empty());
        const int len=rotateArray.size();
        int low=0;
        int high=len-1;
        int mid=0;
        while(low<high){
            mid=low+(high-low)/2;
          	if(mid==low)
                return rotateArray[high];
            if(rotateArray[mid]>=rotateArray[low]){
                low=mid;//最小值在low+1到high之间。
            }
            else if(rotateArray[mid]<rotateArray[low]){
                high=mid;
            }
        }
        return rotateArray[low]; 
    }
};