// class Employee {
//   #carName;
//   #carModel;
//   #carColor;
//   #carPrice;

//   constructor(name = "Onknown", model = 2020, color = "White", price = 0.0) {
//     this.#carName = name;
//     this.#carModel = model;
//     this.#carColor = color;
//     this.#carPrice = price;
//   }

//   show() {
//     console.log(this.#carName);
//     console.log(this.#carModel);
//     console.log(this.#carColor);
//     console.log(this.#carPrice);
//   }

//   updateName(name = "Set Name") {
//     this.#carName = name;
//     console.log(this.#carName);
//   }
// }

// let car1 = new Employee();
// car1.show();

// let car2 = new Employee("BMW", 2024, "Black", 200000.0);
// car2.show();

// car1.updateName("BM")

function bandNameGenerator (str) {
  let = result = str.slice(0, 1).toUpperCase() + str.slice(1)

  if (str[0] === str.slice(-1))
    result += str.slice(1)
  else 
    result = 'The ' + result;

  return result
}

console.log(bandNameGenerator('tart'))
console.log(bandNameGenerator('reda'))
