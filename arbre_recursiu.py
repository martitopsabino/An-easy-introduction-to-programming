import turtle


def arb (n: int, m: int, a: int) -> None:
    if n > 0:
        turtle.forward(m)
        turtle.right(a)
        arb (n-1, (m * 3)//4, a)
        turtle.left(2 * a)
        arb (n-1, (m * 3)//4, a)
        turtle.right(a)
        turtle.backward(m)

n, d, a = 7, 100, 30


turtle.left(90)
turtle.backward(d)
turtle.speed(0)
arb(n, d, a)
turtle.done()