#ifndef CLASS1_H
#define CLASS1_H
#define MAX 10005
class class1
{
    public:
        class1();
        virtual ~class1();

        void cargarVector(int vec[],int n);
        void divisor(int vec[],int n,int x);




    protected:

    private:
        int vec[MAX],n,x;
        //int tam;

};

#endif
