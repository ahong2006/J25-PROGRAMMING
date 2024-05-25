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


Networks
---
**Architecture: Client-Server Model**
___

**Client-Side:**

Requests: The client  sends a request to a server for resources, such as a web page.

URL (Uniform Resource Locator): The address used to access resources on the internet.

**Server-Side:**

Responds: The server processes the client’s request and sends back the requested resource or an error message if the resource is unavailable.

![IMG_2196](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/4bf44954-f9bb-413b-b51e-b9cc70cce3a9)

**URL:**``` https://www.bilibili.com/video/BV1yx4y1H7rB/?```

**URL Breakdown**

Protocol: ```https://```

Subdomain: ```www```

Domain: ```bilibili.com```

Path: ```/video/BV1yx4y1H7rB/```

Variables:```?spm_id_from=333.1007.tianma.1-3-3.click```


Different Networks
---
**Internet**
___
The Internet is a vast physical network of interconnected computers and other devices (hardware) that communicate with each other globally. It's the underlying infrastructure that allows different systems to connect and exchange data.

**World Wide Web**
___
The World Wide Web (WWW) is a collection of resources (software, data) that are stored on the internet. It includes websites, web pages, multimedia content, and more, all accessible through web browsers.

Wi-Fi
----
**Wi-Fi** is a wireless networking technology that allows devices to connect to the internet and communicate with each other over a wireless local area network (WLAN). It typically involves the following components:

**Computer (Client Device)**: The device you use to access the network, such as a laptop, smartphone, or tablet.

**Access Point (AP)**: A device that allows wireless devices to connect to a wired network using Wi-Fi.

**Router**: A networking device that routes data from the local network to the internet and vice versa.

**ISP (Internet Service Provider)**: The company that provides internet access to your home or business.

**DNS Server (Domain Name System Server)**: Translates domain names ```(like www.google.com)``` into IP addresses that computers can understand.

**Server**: The destination on the internet where the information you request is stored, such as a web server hosting a website.


Difference between P2P and Client-Servor
---
**Client-Server Network**

A *client-server network* is a centralized network architecture where multiple clients (devices like computers, smartphones) connect to a central server to access resources or services. The server provides, manages, and controls access to these resources, while clients request and utilize them.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/399df670-e494-45b1-87a3-24051b1d1e3f)

**Characteristics:**
Centralized control simplifies management.

Easier to back up and restore data.

High security due to centralized access control.

Efficient resource management and sharing.

**Examples:**

*Email Service*: Users (clients) connect to an email server to send and receive emails.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/9a3d568c-d025-4046-ba41-3647ceb19b4d)

Peer-to-Peer (P2P) Network
---


*A peer-to-peer (P2P)* network is a decentralized network architecture where each node (device) acts as both a client and a server. Every device can share and access resources directly with other devices without the need for a central server.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/b4a39ebb-165d-4c82-87d0-42ecb9c842f6)

 **Characteristics:**
 
No central point of failure, improving robustness.

Lower cost as no dedicated server is required.

Each peer can contribute resources, improving overall network capacity.

Example:

*League of Legends*: It use the P2P network, at the start of the game, data and resources are generated and stored in both players' devicess 


![IMG_7037](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/91ead97a-09e3-4c09-8149-583e430a01f9)


IT 💻
---
**What is IT, Exactly?**

IT, or Information Technology, represents the department within a company entrusted with the creation, management, and upkeep of computer systems and technological infrastructure. It spans a spectrum of roles, each pivotal in ensuring smooth operations and technological advancement within an organization.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/2cb4c2b9-eeef-4f0d-bc66-1d6f6ab45d3a)


### Software Development and Maintenance

1. **Project Manager**
   - Oversees and coordinates IT projects, ensuring timely completion within budgetary constraints.

2. **Web Developer**
   - **Front End:** Constructs the user-facing elements of websites, focusing on layout, design, and interactivity.
   - **Back End:** Constructs the server-side logic, databases, and APIs supporting the front end.
   - **Full Stack:** Combines front end and back end skills, managing all aspects of web development.

3. **Programmer**
   - Codes software applications, bringing concepts to life through programming languages.

4. **Analyst**
   - Designs code structure and conducts code reviews to optimize efficiency and eliminate errors.

5. **Software Architect**
   - Defines the overarching structure and conceptual design of software systems.

6. **QA (Quality Assurance)**
   - Ensures software quality through rigorous testing and validation, safeguarding against defects and issues.

### Systems Management

1. **DBA (Database Admin)**
   - Maintains database systems, ensuring data integrity, performance, and security.

2. **System Operator**
   - Manages operating systems, ensuring their functionality and security.

3. **Deployment**
   - Facilitates the release and installation of software updates and patches.

4. **Network Administration**
   - Manages network hardware, guaranteeing reliable connectivity and data transfer.

5. **Operators**
   - Monitor and maintain systems and networks, providing essential technical support.

### 3D Modeling and VFX

1. **Modelers**
   - Craft 3D models for diverse applications such as gaming, film, and simulations.

2. **Rigging**
   - Prepares 3D models for animation by creating skeletal structures.

3. **Animation**
   - Brings characters and objects to life through motion and dynamics.

4. **VFX (Visual Effects)**
   - Creates stunning visual effects, enhancing visual storytelling in various media.
  
     
![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/a028554a-6dcf-453d-b406-ca95756ac828)


### Development Environments

Software development progresses through various environments:

1. **Local Environment**
   - Developer's workspace for initial coding and testing.

2. **Integration (INT)**
   - Platform for integrating and testing software components using simulated data.

3. **Pre-production (Pre)**
   - Staging environment with actual data for final testing and quality assurance.

4. **Production (Pro)**
   - Live environment where software is accessible to end-users.
     
![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/4ec19ba9-79af-435e-ad3a-8fc0af1050ff)



**Case of 黑神话悟空**

Local -> Test -> PRE -> Beta -> PRO


![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/6e08bbfb-c891-455e-a97e-f3f268658401)



