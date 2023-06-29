let array = [1, 2, 3, 4, 5];

// Using Map
array.map(element => console.log("Map===>",element));

// Using reduce
array.reduce((_, element)=>{
    console.log("Reduce===>", element);
}, null);


// let array = [1, 2, 3, 4, 5];

// Using for loop
for (let i = 0; i < array.length; i++) {
  console.log("LOOP====>",array[i]);
}
