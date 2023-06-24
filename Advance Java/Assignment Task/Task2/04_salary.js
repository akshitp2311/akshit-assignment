let salaries = {
"AKSHIT": 100,
"PATEL": 300,
"AKKI": 250
};

function sumSalaries(){
     let sum = 0 ;
     for(let salary of Object.values(salaries)){
        sum = sum + salary
     }
     return sum;
}
console.log(sumSalaries(salaries));