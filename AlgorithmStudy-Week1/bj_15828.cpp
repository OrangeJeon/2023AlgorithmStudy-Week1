#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num;
    queue<int> q;

    while (true)
    {
        cin >> num;
        if (num == -1)
            break;
        if (num > 0)//양수이면
        {
            if (q.size() < N)//크기를 비교하고
                q.push(num);//큐에 넣는다.
        }
        if (num == 0)
            q.pop();
    }
    if (q.empty())
        cout<<"비어있음"<<endl;
    else
        while (!q.empty())
        {
            cout<<q.front()<<' ';
            q.pop();
        }
}