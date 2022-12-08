<div align="center">
  <!-- Logo -->
  <a href="https://github.com/knoxvillie/libft">
  <img src="images/logo.png" alt="Logo" width="100" height="100">
  </a>

  <!-- Project Name -->
  <h1>Get Next Line Project</h1>

  <!-- Short Description -->
  <p>42 Porto get_next_line</p>
</br>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/knoxvillie/get_next_line?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/knoxvillie/get_next_line?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/knoxvillie/get_next_line?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/knoxvillie/get_next_line?style=for-the-badge" />
    <img src="https://img.shields.io/badge/NORMINETTE-3.3.51-blue?style=for-the-badge&logo=" />
  </p>

  <!-- Tree -->
<h4>
    <a href="https://github.com/knoxvillie/libft" target="_blank">:large_blue_diamond: View Demo</a>
  <span> · </span>
    <a href="https://github.com/knoxvillie/libft" target="_blank">:beetle: Report Bug</a>
  <span> · </span>
    <a href="https://github.com/knoxvillie/libft" target="_blank">:speech_balloon: Request Feature</a>
</h4>

  <!-- Subject -->
</br>
  <a href="subject.pdf"><strong>Explore the Subjetc »</strong></a>
</br>
</br>

  <h2>:star2: About The Project</h2>
  <p>
   The goal of the project is to create a script that opens a text file in read mode and reads a predefined amount of bytes <em>BUFFER_SIZE</me>, until the end of a line is reached. When the number of bytes in the line is not a multiple of <em>BUFFER_SIZE</me>, the read function will read bytes that do not belong to the line in question, but to the next line. As a result, this project reads and returns one line at a time from a file, whenever the get_next_line function is executed.
  The bonus part handles multiple text files simultaneously.
  </p>
</div>

<div>
  <h2>:dart: Table of Contents</h2>
<details>
  <summary>Mandatory Part One</summary>
  <ul>
  <details>
    <summary>get_next_line.c</summary>
    <p>Allocates (with malloc(3)) and returns a string representing the integer received as an argument.Negative numbers must be handled.</p>
    </details>
  <details>
    <summary>get_next_line.h</summary>
    <p>Outputs the character 'c' to the given file descriptor.</p>
    </details>
  <details>
    <summary>get_next_line_utils.c</summary>
    <p>Outputs the string 's' to the given file descriptor followed by a newline.</p>
    </details>
  </ul>
</details>

<details>
  <summary>Bonus Part</summary>
  <ul>
  <details>
    <summary>ft_lstadd_back.c</summary>
    <p>Adds the node 'new' at the end of the list.</p>
    </details>
  <details>
    <summary>ft_lstadd_front.c</summary>
    <p>Adds the node 'new' at the beginning of the list.</p>
    </details>
  <details>
    <summary>ft_lstclear.c</summary>
    <p>Deletes the given node and every successor of that node, usign the function 'del'. Finally, the pointer to the list must be set to NULL.</p>
    </details>
  <details>
    <summary>ft_lstdelone.c</summary>
    <p>Takes as a parameter a node and frees the memory of the node's content usign the function 'del' given as a parameter and free the node.</p>
    </details>
  <details>
    <summary>ft_lstiter.c</summary>
    <p>Iterates the list 'lst' and applies the function 'f' on the content of each node.</p>
    </details>
  <details>
    <summary>ft_lstlast.c</summary>
    <p>Return the last node of the list.</p>
    </details>
  <details>
    <summary>ft_lstmap.c</summary>
    <p>Iterates the list 'lst' and applies the function 'f' on the content of each node.</p>
    </details>
  <details>
    <summary>ft_lstnew.c</summary>
    <p>Allocates (with malloc(3)) and returns a new node. The member variable 'content' is initialized with the value of the parameter 'content'.</p>
    </details>
  <details>
    <summary>ft_lstsize.c</summary>
    <p>Counts the number of nodes in a list.</p>
    </details>
  </ul>
</details>
</div>

 <!-- Contributing -->
<h2>:wave: Contributing</h2>
<p>Special thanks to <a href="https://github.com/AlexMitcul" target="_blank"><strong>AlexMitcul</strong></a> for helping with the documentation.</p>
</br>
Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request


<h2 align="center">:wrench: Running Tests</h2>
<h4 align="center">
  <a href="https://github.com/xicodomingues/francinette" target="_blank">:paperclip: Francinette</a>
<span> · </span>
  <a href="https://github.com/Tripouille/gnlTester" target="_blank">:paperclip: gnlTester</a>
<br/>
<br/>
</h4>
<h3 align="center">:camera: Screenshots</h3>
<p align="center">
  <img src="images/pic1.png" alt="Libft-Unit-Test" width="300" height="350"/>
  <img src="images/pic3.png" alt="Libft-Unit-Test" width="300" height="350"/>
  </p>
<p align="center">
  <img src="images/pic2.png" alt="Libft-Unit-Test" width="300" height="350"/>
  <img src="images/pic4.png" alt="Libft-Unit-Test" width="300" height="350"/>
</p>



