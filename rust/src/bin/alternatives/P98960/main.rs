use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let c = input.trim().chars().next().unwrap();

    if c.is_uppercase() {
        println!("{}", c.to_ascii_lowercase());
    } else {
        println!("{}", c.to_ascii_uppercase());
    }
}
