use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a1 = nums[0];
    let b1 = nums[1];
    let a2 = nums[2];
    let b2 = nums[3];

    if a1 == a2 && b1 == b2 {
        println!("=");
    } else if a1 <= a2 && b1 <= b2 {
        println!("1");
    } else if a1 <= a2 && b2 <= b1 {
        println!("2");
    } else {
        println!("?");
    }
}
