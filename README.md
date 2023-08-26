# **Prisoner's Dilemma Game**

## Overview

This C++ program simulates the classic "Prisoner's Dilemma" game between a player and a computer. In the Prisoner's Dilemma, both players have two choices: "Cooperate" (choose 0) or "Betray" (choose 1). The outcome depends on the choices made by both players.

## How to Play

Run the program.
The computer will make its choice (0 or 1) randomly.
You will be prompted to enter your choice:
	Enter "0" to cooperate.
	Enter "1" to betray.
The program will determine the outcome based on the choices made by both players and display the result.

## Outcomes

If both players cooperate (0), they both walk out free.
If both players betray (1), they both receive a sentence.
If one player cooperates (0) while the other betrays (1), the one who betrays goes free, while the one who cooperates receives a severe sentence.

## Prerequisites

C++ compiler (e.g., g++) installed on your system.

## How to Compile and Run

Open a terminal or command prompt.
Navigate to the directory containing the source code file (e.g., main.cpp).
Compile the program using the C++ compiler:

`g++ main.cpp -o prisoner_dilemma`

Run the compiled program:

`./prisoner_dilemma`

## Example

`Computer's choice: 1`
`Enter your choice (0 for cooperate, 1 for betray): 0`
`You cooperate while computer betrays. Computer walks out free, you receive a sentence.`

### ## Author

&copy;Asheley Mudzingwa 2023
### ## License

This program is open-source and available under the MIT License.
