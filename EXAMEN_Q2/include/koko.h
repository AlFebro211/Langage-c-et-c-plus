#ifndef KOKO_H
#define KOKO_H


class koko
{
    public:
        koko();
        virtual ~koko();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

        unsigned int m_Counter;

    protected:

    private:
};

#endif // KOKO_H
