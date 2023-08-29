import { createStore, applyMiddleware, combineReducers } from 'redux';
import thunk from 'redux-thunk';
import { authReducer, itemsReducer } from './reducers';

const rootReducer = combineReducers({
  auth: authReducer,
  items: itemsReducer,
});

const store = createStore(rootReducer, applyMiddleware(thunk));

export default store;
