use std::{ io::{ self, Read } };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let s = input.trim();

    let reversed: String = s.chars().rev().collect();

    println!("{}", reversed);
}
