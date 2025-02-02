fn main() {

    // Allocating memory dynamically on the heap
    let a = Box::new(20); // Box takes ownership of the value
    println!("Value of a: {}", a);

    // Ownership transfer (move) to a new variable
    let b = a;  // Now `b` owns the memory, `a` is no longer valid
    
    // println!("Value of a: {}", a); // Uncommenting this line would cause a compile-time error

    println!("Value of b: {}", b);

    // Borrowing a value immutably (reference)
    let c = Box::new(80);
    let c_ref = &c;  // Borrowing a reference to the heap-allocated memory
    println!("Value of c_ref: {}", c_ref);
    
    // When the function ends, `b`, `c`, and `c_ref` go out of scope, and memory is automatically cleaned up.
}