use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let num: i32 = input.trim().parse().unwrap();

    let hours = num / 3600;
    let rest = num % 3600;

    let m = rest / 60;
    let s = rest % 60;

    println!("{} {} {}", hours, m, s);
}
