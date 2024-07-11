const express = require('express');
const { DateTime } = require('luxon');
const app = express();

app.set('view engine', 'ejs');
app.use(express.static('public'));

const cities = [
  { name: 'New York', timezone: 'America/New_York' },
  { name: 'London', timezone: 'Europe/London' },
  { name: 'Tokyo', timezone: 'Asia/Tokyo' },
  { name: 'Sydney', timezone: 'Australia/Sydney' },
  {name: 'India', timezone: 'Asia/Kolkata'}
];

app.get('/', (req, res) => {
  const cityTimes = cities.map(city => {
    const now = DateTime.now().setZone(city.timezone);
    return {
      name: city.name,
      time: now.toFormat('HH:mm:ss'),
      date: now.toFormat('dd-MM-yy')
    };
  });
  res.render('index', { cityTimes });
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
