import React from 'react'
import Card from './card'

let data = [
    {
        name: "Akshit",
        dec: "He is IT Developer",
    },
    {
        name: "Vivek",
        dec: "Business",
    }
]
export default function Map() {
  return (
    <>
    {data.map((e)=>{
        return <Card name={e.name} dec={e.dec}/>
    })}
    </>
  );
}
