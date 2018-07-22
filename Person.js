function Person(name, age, height, weight)
{
	this.name = name
	this.age = age
	this.height = height
	this.weight = weight


	this.introduce = function()
	{
		console.log("Hello There! my name is " + this.name + ", and here are my details.")
	};

	this.printDetails = function()
	{
			console.log("NAME   : "+ this.name );
			console.log("AGE    : "+ this.age +" years");
			console.log("HEIGHT : "+ this.height+" cm");
			console.log("WEIGTH : "+ this.weight+" kg" );
	};


	this.calculateBMI = function()
	{
		return (this.weight/this.height);
	};
			

	this.update = function()
	{
		this.age += 1
		this.weight *= 1.2 
		this.height *= 1.01	
	};
}

function main()
{
	me = new Person("Chirag", 21, 180.0, 67.5);
	me.introduce();
	for(i = 0; i <= 3; i++)
	{
		console.log("\n>>>> Fast forwarding "+i+" years >>>>");
		me.printDetails();
		console.log("my Current BMI is " + me.calculateBMI());
		me.update(); 
	}
}

main()