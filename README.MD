# Dash - Marvin
## Contest Challenge

**Objective:** Develop a program that finds the most cost-effective path through a map. Beginning at `M` and ending at `G`, your program must traverse tiles labeled `1` - `9`, paying the corresponding cost with every step. Aim to minimise the total cost of your journey.

### General Instructions
- The program must compile using the command `make` in the root directory.
- You are not allowed to use any compile flags (yes this includes performance flags!)
- The compiled executable should be named `marvin` and placed in the root directory during the compilation via the Makefile.
- `C` is mandatory (C++, Go, Rust for `Open League`)
- No norm is required
- Usage of external libraries is not allowed. Except for all libraries shipped with the compiler itself (example: #include <stdio.h>).
- Feel free to use your libft or any other code you've written previously. 
- Memory leaks are not a concern.
- Be prepared to explain your logic during presentation to ensure originality and authenticity.
- No multithreading

### Traces
During the Dash, you'll receive traces at the 6th, and 8th hours. These feedback moments are designed to ensure your output is correct. They will check if you:
- Compile your executable the right way.
- Reach the goal.
- Return any unnecessary characters.
- Stay within the maps boundaries.

The traces will be pushed to your repository. (inside the branch `traces` so don't store your code inside there :))

### Input Instructions
- Maps contain lines of uniform length.
- Valid characters include:
  - 'M': starting point (only one per map).
  - 'G': goal (only one per map).
  - '1' - '9': cost tiles.
- The map given will always be valid 
- The map file is passed as a command-line argument: `./marvin planet.txt`.
- Always expect just one command-line argument (argc == 2).
- The file will always be present and will have read rights.
### Output Criteria

- Display the sequence of moves towards the goal:
  - `U`: Up
  - `D`: Down
  - `R`: Right
  - `L`: Left
- The output sequence should conclude with a newline (`\n`).

**Example:**
planet.txt
```
88888
81118
81818
8M8G8
88888
```

Execution:
```
./marvin planet.txt | cat -e
UURRDD$
```

Multiple solutions can be submitted, but only the latest one ending with a newline will be considered.
```
./marvin planet.txt | cat -e
RR$
UURRDD$
LUU
```
Here the second line `UURRDD$` will be considered as the solution 
### Assessment

After the end of the coding time, your submitted programs will be compiled and tested against multiple unique maps (with potentially different timeouts).
For each map, your program has a fixed amount of seconds to deliver its optimal solution (we will timeout your program afterwards so don't worry about ending your program). Points will be awarded based on the path with the lowest cost amongst the participants, similar to how racers collect points in Mario Kart. After all the challenges are completed, teams will be ranked based on their total points, with the team having the highest score being declared the winner.