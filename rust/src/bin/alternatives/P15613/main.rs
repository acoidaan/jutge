use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let t: i32 = input.trim().parse().unwrap();

    if t > 30 {
        println!("it's hot");
    } else if t < 10 {
        println!("it's cold");
    } else {
        println!("it's ok");
    }

    if t >= 100 {
        println!("water would boil");
    } else if t <= 0 {
        println!("water would freeze");
    }
}
