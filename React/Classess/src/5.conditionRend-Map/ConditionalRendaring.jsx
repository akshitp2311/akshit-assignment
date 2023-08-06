import React, {useState} from 'react'

export default function ConditionalRendaring() {
  let [isShow, setIsShow] = useState(false);
    return (
    <div>
        {isShow ? <h1>Yes its true</h1> : <h1>Sorry Its False</h1>}
        <button>Change</button>
    </div>
  );
}
