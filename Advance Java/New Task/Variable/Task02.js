// let x = 100
// var y = 100
// const z = 100
// const m
// {
//       x= 90
//       y= 90
//       z= 90
//       console.log(x) ___________________ point-x1
//       console.log(y) ___________________ point-y1
//       console.log(z) ___________________ point-z1
//       console.log(m) ___________________ 
// } 

// console.log(x) ___________________ point-x2
// console.log(y) ___________________ point-y2
// console.log(z) ___________________ point-z2

// what will print at x1-_______
// what will print at y1-_______
// what will print at z1-_______
// what will print at x2-_______
// what will print at y2-_______
// what will print at z2-_______

let x = 100;
var y = 100;
const z = 100;
// const m ;
{
      x= 90;
      y= 90;
    //   z= 90;
      console.log(x) //point-x1:90
      console.log(y) //point-y1:90
      console.log(z) //point-z1:100  (unchange of const used.)
    //   console.log(m) //undefined.
} 

console.log(x) //point-x2:90
console.log(y) //point-y2:90
console.log(z) //point-z2:100

// what will print at x1-___90__
// what will print at y1-___90__
// what will print at z1-___100_
// what will print at x2-___90__
// what will print at y2-___90__
// what will print at z2-___100_