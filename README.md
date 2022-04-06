# push_swap
I really enjoyed this project ! It is not about finding the fastest sorting algorithm but sorting a stack with the least amount of instructions. 

It got really tricky because you only have a limited set of instructions. For example, you can not search the smallest integer of the stack and push it to the top (it would be too easy hehe). No, instead, you have to rotate the whole stack one integer at a time until the smallest one is at the top.

## Visualize it !
Yes ! 
## The algorithm I used
First, I transformed the list of integer into a list of indexes. For example, this list [2, 65, 41, 7, 4] becomes [1, 4, 3, 2, 0].

I hard coded the cases where you have 5 integers or less (because why not).
The interesting part comes when you have around 100 integers. It was inspired by [this 42 student](https://github.com/tblaase). 

Basically the idea is :
1. Split the stack into X parts (for 100 numbers I split it into 4).
2. Push the first quarter of the smallest integers in the other stack. As the list is now a list of indexes, you just have to push the numbers between 0 and 24.
3. Find the biggest in stack B, put it on top of stack B and push it back to stack A.
4. Find the smallest in stack B, put it on top of stack B, push it back to stack A and then to the bottom.
5. Repeat steps 3 and 4 until the stack B is empty.
6. Now that the biggest are on top and the smallest on the bottom, simply rotate the stack A so that the first quarter is sorted.
7. Repeat steps 2 to 6 X times.

**Ways of improving the algorithm :**
- Change step 1.
- Instead of repeating steps 3 and 4, it might be smart to check if it's better to first push the smallest and then the biggest.
