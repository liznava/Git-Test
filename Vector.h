/**
 * @file Vector.h
 * @author Lizette Navarrete
 * @date 2025-02-07
 * @brief Vector Class implemetation
 * 
 * Implementing a simple version of the vector class and simple access to vector class.
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <fstream>
#include "Vector.h"

class Vector{

private:
  int *vec_ptr;
  int vec_size, vec_capacity;

public:


/**
 * Default constructor.  Initializes an empty vector.
 *
 * @pre 
 * @post vec_ptr is NULL, vec_size=0, and vec_capacity=0.
 * 
 */
  Vector();
  

/**
 * Copy constructor.  Initializes a dynamic array of the appropriate size/capacity and copies data from other's array to the new array.
 *
 * @param const Vector &other 
 * @pre 
 * @post vec_ptr is initialized, and its array contains other.vec_ptr's data, vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
 * 
 */
  Vector(const Vector &other);
  

/**
 * Destructor.  Deallocates vec_ptr
 *
 * @pre 
 * @post vec_ptr has been deallocated, current_size=0, and capacity=0.
 * 
 */
  ~Vector();


/**
 * Assignment operator.  Initializes a dynamic array of the appropriate size/capacity and copies data from other's array to the new array.
 *
 * @param const Vector &other 
 * @pre 
 * @return Vector& 
 * @post vec_ptr is initialized, and its array contains other.vec_ptr's data,
    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
 * 
 */
  Vector& operator=(const Vector &other);
  

/**
 * Returns the current number of elements in the vector.
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int size();


/**
 * Returns the currently allocated storage capacity of the vector.
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int capacity();


/**
 * Similar to std::vector.push_back(int element), stores element at the end of the vector.
 *
 * @param int element 
 * @pre 
 * @return void 
 * @post Item element has is stored at the end of the vector
 * 
 */
  void push_back(int element);


/**
 * Requests that the vector capacity be resized at least enough to contain n elements.
   *
   *    If n is greater than the current capacity, the function causes the container to reallocate
   *    its storage increasing its capacity to n (or greater).
   *
   *    If n is less than or equal to the current capacity, the call does nothing (no reallocation
   *    or change in vector capacity).
   *
   *    This function has no effect on vector size and cannot alter its elements.
 *
 * @param int n 
 * @pre 
 * @return void 
 * @post Vector capacity is now n.  Vector size (and contents) remains the same
 * 
 */
  void reserve(int n);


/**
 * Returns a reference to the element at position index
 *
 * @param unsigned int index 
 * @pre 
 * @return int& 
 * @post 
 * 
 */
  int& operator[](unsigned int index);
  
  
};
#endif
