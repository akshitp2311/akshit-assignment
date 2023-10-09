import { Button } from "antd";
import { Heart } from "lucide-react";
import React from "react";
import { Card, CardBody, CardSubtitle, CardText, CardTitle } from "reactstrap";
export default function CardCom(props) {
  return (
    <>
      <Card
        className=" m-3"
        style={{
          width: "18rem",
        }}
      >
        <img alt="Sample" src={props?.data?.imageURL} />
        <CardBody>
          <CardTitle tag="h5">{props?.data?.name}</CardTitle>
          <CardSubtitle className="mb-2 text-muted" tag="h6">
            $ {props?.data?.price}
          </CardSubtitle>

          <Button
            className="w-50"
            style={{ color: "#eb0a0a", backgroundColor: "lightblue" }}
          >
            Buy
          </Button>
          <Button className="w-50" style={{ backgroundColor: "lightblue" }}>
            <Heart color="#eb0a0a" />
          </Button>
        </CardBody>
      </Card>
    </>
  );
}
