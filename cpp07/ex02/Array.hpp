/**
 * @file Array.hpp
 * @author dcruz-na
 * @brief array header file
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class Array {
    private:
        T *_array;
        size_t _size;
    public:
        Array() : _array(NULL), _size(0) {};
        Array(unsigned int n) : _array(new T[n]), _size(n) {};
        Array(Array const &other) : _array(new T[other._size]), _size(other._size) {
            for (size_t i = 0; i < _size; i++)
                _array[i] = other._array[i];
        };
        ~Array() { delete [] _array; };
        Array &operator=(Array const &other) {
            if (this != &other) {
                delete [] _array;
                _array = new T[other._size];
                _size = other._size;
                for (size_t i = 0; i < _size; i++)
                    _array[i] = other._array[i];
            }
            return (*this);
        };
        T &operator[](size_t index) {
            if (index >= _size)
                throw std::exception();
            return (_array[index]);
        };
        size_t size() const { return (_size); };
};





#endif