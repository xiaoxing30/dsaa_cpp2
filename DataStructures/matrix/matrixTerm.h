// a term in sparseMatrix

#ifndef matrixTerm_
#define matrixTerm_

template <class T>
struct matrixTerm
{
    int row,
        col;
    T value;

    operator T() const { return value; }
    // type conversion from matrixTerm to T
};

#endif
