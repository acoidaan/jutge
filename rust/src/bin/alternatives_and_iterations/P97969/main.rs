use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut count = 0;

    for c in input.chars() {
        if c == '.' {
            break;
        }
        if c == 'a' {
            count += 1;
        }
    }

    println!("{}", count);
}
