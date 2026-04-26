use std::io::{ self, Read };

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut data = input.split_whitespace();
    let n: usize = data.next().unwrap().parse().unwrap();

    for _ in 0..n {
        let shape = data.next().unwrap();

        if shape == "rectangle" {
            let length: f64 = data.next().unwrap().parse().unwrap();
            let width: f64 = data.next().unwrap().parse().unwrap();

            println!("{:.6}", length * width);
        } else if shape == "circle" {
            let radius: f64 = data.next().unwrap().parse().unwrap();

            println!("{:.6}", std::f64::consts::PI * radius * radius);
        }
    }
}
