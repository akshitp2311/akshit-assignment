import axios from 'axios';

const API_BASE_URL = 'https://your-api-base-url.com';

const api = axios.create({
  baseURL: API_BASE_URL,
});

export const login = (userData) => api.post('/login', userData);
export const register = (userData) => api.post('/register', userData);
export const fetchItems = () => api.get('/items');
export const createItem = (itemData) => api.post('/items', itemData);
export const updateItem = (itemId, itemData) => api.put(`/items/${itemId}`, itemData);
export const deleteItem = (itemId) => api.delete(`/items/${itemId}`);
