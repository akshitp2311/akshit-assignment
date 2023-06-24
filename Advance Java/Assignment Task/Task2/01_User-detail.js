let data = {

}
data.name = "AKSHIT"
console.log(data);
data.surname = "PATEL"
console.log(data);
data.name = "AKKI"
console.log(data);
delete data.name
console.log(data)


let person1 = { name: "AKSHIT", age: 28 };
let person2 = { name: "AKKI", age: 35 };
let person3 = { name: "PATEL", age: 45 };

let people = [person1, person2, person3];

let printName = (person) => {
  console.log(person.name);
};
let printage = (person) => {
  console.log(person.age);
};

people.map(printName);
people.map(printage);