
template <class T> Queue<T>::Queue() = default;
template <class T> T Queue<T>::front() const { return _list.front(); }

template <class T> T Queue<T>::back() const { return _list.back(); }

template <class T> bool Queue<T>::empty() const { return _list.empty(); }

template <class T> int Queue<T>::size() const { return _list.size(); }

template <class T> void Queue<T>::push(T data) { _list.push_back(data); }

template <class T> void Queue<T>::pop() { _list.pop_front(); }
