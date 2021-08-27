#ifndef CLASS1_H
#define CLASS1_H
#define MAX 10005
class class1
{
    public:
        class1();
        virtual ~class1();

        void cargarVector(int vec[],int n);
        void contador(int vec[],int n);




    protected:

    private:
        int vec[MAX],n,x;
        //int tam;

};

#endif
