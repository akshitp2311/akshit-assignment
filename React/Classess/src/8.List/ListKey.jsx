import React, {useId} from 'react'

export default function ListKey() {
  let arr = ["Akshit","Patel", "Game"];
  function onclick(){
    console.log("=>");
  }
    return (
    <>
    <ul>
        {arr.map((e, i =>{
            return(
                <li key={i} onClick={() => onclick}>{e}</li>
            );
        }))}
    </ul>
    </>
  );
}
