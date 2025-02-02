// showing type system
function out_fn() {

    let x = 22; // Number
    let y = [1, 2, 3]; // Array
    let z = true; // Boolean
    let out_var = "outer"
    
    console.log("x is of type:", typeof x); 
    console.log("y is of type:", typeof y); 
    console.log("z is of type:", typeof z); 
    console.log("out_var is of type:", typeof out_var); 
    
    return function in_fn() {
        // Inner function has access to the outer scope variable
        return 'Accessing outer variable: ' + out_var

    };
}

const closure = out_fn();
console.log(closure());  // Calling the closure function
