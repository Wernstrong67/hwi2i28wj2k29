console.log("========JavaScript with objects========");

console.log("\n1.Object Basics\n");


// Basic object creation.

let person = {};

console.log("Person before adding properties ::", person);

// Adding properties to the person object.

person.name = "Nehemiah";
person.age = 22;
person.gender = "male";
person.isMarried = false;
person.residence = "Ikeja, Lagos";
person.greeting = function() {
  console.log("Hi my name is "+person.name+". I\'m "+person.age+" years old. I live in "+person.residence+".");
}

console.log("\nPerson after adding properties :: ", person);
console.log("\nGreetings from person");
person.greeting();

// Setting array inside object

person.qualities = ["helping", "down to earth", "polite", "humble"];

console.log("\nQualities array", person.qualities);

console.log("\n"+person.name+ " is "+person.qualities[0]+ ", "+person.qualities[2]+ ", "+person.qualities[3]+ ".");

// use of this.
console.log("\nUse of this.\n");
const person1 = {
  name : "Brat",
  greeting : function () {
    console.log("Hi! This is "+this.name);
  }
}

const person2 = {
  name : "John",
  greeting : function () {
    console.log("Hi! This is "+this.name);
  }
}

person1.greeting();
person2.greeting();


// OOPS in JS.

console.log("\n2. OOPS IN JS.");

function createNewPerson(name){
  const obj = {};
  obj.name = name;
  obj.greetings = function() {
    console.log("Hi! I\'m "+obj.name);
  }
  
  return obj;
}

const john = createNewPerson("John");
console.log(john);
john.greetings();


// via constructor.

function Student(name) {
  this.name = name;
  this.greetings = function() {
    console.log("Hi! I\'m "+this.name+".");
  }
  
}

const student1 = new Student("Emem");
const student2 = new Student("Uduak");
student1.greetings();
student2.greetings();



// classes in js
console.log("\n3. Class in Js.")

class myClass {
  hello(){
    return "Hi this is Javasvript class!!";
  }
}

const myClassRef = new myClass();
console.log(myClassRef.hello());




    
