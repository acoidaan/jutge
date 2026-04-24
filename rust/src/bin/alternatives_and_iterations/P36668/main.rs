// Se puede usar una fórmula en lugar de hacer un bucle

use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let n: i64 = input.trim().parse().unwrap();

    let result: i64 = (n * (n + 1) * (2 * n + 1)) / 6;

    println!("{}", result)
}
