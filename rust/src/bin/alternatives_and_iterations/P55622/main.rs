use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let s = input.trim();

    let digits = s.len();

    println!("The number of digits of {} is {}.", s, digits);
}
