use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let n: i32 = input.trim().parse().unwrap();

    for i in 0..=n {
        if i > 0 {
            print!(",");
        }
        print!("{}", i * i * i);
    }

    println!();
}
