
<div align="center">
<table>
  <tr>
    <td colspan="3" align="center"><a href="#"><img src="https://github.com/user-attachments/assets/62ec13c2-45e4-4f2a-a958-b75267e896c8"></a></td>
  </tr>
  <tr>
    <td align="center"><a href="#"><img width="400" src="https://github.com/user-attachments/assets/b21e5533-5f58-4a3f-9652-fea01fc08059"></a></td>
    <td align="center"><a href="#"><img width="400" src="https://github.com/user-attachments/assets/69c66ca2-58ca-4d3b-a68e-9f3dac2147d4"></a></td>
  </tr>
</table>

</div>

> [!WARNING]
> Developed for unix OS.<br>
> This software is NOT official from 42 Network, use it at your own risk.<br>
> For informational purposes only.

<div text-align="left">


You’ve probably had to calculate the days you have for each milestone and even after asking
around, you still might not have everything clear.
Well, that’s what happened to me, so I decided to create a pace-date calculator to know
where I stand and how I’m doing.

I named it "42 Deadlines", and is a personal side project to practice what I’ve learned and,
I hope, to be useful for anyone working under the "pace system."

Of course, it’s not an official application from 42 School and it in no way replaces the
information you receive from the Staff or any official documents from the 42 network.

The information you get is only a guideline based on the kickoff date you input, so it might
not match your actual times, especially if you’ve gone through a freeze, bonus days, etc...

I’ll try to keep it updated, but any help is welcome if you’re interested.


<h2>💻 Technologies Used</h2>

<div align="center">
<table>
  <tr align="center">
      <td>
        <a href="#"><img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" alt="C" width="35" height="35"/></a><br>C
      </td>
      <td>
        <a href="#"><img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/unix/unix-original.svg" alt="CSS3" width="35" height="35"/></a><br>Unix<br>
      </td>
  </tr>
</table>

</div>

<h2>🛠️ Installation</h2>

<div align="left">
Clone this repository:
  
`````
git clone https://github.com/LLuisPP/deadlines42Public.git deadlines42
`````

Navigate to cloned folder:

`````
cd deadlines42
`````
Compile program in your terminal:
  
`````
make
`````
</div>

<h2>▶️ Execution</h2>

Use correct syntax, for example:
`````
./deadlines 22-09-15 5 18
`````
<div align="center">
<a href="#"><img width="460" src="https://github.com/user-attachments/assets/405b1785-bea5-42da-945f-d0f41639c927"></a>
</div>

Handle instructions:
<table>
  <tr>
    <td align="center"><a href="#"><img width="460" src="https://github.com/user-attachments/assets/ca397149-1633-42e0-881d-b6bb65cf1764"></a></td>
    <td align="center"><a href="#"><img width="380" src="https://github.com/user-attachments/assets/ce79f21b-d5d7-4998-b2cf-5d8b267cc53d"></a></td>
  </tr>
  <tr>
    <td align="center"><a href="#"><img width="400" src="https://github.com/user-attachments/assets/a238cc0a-55f3-4d44-9363-ff11c27b2e18"></a></td>
    <td align="center"><a href="#"><img width="445" src="https://github.com/user-attachments/assets/0dbf1948-b9eb-4f5f-882c-d7b969e639a6"></a></td>
  </tr>
</table>
</div>

  
<div align="center">
<h3>42 [pace system calculation] day distribution:</h3>
  
|milestone|8 mths|12 mths|15 mths|18 mths|22 mths|24 mths|
|---|---|---|---|---|---|---|
|0|8|13|18|24|30|45|
|1|24|35|42|48|58|73|
|2|22|33|41|49|60|60|
|3|36|53|67|80|98|128|
|4|51|77|96|115|141|141|
|5|71|107|134|162|197|197|
|6|32|47|59|70|86|86|
||(244 d)|(366 d)|(458 d)|(549 d)|(671 d)|(732 d)|
</div>

<div align="center">
<h3>42 [pace system doc] accumilative to each milestone:</h3>
  
|milestone|8 mths|12 mths|15 mths|18 mths|22 mths|24 mths|
|---|---|---|---|---|---|---|
|0|8|13|18|24|30|45|
|1|32|48|60|72|88|118|
|2|54|81|101|121|148|178|
|3|90|134|168|201|246|306|
|4|141|211|264|316|387|447|
|5|212|318|398|478|584|644|
|6|244|365|457|548|670|730|
</div>

</div>

> [!TIP]
> Key concepts: `timestamp` `leap_year` `epoch`

<h2>🤝 Contributions</h2>

> [!NOTE]
> If you find an error and you want to contribute:
 
Fork the repository  
- Create a pull request
- Create a new branch: `git checkout -b ErrorBug`
- Make your changes and commit them: `git commit -m 'Error description'`
- Push the changes to your branch: `git push origin ErrorBug`
