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

    let start = a1.max(a2);
    let end = b1.min(b2);

    if start > end {
        println!("[]");
    } else {
        println!("[{},{}]", start, end);
    }
}
