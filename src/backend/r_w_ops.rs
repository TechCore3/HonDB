use std::fs::File;
use std::io::Read;
use std::path::Path;

#[derive(Debug, Clone)]
enum Value {
    Int(i64),
    Str(String),
}
struct Entry {
    name: String,
    entry: Value,
}

fn write(entry: Entry) {

}
fn read(entry: Entry) -> String {
    let name = entry.name;
    match File::open(name) {
        Ok(mut file) => {
            let mut buf: &mut String = &mut String::new(); //cursed
            file.read_to_string(buf).expect("unable to read entry!");
            return buf.to_owned();
        }
        Err(e) => {
            return "".into();
        }
    }

}