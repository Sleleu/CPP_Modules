# Templates

Ce modele de code a trou pourra etre completer par le compilateur.

```C++
#include <iostream>

int	max(int x, int y)
{
	return (x >= y ? x : y);
}

```


```C++
#include <iostream>

T max(T x, T y)
{
	return (x >= y ? x : y);
}
```
Dans cet etat ca compile pas. on doit ajouter

```C++
template<typename T>
```

Dans ce template on va declarer un type T qui pourra etre ce qu'on veut. Ca peut etre interessant de prendre les parameres par reference si jamais on a une grosse classe copieuse. Comme notre focntion max ne va jamais modifier l'une des deux isntances, il vaut mieux la mettre en const.

Donc apres le template on met la liste des variables de type. Le template sera une fonction max, qui prnd en parametre x et y mais une reference sur une instance quelconque. Etant donne que le template de fonction ne va pas modifier ces parametres, on les met en const, idem pour le type de retour, ca sert a rien de faire une copie ca prendrait de la place en memoire donc on renvoie une ref sur T const, soit la ref de x soit la ref de y.

```C++
#include <iostream>

template<typename T>
T const & max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}
```

Un template est un patron de code, c'est un modele. Pour cela il faut demander au compilateur de faire une instanciation de notre template. On devra soit faire une instanciation explicite, soit implicite.

```C++
max<int>(a, b)

// ou implicite

max(a, b)
```

Autre exemple avec un template de classe, on peut ecrire un constructeur etc... A l'instanciation de notre template le type T sera remplace par le type effectif

```C++

Template<typename T, typename U> // on declarerait donc les deux typesm identiques ou different

class list
{
	public:

	List<T>(T const &content)
	{
		//etc
	}
	List<T>(List<T> const &list)
	{
		//etc
	}
	~List<T>(void)
	{
		//etc
	}

	//etc

	private:

	T		_content;
	List<T>	_next;
}

int main(void)
{
	List<int>	a(42);
	List<float>	b(3.14f);
	List<List<int>> c(a); // on peut faire des listes de listes d'int, qui prennent a en copie.
	return 0;
}
```

# Default type

Le cas d'un template de classe appele vertex. imaginons au'on dev un jeu et qu'on a besoin d'ecrire une classe pour nos vertex. Notre vertex peut etre de plusiers types, en float, double... On peut donc ecrire un template de classe et le compilateur deroulera le code pour nous.

```C
#include <iostream>
#include <iomanip>

template<typename T = float>

class Vertex
{
	public:
	
	vertex(T const &x, T const &y, T const &x) : _x(x), _y(y), _z(z) {}
	~vertex(void) {}

	T const & getx(void) const {return this->_x;}
	//etc...

	private:

	T const _x;
	//etc

	Vertex(void);
}

```

ON appelle Vertex.class.tpp, pour savoir quels sont les templates et pas les templates.
Dans le template on implique une variable T. C'est ici la notion de variable par defaut si on precise pas au compilateur la variable par defaut ce sera un float.

La surcharge d'operator ostream va prendre en parametre un template. pour utiliser le type T, il doit venir de quelque part, donc je specifie au compilateur qu'on met un template avec une variable de type T. Ensuite on affiche en fonction des variables.

```C++
template<typename T>

std::ostream & operator=(std::ostream &o, Vertex<T> const v)
{
	std::cout.precision(1);
	std::cout << // etc
}
```

Pour le main

```C++
int main(void)
{
	Vertex<int> v1(12, 23, 34);
	Vertex<>	v2(12, 23, 34); // ici on va avoir une conversion implicite fait d'un entier vers un float

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;
}
```

Pour la surcharge d'op, le v1 sera donc un int, et pour v2 ce sera un float.

# Specialisation

Parfois, on peut souhaiter dans un cas particulier que pour un template, on ait un comportement particulier.

On peut avoir des specialisations partielles ou completes. Mais on peut specialiser que completement un template de fonction.

```C++
template<typename T, typename U>

class Pair
{
	public:
	Pair<T, U>(T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)
	{
		std::cout << "generique template" << std::endl
	}

	//etc
}
```

Pour un exemple de specialisation

```C
template<typename U>

class Pair<int, U>
{

}
```

Ici la syntaxe change a cette hauteur la. Dans le cas d'une specialisation on respecifie les ifferentes types, donc le premier type int et le second parametre U. A l'utilisation c'est pareil sauf qu'on a plus qu'une variable de type U, les T se transforment en int.
Il en va de meme pour les accesseurs, etc.

on peut ajouter une phrase dans le constructeur pour voir que c'est celui-ci qui a ete utilise.


Pour une specialisation complete

```C++
template<>
class Pair <bool, bool>
{
	public<bool, bool>(bool lhs, bool rhs)
	{
		std::cout << "bool/bool specialisation" << std::endl;
		this->_n = 0;
		this->_n != static_cast<lhs> << 0;
		this->_n != static_cast<rhs> >> 1;
	}

	~Pair<bool, bool>(void);

	bool
}
```