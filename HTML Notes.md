# HTML Notes:rocket: 


## What is Markup Languages? :speech_balloon:
**Markup languages** are a type of computer language used to define the structure, formatting, and presentation of digital documents. They consist of a set of predefined tags or codes embedded within the text of the document. These tags help to annotate or "mark up" different elements of the content to describe how they should be structured and displayed.

**Characteristics of markup languages**:
---

**Tags and Elements**: Markup languages use tags to define elements within a document. For example, in HTML, ```html <p> and </p>```define a paragraph.

**Attributes**: Tags can also have attributes, which provide additional information about the element. For example;
```html
<img src="image.jpg" alt="Description"> 
```
specifies the source and alternate text for an image.

**Nested Structure**: Elements in markup languages can be nested within other elements, creating a hierarchical structure. 

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/09f51120-380a-4102-9a54-daa62a2a82fc)

Types of Markup Languages:
---

**HTML (HyperText Markup Language)**: The standard markup language used to create and design documents on the World Wide Web. It defines the structure of web pages using tags like ```<html>, <head>, <body>, <p>, and <a>. ```


```html
< !DOCTYPE html> <html>
<head> <meta charset= "UTF-8"›
‹title›Title goes here‹/title> </head>
<body> </body>
</html>
```


**XML (eXtensible Markup Language)**: A flexible markup language that defines rules for encoding documents in a format that is both human-readable and machine-readable. XML is often used for data exchange and storage.

```xml

<note>
  <to>Tove</to>
  <from>Jani</from>
  <heading>Reminder</heading>
  <body>Don't forget me this weekend!</body>
</note>

```

MY FIRST HTML PAGE:
---
（Since I couldn't find the one I made myself before, I redid it again）


¡[](<img width="432" alt="截屏2024-05-25 17 42 38" src="https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/84ba26ef-b178-47fd-ba31-01e16077c5ef">)

**CODE**
```HTML
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>miprimerapagina</title>
    <style>
        body {
            
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            background-color: #f0f0f0;
            
        }
        h1 {
            margin-bottom: 20px;
        }
        img {
            max-width: 100%;
            height: auto;
           
        }
    </style>
</head>
<body>
    <h1>Mi primera pagina</h1>
    <img src="https://i.pinimg.com/474x/c5/fc/43/c5fc43b8ba8f88b3d0ea602fa6d1c092.jpg" alt="Sample Image">
</body>
</html>
```
**Explanation:**

``` <meta charset=“UTF-8”>```:

This tag defines the document's character encoding as UTF-8, a universal character encoding that can represent almost all characters and symbols.

```<meta name=“viewport” content=“width=device-width, initial-scale=1.0”>```

This tag sets the viewport attribute, which ensures that the page is displayed on different devices.

```<title>Image Display</title>```:
This tag defines the title of the page, which is the text that is displayed in the browser's tab bar. In this example.


```body { ... }```

```justify-content: center;:```

This centers the content inside the container horizontally.

```align-items: center;:```

This centers the content inside the container vertically.

```height: 100vh;: ```

This sets the height of the container to 100% of the viewport (i.e. the entire screen height).

```background-color: #f0f0f0;:```

This sets the background color of the page to light gray (#f0f0f0).

```img { ... }```

```max-width: 100%;```
This sets the maximum width of the image to 100% of the container, ensuring that the image does not exceed the width of the container.

```height: auto;:```

This automatically adjusts the height of the image to maintain its original aspect ratio.

The ```<h1>``` tag is used to display the caption “Mi primera pagina”.

The ```<img>``` tag is used to display the image at the specified URL.


Static and dynamic web pages
---

**Static Web Pages**
____

**Static web pages** are fixed content pages that are delivered to the user exactly as they are stored. They do not change unless they are manually updated by someone editing the HTML files.

Characteristics:

-Fixed Content,static web pages remains the same for all users and doesn't change in response to user actions.

-Fast Load Times,there is no server-side processing, static pages load quickly.

-Simplicity in creation and maintenance.

-No personalization or dynamic content.

-Requires manual updating for content changes.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/c95792bc-f854-4c1d-8f2c-22bae7899341)


**Dynamic Web Pages**
____

**Dynamic web pages** are generated in real-time and can display different content and provide interactive features depending on user actions or other inputs.

Characteristics:

Dynamic Content: The content can change based on user interactions, time of day, data fetched from a database, etc.

Database Interaction: Often connected to a database to fetch and display data.

More interactive:Interactive and personalized user experience.

Automatization:Content can be updated automatically from a database.

![IMG_2195](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/2223baba-a798-4e48-b030-69bbd4c12497)




