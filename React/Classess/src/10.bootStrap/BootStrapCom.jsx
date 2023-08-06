import React from 'react'
import { Button, Card, Form } from 'react-bootstrap'

export default function BootStrapCom() {
  return (
    <>
        <Form>
            <Form.Group className='mb-3' controlId='exampleForm.ControlInput1'>
                <Form.Label>Email Address</Form.Label>
                <Form.Control type='email' placeholder='name@gmail.com' />
            </Form.Group>
            <Form.Group className='mb-3' controlId='exampleForm.ControlInput1'>
                <Form.Label>Example TextArea</Form.Label>
                <Form.Control as='textarea' rows={3}></Form.Control>
            </Form.Group>
        </Form>
        <Card style={{width:"18rem"}}>
            <Card.Img variant='top' src='holder.js/100px180'></Card.Img>
            <Card.Body>
                <Card.Title>Card Title</Card.Title>
                <Card.Text>
                Some quick example text to build on the card title and make up the
            bulk of the card's content.
                </Card.Text>
                <Button variant='primary'>Go someWhere </Button>
            </Card.Body>
        </Card>
    </>
  )
}
