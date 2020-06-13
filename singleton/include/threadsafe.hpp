#ifndef SINGLETON_THREADSAFE_HPP
class Singleton {
public:
    static Singleton* Get();
private:
    Singleton();
    ~Singleton();
    static Singleton s_Instance;
};
#define SINGLETON_THREADSAFE_HPP

#endif //SINGLETON_THREADSAFE_HPP
