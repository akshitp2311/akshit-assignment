import React from 'react'

export default function MapLoop() {
    let name = ["akshit", "patel", "Group"];
    let data = [
        {name: "akshit", age: 28},
        {name: "patel", age: 18},
        {name: "Group", age: 25}
    ];

    return (
    <div>
        {name.map((e) => {
            return <h1>{e}</h1>;
        })}
        {data.map((e)=>{
            return(
                <div>
                    <h1>Name : {e.name}</h1>
                    <h1>Age : {e.age}</h1>
                </div>
            );
        })}
    </div>
  );
}
