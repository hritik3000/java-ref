public class Person {
	String name;
	int age;
	float height, weight;
	Person(String name, int age, float height, float weight)
	{
		this.name = name;
		this.age = age;
		this.height = height;
		this.weight = weight; 
	}

	public static void main(String args[])
	{
		Person me = new Person("Chirag", 21, 180.0f, 67.5f);
		me.introduce();
		for(int i = 0; i <= 3; i++)
		{
			System.out.println("\n>>>> Fast forwarding "+i+" years >>>>");
			me.printDetails();
			System.out.println("my Current BMI is " + me.calculateBMI());
			me.update(); 
		}
	}

	void introduce()
	{
		System.out.println("Hello There! my name is "+this.name+", and here are my details.");
	}

	void printDetails()
	{
		System.out.println("NAME   : "+ this.name );
		System.out.println("AGE    : "+ this.age +" years");
		System.out.println("HEIGHT : "+ this.height+" cm");
		System.out.println("WEIGTH : "+ this.weight+" kg" );
	}

	float calculateBMI()
	{
		return (this.weight/this.height);
	}

	void update()
	{
		this.age += 1;
		this.weight *= 1.2; 
		this.height *= 1.01;
	}
}