use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut nums = input.split_whitespace();

    let a: i32 = nums.next().unwrap().parse().unwrap();
    let b: i32 = nums.next().unwrap().parse().unwrap();
    let c: i32 = nums.next().unwrap().parse().unwrap();

    let max = a.max(b).max(c);

    println!("{}", max);
}
