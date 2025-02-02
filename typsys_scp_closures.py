def out_fn():
    x = 20 # Integer
    y = [1, 2, 3]  # List
    z = 1.4  # Float
    out_var = "Outer" #string
    print("x is of type:", type(x))
    print("y is of type:", type(y))
    print("z is of type:", type(z))
    print("out_var is of type:", type(out_var))

    def in_fn():
        # Accessing outer variable from the outer scope
        return "Inner function can access:",out_var
    
    return in_fn  # Returning the closure

closure = out_fn()
print(closure())  # Calling the closure function