use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let x = nums[0];
    let y = nums[1];

    let start = x.max(y);
    let end = x.min(y);

    for i in (end..=start).rev() {
        println!("{}", i);
    }
}
