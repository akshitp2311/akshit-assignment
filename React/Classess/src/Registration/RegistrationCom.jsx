import React from 'react'
import "./Reg.css";
import { Form } from 'react-bootstrap';
export default function RegistrationCom() {
  return (
    <>
      <Form>
        <Form.Group className="request-form">
          <div className="container py-5">
            <div className="row py-3" >
              <div className="col-lg-6 col-md-6 col-sm-12 col-auto"></div>
              <div className="col-lg-6 col-md-6 col-sm-12 col-auto p-0 m-auto">
                <div className="request-form-input">
                  <h3 className='text-primary'>Registration</h3>
                  <h2 className="fw-bold">Fill Detail</h2>
                  <form action="#" className="py-3">
                    <div classNameName="row py-2">
                      <input type="text" placeholder="Your name" className="form-control user-input" required />
                    </div>
                    <div className="row py-2">
                      <input type="text" placeholder="Email" className="form-control user-input" required />
                    </div>
                    <div className="row py-2">
                      <input type="text" placeholder="Phone" className="form-control user-input" required />
                    </div>
                    <div className="row py-2">
                      <input type="text" placeholder="Subject" className="form-control user-input" required />
                    </div>
                    <div className="row py-2">
                      <button className="">Get It Now</button>
                    </div>
                  </form>
                </div>
              </div>
            </div>
          </div>
        </Form.Group>
      </Form>
    </>
  )
}
