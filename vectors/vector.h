template<typename T>  //using template so that we can use any datatype
class vector{
    int cs;
    int ms;
    T *arr;

public:
    vector(){
        cs=0;
        ms=1;
        arr = new T[ms];
    }

    void push_back(T d){
        if(cs==ms){
            // this means array is full
            T *oldarr = arr;
            arr = new T[2*ms];
            ms = 2*ms;
            for(int i=0; i<cs; i++){
                arr[i] = oldarr[i];
            }
            delete [] oldarr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        cs--;
    }

    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs-1];
    }

    bool empty() const{
        return cs==0;
    }

    int capacity() const{
        return ms;
    }

    T at(const int i){
        return arr[i]; 
    }

    int size() const{
        return cs;
    }

    //operator overloading
    int operator[](const int i){
        return arr[i];
    }

};