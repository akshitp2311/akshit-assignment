import React, { useContext, useEffect, useState } from "react";
import CardCom from "../../components/CardCom";
import GlassData from "../../../utils/glass.json";

export default function HomeContetnt() {
  const [Data, setData] = useState(GlassData);

  return (
    <>
    <div>
    
    </div>
      <div
        className="site-layout-content ms-auto d-flex flex-wrap "
        style={{
          gap: "10px",
        }}
      >
        {Data?.map?.((e, i) => {
          return <CardCom key={i + Math.random()} data={e} />;
        })}
      </div>
    </>
  );
}
