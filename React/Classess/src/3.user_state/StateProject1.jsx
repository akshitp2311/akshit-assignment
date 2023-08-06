import React, {useState} from 'react'

export default function StateProject1() {
    const [color, setColor] = useState("black");
    const [isDefault, setIsDefault] = useState(true);
    function changeColor(){
        let a = "red";
        let b = "black";
        setIsDefault(!isDefault);
        setColor(isDefault ? b : a);
    }


  return (
    <div>
        <div className="div1">
            <h1 style={{color: color}}>Box</h1>
        </div>
        <button onClick={() => changeColor()}>Change Color </button>
    </div>
  );
}
