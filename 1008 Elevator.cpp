#include <iostream>
using namespace std;

int main()
{
    int N, total, preFloor, newFloor;   // total 为总花费时间，preFloor 为当前楼层, newFloor 为要去的楼层
    cin >> N;
    total = preFloor = 0;
    while (N--) {
        cin >> newFloor;
        if (newFloor > preFloor)
            total += (newFloor - preFloor) * 6 + 5;
        else total += (preFloor - newFloor) * 4 + 5;
        preFloor = newFloor;
    }
    cout << total;

    return 0;
}
