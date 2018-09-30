const words = ['abcd', 'dfd', 'abc', 'abcd', 'abc', 'dfd', 'abc'];

console.log('Inputs are => ');
words.map(word => console.log(word));

const reduced = words.reduce((accumulator, currentWord) => {
  if (accumulator.find(({ word }) => word === currentWord)) {
    return accumulator.map(({ word, frequency }) => {
      if (word === currentWord) {
        return { word, frequency: frequency + 1 };
      }
      return { word, frequency };
    });
  }
  return [...accumulator, { word: currentWord, frequency: 1 }];
}, []);

console.log('The number of unique inputs are -> ', reduced.length);

reduced.map(({ word, frequency }) =>
  console.log(`Frequency of "${word}" is ${frequency}.`)
);
