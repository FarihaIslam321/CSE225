#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    public:

         timeStamp();
        timeStamp(int, int, int);
        void print();
        bool operator>(timeStamp);
        bool operator<(timeStamp);
        bool operator!=(timeStamp);
        bool operator==(timeStamp);



    protected:

    private:
        int s, m, h;

};

#endif // TIMESTAMP_H
