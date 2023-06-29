    let person = [
        {name: "kush", age: 12},
            {name: "tej", age: 10},
            {name: "smit", age: 18},
            {name: "ram", age: 20},
        ];
        let names = person.map((p) => p.name);
        console.log(names);

        let totalAge = person.reduce((acc, p) => acc + p.age, 0);
        console.log(totalAge);

        let count = person.reduce((count) => count + 1, 0);
        console.log(count);

        let great = person.map((p) => p.age >= 18);
    console.log(great);