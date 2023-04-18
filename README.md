![alt text for screen readers](https://raw.githubusercontent.com/ridaelfagrouch/push_swap_42/main/assets/push_swap.png "Sorting algrithm in C")
# Introduction:
` Summary: `
```
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. 
To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution(out of many) for an optimized data sorting.
```
```
The Push swap project is a very simple and a highly straightforward algorithm project: data must be sorted. You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. 
Your goal? Write aprogram in C called push_swap which calculates and displays on the standard output the smallest program, made of Push swap language instructions, that sorts the integers received as arguments. Easy? 
We’ll see...
```
` Objectives: `
```
Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of complexity.
Sorting algorithms and their complexity are part of the classic questions discussed during job interviews. It’s probably a good time to look at these concepts since you’ll have to face them at some point.
The learning objectives of this project are rigor, use of C,and use of basic algorithms. Especially focusing on their complexity.
Sorting values is simple. To sort them the fastest way possible is less simple. Especially because from one integers configuration to another, the most efficient sorting solution can differ.

```
# Rules:

> ***You have 2 stacks named a and b.:*** 
>
> ***At the beginning:*** 
* The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
* The stack b is empty.
> ***The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:*** 

`sa (swap a): Swap the first 2 elements at the top of stack a.`

`sb (swap b): Swap the first 2 elements at the top of stack b.`

`ss (swap both): swap a and b at the same time.`

`pa (push a): Take the first element at the top of b and put it at the top of a.`

`pb (push b): Take the first element at the top of a and put it at the top of b.`

`ra (rotate a): Shift up all elements of stack a by 1.`

`rb (rotate b): Shift up all elements of stack b by 1.`

`rr (rotate both): rotate a and b at the same time.`

`rra (reverse rotate a): Shift down all elements of stack a by 1.`

`rrb (reverse rotate b): Shift down all elements of stack b by 1.`

`rrr (reverse rotate both): rra and rrb at the same time.`

```diff
+ By   : Bickle
```
