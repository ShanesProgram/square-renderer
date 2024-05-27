# Square Renderer
## Description
This project is the same as most of my projects, didn't accomplish anything themselves. This project is used to test out neovim and git via terminal using neovim from a plugin. This program does also include a square renderer as a bi-product. Though not a good one, it will be getting a few more updates.
## Download Instruction
### Windows
If you're on windows, go to the releases section of this repository and download the latest .exe file and run. If you want to change the size of the square produced, then do the following: <br>
1) Download the repo in zip format
2) Unzip the repo
3) Edit source/main.c
4) Change the renderSquare variables to whatever you want them to be (the first value is width and the second is height). Here is an example:
```c
renderSquare(10,10)
```
5) Compile & run
### Linux
Ensure you have the following installed:
- git
- gcc
1) Clone the repository:
```
git clone https://github.com/ShanesProgram/square-renderer
```
2) Compile:
```
cd square-renderer/
make
```
3) Run:
```
build/main
```

