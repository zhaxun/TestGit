
class abs
{
private:
    /* data */
public:
    abs(/* args */);
    ~abs();


    template<T> T value(T t);
};

abs::abs(/* args */)
{
    
}

abs::~abs()
{
}

T abs::value(T t)
{
    return  < 0 ? -t : t;
}
