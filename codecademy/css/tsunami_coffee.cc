/*
Tsunami Coffee

Use your knowledge of relative units and responsive web design to help Tsunami Coffee make their website come to life.

Throughout this project, you’ll edit the existing Tsunami Coffee website code so that the website appears correctly on varying screen sizes. In addition, you’ll contribute styles that will make this website more visually appealing.

If you get stuck during this project or would like to see an experienced developer work through it, click “Get Unstuck“ to see a project walkthrough video.
Tasks
1/14 complete
Mark the tasks as complete by checking them off
1.
The website needs a background image in the main section at the top of the page.
Navigate to style.css and add the following image to the .main class as a cover-sized background image:
https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/bg-photo.png
2.
The navigation items at the top of the page need more padding.
Add a padding of 0.75rem to the top and bottom, and 1.25rem to the left and right of the navigation’’s list items.
3.
The coffee beans image under the main banner in the supporting section is too large.
Inside of the .supporting img selector, set the height and width dimensions to 10 percent.
4.
The coffee beans image looks better now, but the text to the right of it needs to be spaced out further from the image.
Set the right margin of the image to 5 percent.
5.
The font size of the rating should be increased within the rating section.
Use rem units to make the h1 text equivalent to 40 pixels. This can be calculated based on the html element’s font size.
6.
The map image near the bottom of the page should span the page’s width, instead of overflowing.
Add a width of 100 percent to the .location img CSS rule.
7.
Now the page looks better on large screens. When the page is resized to a smaller width, the page needs to resize and reorganize its elements using media queries.
Write a media query that targets the screen when its width is under 960 pixels and smaller.
8.
When the page is resized to a width less than 960 pixels, note that the navigation bar has empty space above it. Within the media query you wrote in the last step, set the top padding of the .main class to 0.
9.
Resize the browser from large to small. Notice that the coffee beans image in the supporting section causes the supporting paragraph to become too thin.
Write a media query for screens under 700 pixels.
10.
Inside the media query, make the image disappear by ensuring that the .supporting img selector displays nothing.
You can make an element disappear using the following property and value:
display: none;
Copy to Clipboard
11.
Continue to resize the width of the browser until the website is the size of a small screen.
Write a media query that targets a screen width less than 470 pixels.
12.
Inside the media query for small screens, you’’ll need to apply a variety of styles.
First, make the rating’s h1 font size the equivalent of 32 pixels using rem units.
13.
The images in the gallery are too small for small screens.
Select the images in the gallery and style them so that they fill the width of the screen.
Then set their margin to 0 so they span across the entire page.
14.
The footer’s text is not formatted correctly on small screen sizes.
Hide the nav inside the footer to appear better on small screens.
Then, resize the screen from small to large and watch your website change its appearance to best fit the screen size. You just built a responsive website!
-------------------------------------------------------------------------------------------------------------------------------------------------------------
HTML
----
<!DOCTYPE html>
<html>
<head>
  <title>Tsunami Coffee</title>
  <link rel="stylesheet" type="text/css" href="resources/css/reset.css">
  <link rel="stylesheet" type="text/css" href="resources/css/style.css">
</head>
<body>
  <div class="main">
    <nav class="container">
      <ul>
        <li>Store</li>
        <li>Hours</li>
        <li>Wholesale</li>
      </ul>
    </nav>
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/logo.png" />
  </div>
  <div class="container supporting">
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/beans.png" />
    <div class="description">
      <h2>Great coffee does not happen by accident.</h2>
      <p>We work side by side with farmers around the world to strengthen farming practices to cultivate the best coffee beans in the world. Then, we train our baristas in the sacred art of the brew process, yielding the most flavorful coffee you’ve ever tasted.
      </p>
      <p>Tsunami Coffee is certified organic and fair trade.</p>
    </div>
  </div>
  <div class="rating">
    <div class="container">
      <h1>9.4/10: A rush of flavors. Absolutely divine.</h1>
      <p>~ Coffee Critic</p>
    </div>
  </div>
  <div class="container gallery">
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/latte.png" />
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/coffee-man.png" />
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/pastries.png" />
    <div class="clearfix"></div>
  </div>
  <div class="container location">
    <img src="https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/map.png" />
    <h1>Brewed with love in San Francisco.</h1>
  </div>
  <footer>
    <div class="container">
      <div class="copyright">
        &copy; Tsunami Coffee
      </div>
      <nav>
        <ul>
          <li>Store</li>
          <li>Hours</li>
          <li>Wholesale</li>
        </ul>
      </nav>
    </div>
  </footer>
</body>
</html>

-------------------------------------------------------------------------------------------------------------------------------------------------------------
CSS
---*/
html,
body {
  font-family: Helvetica, sans-serif;
  font-size: 16px;
  margin: 0;
  background-color: white;
}

.container {
  max-width: 960px;
  margin: 0 auto;
}

.main {
  height: 30rem;
  padding-top: 1rem;
  background-image:url('https://content.codecademy.com/courses/freelance-1/unit-5/tsunami-coffee/images/bg-photo.png');
  background-repeat: no-repeat;
  background-position: center;
  background-size: cover;
}

.main img {
  width: 15rem;
  display: block;
  margin: auto;
  margin-top: 5rem;
}

nav {
  background-color: OrangeRed;
  color: White;
  padding: 0.75rem 1.25rem;
}

ul {
  list-style: none;
  margin: 0;
}

li {
  display: inline-block;
}

.supporting,
.rating,
.gallery,
.location {
  margin: 4em auto;
}

.supporting {
  display: flex;
  align-items: flex-start;
  padding: 0 1rem;
}

.supporting img {
  width: 10%;
  margin-right: 5%;
}

.rating {
  background-color: OrangeRed;
  height: 20rem;
  padding: 0 1rem;
  color: white;
  display: flex;
  justify-content: center;
  align-items: center;
}

.rating h1 {
  font-size: 2.5rem;
}

.gallery img {
  display: block;
  width: 30%;
  margin: 1.5%;
  float: left;
}

.clearfix {
  clear: both;
}

.location {
  text-align: center;
  margin-bottom: 7rem;
}

.location img {
  width: 100%;
}

footer {
  background-color: OrangeRed;
  padding: 0 1rem;
}

footer .container {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 5em 0;
  color: white;
}

@media only screen and (max-width: 960px) {
  .main {
    padding-top: 0;
  }
}

@media only screen and (max-width: 700px) {
  .supporting img {
    display: none;
  }
}

@media only screen and (max-width: 470px) {
  .rating h1 {
    font-size: 2rem;
  }
  .gallery img {
    width: 100%;
    margin: 0;
  }

  footer nav {
    display: none;
  }
}
