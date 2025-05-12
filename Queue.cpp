#include <iostream>
using namespace std;

class Queue {
	private:
		int front, rear;
		int size;
		int* arr;

	public:
		Queue(int s) {
			size = s;
			arr = new int[size];
			front = rear = -1;
		}

		~Queue() {
			delete[] arr;
		}

		bool isFull() {
			return rear == size - 1;
		}

		bool isEmpty() {
			return front == -1 || front > rear;
		}

		void enqueue(int value) {
			if (isFull()) {
				cout << "Queue is full.\n";
				return;
			}
			if (front == -1) front = 0;
			arr[++rear] = value;
			cout << value << " enqueued.\n";
		}

		void dequeue() {
			if (isEmpty()) {
				cout << "Queue is empty.\n";
				return;
			}
			cout << arr[front] << " dequeued.\n";
			front++;
		}

		void display() {
			if (isEmpty()) {
				cout << "Queue is empty.\n";
				return;
			}
			cout << "Queue: ";
			for (int i = front; i <= rear; ++i)
				cout << arr[i] << " ";
			cout << endl;
		}
};

int main() {
	Queue q(5); // queue of size 5

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.display();

	q.dequeue();
	q.display();

	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60); // Should say queue is full
	q.display();

	return 0;
}

