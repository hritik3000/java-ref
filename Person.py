class Person(object):
	def __init__(self, name, age, height, weight):
		self.name = name
		self.age = age
		self.height = height
		self.weight = weight


	def introduce(self):
		print("Hello There! my name is %s, and here are my details." % self.name)


	def printDetails(self):
		print("NAME   : %s" % self.name )
		print("AGE    : %d years" % self.age)
		print("HEIGHT : %.2f cm" % self.height)
		print("WEIGTH : %.2f kg" % self.weight)


	def calculateBMI(self):
		return (self.weight/self.height);


	def update(self):
		self.age += 1
		self.weight *= 1.2 
		self.height *= 1.01


def main():
	me = Person("Chirag", 21, 180.0, 67.5)
	me.introduce();
	for i in range(4):
		print("\n>>>> Fast forwarding %d years >>>>" % i);
		me.printDetails();
		print("my Current BMI is %.2f" % me.calculateBMI());
		me.update();


main()