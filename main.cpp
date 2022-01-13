#include <QCoreApplication>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> n_vec = {10, 15, 20, 25, 30};

    n_vec.push_back(35);
    n_vec.pop_back();

    for(auto it = n_vec.begin(); it != n_vec.end(); it++)
    {
        if(*it > 20)
        {
            n_vec.erase(it);
            it--;
        }
    }

    for(auto it = n_vec.begin(); it != n_vec.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    n_vec.reserve(10);

    cout << "vector size: " << n_vec.size() << endl;
    cout << "vector capacity: " << n_vec.capacity() << endl;

    n_vec.shrink_to_fit();

    cout << "vector size after shrink_to_fit: " << n_vec.size() << endl;
    cout << "vector capacity after shrink_to_fit: " << n_vec.capacity() << endl;

    int array[5] = {1, 2, 3, 4, 5};

    for(int it : array)
    {
        cout << it << " ";
    }

    cout << endl;

    list<string> s_list;
    s_list.emplace_back("the list");
    s_list.emplace_front("This is");

    for(auto it = s_list.begin(); it != s_list.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    forward_list<string> s_flist;
    s_flist.emplace_front("This is");
    s_flist.emplace_after(s_flist.begin(), "the forward_list");

    for(auto it = s_flist.begin(); it != s_flist.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    deque<int> n_deque;
    n_deque.push_back(5);
    n_deque.push_front(0);
    n_deque.push_back(10);
    n_deque.push_front(-5);
    n_deque.push_front(-5);

    for(int it : n_deque)
    {
        cout << it << " ";
    }
    cout << endl;

    n_deque.pop_back();
    n_deque.pop_front();

    for(int it : n_deque)
    {
        cout << it << " ";
    }

    cout << endl;

    queue<int> n_queue;
    n_queue.push(1);
    n_queue.push(2);
    n_queue.push(3);
    n_queue.push(4);

    unsigned size = n_queue.size();

    for(unsigned i = 0; i < size; i++)
    {
        cout << n_queue.front() << " ";
        n_queue.pop();
    }

    cout << endl;

    map<int, string> map;

    map.emplace(0, "Zero");
    map.emplace(1, "One");
    map.emplace(2, "Two");

    for(unsigned i = 0; i < map.size(); i++)
    {
        cout << map[i] << " ";
    }

    cout << endl;


    return a.exec();
}
