# Lem_in
42 Project Lem_in

## Description

<img src="https://github.com/rkirszba/Lem_in/blob/master/media/Demo2.gif">

### Goal
The program has to find the quickest way to get n ants across the farm

### Rules
The program receives the data describing an ant farm from the standard input the following format:
```number_of_ants
the_rooms
the_links```
Only one ant is allowed to be in a room, except in "start" and "end" rooms.
The output of the program follows the following template :
```Lx-y Lz-w Lr-o ..```
where x, z, r represents the ants’ numbers (going from 1 to number_of_ants) and y, w, o represents the rooms’ names

#### Map examples
```2
3 2 2
##start
start 4 0
##end
end 4 6
4 0 4
1 4 2
2 4 4
5 8 2
6 8 4
start-1
3-4
2-4
1-5
6-5
end-6
1-2
2-end
3-start```
<img src="https://github.com/rkirszba/Lem_in/blob/master/media/Demo4.gif">

```
4
3 2 2
##start
start 4 0
##end
end 4 6
4 0 4
1 4 2
2 4 4
5 8 2
6 8 4
start-1
3-4
2-4
1-5
6-5
end-6
1-2
2-end
3-start```
<img src="https://github.com/rkirszba/Lem_in/blob/master/media/Demo3.gif">

## Solution
We used an implementation of Edmonds-Karp maximum flow algorithm : https://en.wikipedia.org/wiki/Edmonds%E2%80%93Karp_algorithm

## Installation

Clone the repository and launch the ```make``` command 

## Run

### Without visualizer

./lem-in < [map_path]

### With visualizer

./lem-in < [map_path] | ./visu

<img src="https://github.com/rkirszba/Lem_in/blob/master/media/Demo1.gif">
