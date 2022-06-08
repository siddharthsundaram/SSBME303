from tkinter import *
import random

# Creates a window
window = Tk()

# Creates objects for the X image and O image and stores the width into a variable
x = PhotoImage(file = "X.gif")
o = PhotoImage(file = "O.gif")
width = o.width()

# Creates a canvas that is the size of 3 times the width of the X and O images
dim = width * 3
canvas = Canvas(window, width = dim, height = dim)
canvas.pack()

# Nested loop that generates a random number and fills the canvas with either X or O depending on what the number is
for i in range(0, dim, width):
    for j in range(0, dim, width):
        y = random.randint(0, 1)
        if y == 1:
            canvas.create_image(i, j, anchor = NW, image = x)
        else:
            canvas.create_image(i, j, anchor = NW, image = o)

canvas.mainloop()
