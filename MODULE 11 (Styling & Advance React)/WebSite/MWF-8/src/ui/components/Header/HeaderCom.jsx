import { Search, User2 } from "lucide-react";
import React, { useContext, useState } from "react";
import { NavLink, useNavigate } from "react-router-dom";
import {
  Collapse,
  Navbar,
  NavbarBrand,
  Nav,
  NavItem,
  Button,
} from "reactstrap";
import "./index.css";
import { useSelector } from "react-redux";

function HeaderCom(props) {
  const userData = useSelector((state) => state?.auth?.user);
  const navigate = useNavigate();

  return (
    <div>
      <Navbar expand={"lg"} style={{ backgroundColor: "lightblue" }}>
        <NavbarBrand style={{ color: "white" }} href="/">
          Su<span style={{ color: "black" }}>nG</span>La
          <span style={{ color: "black" }}>SS</span>
        </NavbarBrand>

        <Collapse navbar>
          {userData?.userType === "admin" ? (
            <Nav className="me-auto ms-5 gap-5" navbar>
              <NavItem>
                <NavLink to="">Dashboard</NavLink>
              </NavItem>
              <NavItem>
                <NavLink to="/product">Product</NavLink>
              </NavItem>
              <NavItem>
                <NavLink to="/orders">Orders</NavLink>
              </NavItem>
            </Nav>
          ) : (
            <>
              <Nav className="me-auto ms-5 gap-5" navbar>
                <NavItem>
                  <NavLink to="">Home</NavLink>
                </NavItem>
                <NavItem>
                  <NavLink to="/men">Men</NavLink>
                </NavItem>
                <NavItem>
                  <NavLink to="/women">Women</NavLink>
                </NavItem>
                <NavItem>
                  <NavLink to="/kids">Kids</NavLink>
                </NavItem>
                <NavItem>
                  <NavLink to="/about">Abount Us</NavLink>
                </NavItem>
                <NavItem>
                  <NavLink to="/contact">Contact</NavLink>
                </NavItem>
              </Nav>
              <input
                style={{
                  outline: "none",
                  color: "#7c6e6e",
                }}
                className="border-0 rounded-1 p-1 w-25 ps-2 "
                type="text"
                placeholder="Search your text here....! "
              />
              <Search className="ms-2  " color="#fff" />
            </>
          )}
          {JSON.stringify(userData) !== "{}" ? (
            <User2 className="userIcon ms-4 me-4" />
          ) : (
            <Button
              style={{
                backgroundColor: "#383534",
                color: "white",
                border: "none",
              }}
              className="ms-4 me-4"
              onClick={() => navigate("/login")}
            >
              Login
            </Button>
          )}
        </Collapse>
      </Navbar>
    </div>
  );
}

export default HeaderCom;
