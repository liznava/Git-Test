Returns a reference to the element at position index~/**
 * @file Vector.cpp
 * @author Lizette Navarrete
 * @date 2025-02-08
 * @brief Implementation file for Vector Class
 * 
 * Implements the Vector class similar to the vector library
 */


#include "Vector.h"

using namespace std;

Vector::Vector(){

  vec_capacity = 0;
  vec_size = 0;
  vec_ptr = nullptr;
}

Vector::Vector(const Vector &other){
  
 
  vec_capacity = other.vec_capacity;
  vec_size = other.vec_size;
  vec_ptr = new int[vec_capacity];
   

  for(int i = 0; i < vec_size; i++){
    vec_ptr[i] = other.vec_ptr[i];
  }
  delete[] other.vec_ptr; 
 
}

Vector::~Vector(){
  delete[] vec_ptr;
}

Vector& Vector::operator=(const Vector &other){

  // this and other

  delete[] vec_ptr;

 
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  vec_ptr = new int[vec_capacity];

  for(int i = 0; i <vec_size; i++){
    vec_ptr[i] = other.vec_ptr[i];
  }

   
  return *this;
}


int Vector::size(){
  
  return vec_size;
}

int Vector::capacity(){

  return vec_capacity;

}

void Vector::push_back(int element){
  

  if(vec_size >= vec_capacity)
    reserve(max(2 * vec_capacity, 1));
  
  vec_ptr[vec_size] = element;
  vec_size++;

}

void Vector::reserve(int n){
  
  if(n >= vec_capacity){

    int* temp_ptr = new int[n];

    for(int i = 0; i < vec_size; i++){
      temp_ptr[i] = vec_ptr[i];
    }
    
    delete[] vec_ptr;
    vec_ptr = temp_ptr;
    vec_capacity = n;
    
  }  
  
}

int& Vector::operator[](unsigned int index){

  return vec_ptr[index];
}
