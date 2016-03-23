use std::fs::File;
use std::io::prelude::*;
// Lets do this
macro_rules! son_name {
() => ("Grace_kid.rs")
}
macro_rules! son_soul {
() => ("use std::fs::File;
use std::io::prelude::*;
// Lets do this
macro_rules! son_name {}
() => ({}{}{})
{}
macro_rules! son_soul {}
() => ({}{}{})
{}
macro_rules! go_son {}
() => (
fn main(){}
let f = File::create(son_name!());
assert!(f.unwrap().write_fmt(format_args!(son_soul!(),
123 as char,34 as char,son_name!(),34 as char,125 as char,
123 as char,34 as char,son_soul!(),34 as char,125 as char,
123 as char,123 as char,125 as char,125 as char)).is_ok());
{})
{}
go_son!();")
}
macro_rules! go_son {
() => (
fn main(){
let f = File::create(son_name!());
assert!(f.unwrap().write_fmt(format_args!(son_soul!(),
123 as char,34 as char,son_name!(),34 as char,125 as char,
123 as char,34 as char,son_soul!(),34 as char,125 as char,
123 as char,123 as char,125 as char,125 as char)).is_ok());
})
}
go_son!();