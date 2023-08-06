import React, {useState} from 'react'
import "./project.css";


export default function StateProject2() {
    let [index, setIndex] = useState(0);
    let colours = ["red", "blue", "yellow", "green"];
    function changeColor(){
        if( index < colours.length){
            setIndex(index + 1);
        }else{
            setIndex(0);
        }
    }


    return (
    <div>
        <div className="div1">
            <h1 style={{color: colours[index]}}>Box</h1>
        </div>
        <button onClick={()=> changeColor()}>Change Color</button>
    </div>
  );
}
