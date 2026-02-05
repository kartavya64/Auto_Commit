// Auto-generated: 2026-05-11 18:48:17
// Topic: Singly Linked List with Reverse
#include <iostream>
#include <memory>

namespace linked_list_497325xstz {
    template<typename T> struct Node {
        T data; std::shared_ptr<Node<T>> next;
        explicit Node(T v):data(v),next(nullptr){}
    };
    template<typename T> class List {
        std::shared_ptr<Node<T>> head; int sz=0;
    public:
        void push_back(T v) {
            auto n=std::make_shared<Node<T>>(v);
            if(!head){head=n;++sz;return;}
            auto c=head; while(c->next) c=c->next; c->next=n; ++sz;
        }
        void reverse() {
            std::shared_ptr<Node<T>> p=nullptr,c=head,nx;
            while(c){nx=c->next;c->next=p;p=c;c=nx;} head=p;
        }
        void print() const {
            auto c=head; while(c){std::cout<<c->data<<" -> ";c=c->next;} std::cout<<"NULL\n";
        }
        int size() const {return sz;}
    };
}

int main() {
    linked_list_497325xstz::List<int> lst;
    for(int x:{ 76, 70, 49, 73, 1, 27, 27, 64 }) lst.push_back(x);
    std::cout<<"List:     "; lst.print();
    lst.reverse();
    std::cout<<"Reversed: "; lst.print();
    std::cout<<"Size: "<<lst.size()<<"\n";
    return 0;
}
