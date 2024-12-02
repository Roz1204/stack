    #ifndef STACK
    #define STACK

    #include "vector.hpp"

    template <typename T>
    class Stack : private Vector<T>
    {
        public:
            ~Stack();
            Stack();
            Stack<T>& operator=( const Stack<T>& other );
            const T& top() const;
            bool empty() const;
            int size() const;
            void push(const T& value);
            void swap(Stack& other ) noexcept;
            void push(T&& value);
            void pop();

            // Added for testing
            constexpr T& operator[](int index) const;
    };

    template <typename T>
    constexpr T& Stack<T>::operator[](int index) const
    {
        return Vector<T>::operator[](index);
    }

    template <typename T>
    void Stack<T>::swap(Stack& other) noexcept 
    {
        Stack<T> tmp = *this;
        *this = other;
        other = tmp;
    }

    template <typename T>
    Stack<T>& Stack<T>::operator=(const Stack<T>& other)
    {
        if (this == &other)
        {
            return *this;
        }
        Vector<T>::operator=(other);  // Assign the base Vector<T> part

        return *this;
    }

    template <typename T>
    void Stack<T>::pop()
    {
        Vector<T>::pop_back();
    }

    template <typename T>
    void Stack<T>::push(T&& value)
    {
        Vector<T>::push_back(value);
    }

    template <typename T>
    void Stack<T>::push(const T& value)
    {
        Vector<T>::push_back(value);
    }

    template <typename T>
    int Stack<T>::size() const
    {
        return Vector<T>::size();
    }

    template <typename T>
    const T& Stack<T>::top() const
    {
        return *(Vector<T>::end());
    }

    template <typename T>
    bool Stack<T>::empty() const
    {
        return Vector<T>::empty();
    }

    template <typename T>
    Stack<T>::Stack()
    {
    // Vector<T>::Vector(capacity);
    }

    template <typename T>
    Stack<T>::~Stack()
    {
    // Vector<T>::~Vector();
    }

    #endif