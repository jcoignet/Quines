use std::fs::File;
use std::process::Command;
use std::io::prelude::*;

macro_rules! son_name {
() => ("Sully_")
}

macro_rules! son_soul {
() => ("fn main(){}
print!({}{}{}{}, {});
{}")
}

fn main()
{
    let mut i = 5;
    if i > 0
    {
        i -= 1;
        let f = File::create(format!("{}{}.rs", son_name!(), i));
        assert!(f.unwrap().write_fmt(format_args!(son_soul!(),
        123 as char,34 as char,123 as char,125 as char,34 as char,i,125 as char)).is_ok());
        let c = Command::new("rustc").arg(format!("{}{}.rs",son_name!(),i)).output().unwrap_or_else(|e|{panic!("{}",e)});
        println!("stderr: {}", String::from_utf8_lossy(&c.stderr));
        let c = Command::new(format!("./{}{}",son_name!(),i)).output().unwrap_or_else(|e|{panic!("{}",e)});
        println!("stdout: {}", String::from_utf8_lossy(&c.stdout));
        println!("stderr: {}", String::from_utf8_lossy(&c.stderr));
    }
}