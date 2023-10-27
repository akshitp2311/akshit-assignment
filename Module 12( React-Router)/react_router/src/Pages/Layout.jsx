import React from 'react'
import { BrowserRouter, NavLink, Route, Routes } from 'react-router-dom'
import Blogs from './Blogs'
import Contact from './Contact'
import Home from './Home'
import NoPage from './NoPage'

export default function Layout() {
    return (
        <>
            <div className='display-flex flex-1 '>
                <BrowserRouter>
                    <ul>
                        <li>
                            <NavLink to={"/"}>Home</NavLink>
                        </li>
                        <li>
                            <NavLink to={"/blogs"}>Blogs</NavLink>
                        </li>
                        <li>
                            <NavLink to={"/contact"}>Contact</NavLink>
                        </li>
                    </ul>
                    <Routes>
                        <Route exact path={"/"} element={<Home />} />
                        <Route exact path={"/blogs"} element={<Blogs />} />
                        <Route exact path={"/contact"} element={<Contact />} />
                        <Route exact path={"/404"} element={<NoPage />} />
                    </Routes>
                </BrowserRouter>
            </div>
        </>
    )
}
