fn calculate_sum(arr: &[i32]) -> i32 {
    let mut total = 0;  // Initialize total to 0
    for &num in arr {
        total += num;
    }
    total
}

fn main() {
    let numbers = vec![1, 2, 3, 4, 5];
    let result = calculate_sum(&numbers);
    println!("Sum in Rust: {}", result);

    // Example of dynamic memory handling in Rust with ownership and borrowing
    let arr = vec![1, 2, 3, 4]; // Dynamic allocation with ownership
    println!("Original array: {:?}", arr);

    let mut borrowed_arr = &arr;  // Borrowing the array (immutable reference)
    println!("Borrowed array: {:?}", borrowed_arr);
}
