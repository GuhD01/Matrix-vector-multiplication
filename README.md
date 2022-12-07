# Matrix Vector Multiplication
### Gde Ngurah Randy Agastya 2602119165
Matrix:  An array of numbers </br>Vector: A list of numbers

## To run

![Alt text](./Images/one.png)


By writing "wsl make", it will directly run the MAKEFILE commands in which it creates a mylib.o file and main.out in order for the code to return a result

For example: 

![Alt text](./Images/two.png)


This shows matrix vector multiplication by a 3x3 matrix with the vector value of the shown above

## Time complexity
This is the amount of computer time it takes to run the program

To run:

![Alt text](./Images/three.png)


after we get the result in: <br />
dataRuntime.dat <br />
dataRuntimeMagnified.dat

we can use the dataruntimemagnified and put it in a graph

![Alt text](./Images/4.png)

 
matrix-vector multiplication time complexity: O(n) (linear progression)


## Space complexity 
 the total space taken by the algorithm in order for it to be able to run and gain a result.
 
 We can test it by writing "wsl make space" which will run an infinite loop so that we can see the memory used from the algorithm (below i use N: 200):

 ![Alt text](./Images/five.png)

 the result: 
 ![Alt text](./Images/200.jfif)

To compare with other N:

 400:

 ![Alt text](./Images/400.jfif)

600:

 ![Alt text](./Images/600.jfif)

800: 
  ![Alt text](./Images/800.jfif)

1000:
  ![Alt text](./Images/1000.jfif)

This shows that when the N is higher the memory used as seen on the trend above </br>When N: 200 = Memory: 0.3 MB </br>When N: 400 = Memory: 0.7 MB</br>
When N: 600 = Memory: 1.5 MB </br>
When N: 800 = Memory: 2.6 MB</br>
When N: 1000 = Memory: 3.9 MB 
</br> So the trend shows that it keeps on increasing

We can see more clearly from the graph below
  ![Alt text](./Images/last.png)

space complexity of matrix vector multiplication: O(n^2). The value is actually O(n), however, A new matrix is used to store the result of the multiplication.
## conclusion
The time complexity of matrix vector multiplication increases when N increases and it's also the for the space complexity as the memory increases when N is increased












