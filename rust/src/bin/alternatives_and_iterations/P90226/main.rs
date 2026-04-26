use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let words: Vec<&str> = input.split_whitespace().collect();

    let a = words[0];
    let b = words[1];

    if a < b {
        println!("{} < {}", a, b);
    } else if a > b {
        println!("{} > {}", a, b);
    } else {
        println!("{} = {}", a, b);
    }
}
