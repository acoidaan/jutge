use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let num: f64 = input.trim().parse().unwrap();
    let floor_num = num.floor() as i64;
    let ceil_num = num.ceil() as i64;
    let round = num.round() as i64;

    println!("{} {} {}", floor_num, ceil_num, round);
}
