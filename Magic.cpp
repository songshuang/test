//Matric No. A0119454A
//Name: Wang Jiexuan
//Lab02g02A0119454.cpp
//This programme askes for the size of the magic square and fill the magic square

//testing

#include <iostream>

#include <iomanip>

// the best answer so far --------+++++++++++++++++++

using namespace std;

//Main asks for input of size of square and output with a filled square,return value 0

//Precondition:Input size n should be an odd interger with value range from 1 to 19

//Postcondition: Output should be a magic square filled with numbers from 1 to n*n

//       Numbers should be aligned properly and fulfill row,line,diagonal sum to be eqal



int main() {

    int n,r,c,i=1;

    cin >> n;//scan in a interger n(1<=n<=19)

    if (n>19||n<1)//check if the input is out of range

    { cout<<"Out of range! (1<=n<=19)"; exit(0);}

    if (n%2==0) {//check if input is an even number

        cout<<"Please input an odd number";

        exit(0);

    }

  

    

    int matrix[n][n];//define a n*n magic square

    //initialize the square for all members to be 0

    for (r=0; r<n; r++)

        for (c=0; c<n; c++)

            matrix[r][c]=0;

    //Set starting position r=0 and c=(n-1)/2, starting index i=1

    r=0;

    c=(n-1)/2;

    matrix[r][c]=i;

    //Fill in the 2d square with the increment of index i after each iteration 

    for (i=2; i<=n*n; i++) {

        r=(r-1+n)%n;//row upward

        c=(c+1+n)%n;//column rightward

     //in the case of filled or topright corner   

        if (matrix[r][c]>0||(r==n-1&&c==0)) {

            r=(r+2)%n;//return to previous row through r+1 and move downward

            c=(c-1+n)%n;//return to previous column through c-1

        }

            matrix[r][c]=i;//fill in index i

    }

        

    //Print out the magic square

    for (r=0; r<n; r++){

        for (c=0; c<n; c++){

            cout<<left<<setw(3)<<matrix[r][c];//to ensure that numbers alighed to the left properly (max 20*20=400,thus three spaces)

            if (c!=n-1) {

                cout<<' ';//print space after each number except the last in a line

              } }

        cout<<endl;//print endline after each line        

   }

    

    

    return 0;

}




