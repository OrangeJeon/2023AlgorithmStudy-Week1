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
        if (num > 0)//����̸�
        {
            if (q.size() < N)//ũ�⸦ ���ϰ�
                q.push(num);//ť�� �ִ´�.
        }
        if (num == 0)
            q.pop();
    }
    if (q.empty())
        cout<<"�������"<<endl;
    else
        while (!q.empty())
        {
            cout<<q.front()<<' ';
            q.pop();
        }
}