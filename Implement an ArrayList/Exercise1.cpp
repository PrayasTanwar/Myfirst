#include<bits/stdc++.h>

using namespace std;

//#define MAX 1000;
// Implementation of Vector in C++
template <typename T>class Vector{

    // It stores the address of our vector
    T* arr;

    // It contains the capacity or length of the vector
    int capacity;

    // It contains the Number of elements present in the vector
    int current;
public:

    // Default constructor to initialise
    // an initial capacity of 1 element and
    // allocating storage using dynamic allocation
    Vector(){
        arr=new T[1];
        capacity=1;
        current= 0;
    }

    //Function adds the element at the last
    void add(T data){
        //If capacity  is equal to current then  new array has been
        //created of double size and data is stored
        if(current == capacity){
            T* temp=new T[2*capacity];


            //Copying old array element to new array
            for(int i=0;i<current;i++){
                temp[i]=arr[i];
            }

            // deleting previous array
            delete[] arr;

            capacity=2*capacity;
            arr=temp;
        }

        //inserting new element
        arr[current]=data;
        //cout<< arr[current]<< " ";
        current++;
    }

    //function used to delete element from last
    void remove(){
        current--;
        return ;
    }

    //function tells whether this element is present in vector or not
    bool contains(T x){
        for(int i=0;i<current;i++){
            if(arr[i]==x){
                return true;
            }
        }
        return false;
    }

    //function get the size of vector
    int size(){
        return current;
    }
};

int main()
{
    Vector<int>v;
    v.add(1);
    v.add(2);
    v.add(3);
    v.add(4);
    v.add(5);
    cout<< v.size()<<endl;

    if(v.contains(5)){
        cout<< " "<< "Yes"<<endl;
    }
    else{
        cout<< " "<< "NO"<< endl;
    }
    return 0;
}
