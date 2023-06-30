//  make one object who contain your detail like - name,age,multiple vehicles
// -name,and one function print your name and then do below given task

// 1. print all value of your details object
// 2. add a function name printAge inside object who print age (from outside)
// 3. get all key
// 4. get all value
// 5. add one key for city name and store your city name on it  (from outside)
// 6. delete age key from object
// 7. make one function name addAge who print age with add some year which one pass by user


// containt
let details = {
    name: "Akshit",
    age: 28,
    vehicles: ["Car", "Bike", "cycle"],
    printName: function () {
        console.log("Name:", this.name);
      },
};

// Quest01 print all value of your details object
console.log("Quest01 ====>", details);

// Quest02 add a function name printAge inside object who print age (from outside)
details.printName = function () {
    console.log("Age:", this.age);
};

// console.log(details);

// Quest03  get all key

let keys = Object.keys(details);
console.log("All keys===> ", keys);


// Quest 04  get all Values.

let values = Object.values(details);
console.log("All Values====>", values);

//Quest05 add one key for city name and store your city name on it  (from outside)

let cityName = "Surat";
details.city = cityName;

console.log(details);

// Quest 06 delete age key from object
delete details.age;

console.log(details);


// Quest 07 make one function name addAge who print age with add some year which one pass by user

details.addAge = function (additionalYears) {
    console.log("Age:", this.age + additionalYears);
  };
  details.addAge(10);

console.log(details);