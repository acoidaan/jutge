use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let year: i32 = input.trim().parse().unwrap();

    if (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 {
        println!("YES");
    } else {
        println!("NO");
    }
}
