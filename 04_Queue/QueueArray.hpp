#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

template <typename T, int size = 100>
class QueueArray
{
public:
	QueueArray();

	int 		length() const;
	bool 		empty() const;
	bool 		full() const;
	void 		print() const;
	void 		clear();

	void 		enqueue(const T& val);
	// Throws std::out_of_range exception
	const T&	dequeue();
	const T&	front(); // Return the first element in the queue

private:
	T data[size]; // an array of 100 elements
	int queue_size;
	int front_idx;
	int back_idx;
};

#endif