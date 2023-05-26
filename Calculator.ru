use std::io;

fn main() {
    println!("Simple Calculator");

    loop {
        println!("Enter an operator (+, -, *, /) or 'q' to quit:");
        let mut operator = String::new();
        io::stdin()
            .read_line(&mut operator)
            .expect("Failed to read line");
        let operator = operator.trim();

        if operator == "q" {
            break;
        }

        println!("Enter the first number:");
        let mut num1 = String::new();
        io::stdin()
            .read_line(&mut num1)
            .expect("Failed to read line");
        let num1: f64 = num1.trim().parse().expect("Invalid number");

        println!("Enter the second number:");
        let mut num2 = String::new();
        io::stdin()
            .read_line(&mut num2)
            .expect("Failed to read line");
        let num2: f64 = num2.trim().parse().expect("Invalid number");

        let result = match operator {
            "+" => num1 + num2,
            "-" => num1 - num2,
            "*" => num1 * num2,
            "/" => num1 / num2,
            _ => {
                println!("Invalid operator");
                continue;
            }
        };

        println!("Result: {}", result);
    }

    println!("Goodbye!");
}
