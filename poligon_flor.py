import turtle as tl

def poligion(n: int) -> None:
    for _ in range(n):
        tl.forward(100)
        tl.right(360 / n)

tl.left(90)

for _ in range(6):
    poligion(8)
    tl.right(360/6)

tl.done()