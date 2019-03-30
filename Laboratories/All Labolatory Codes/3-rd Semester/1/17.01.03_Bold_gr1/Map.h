// class map_type_name::map_element;

class map_type_name {
public:
	class map_element {
	private:
		friend class map_type_name;
		map_element* _next;
		map_key_type _key;
		map_value_type _value;
	public:
		map_element(map_key_type key, map_value_type value);
	};
	map_type_name();
	~map_type_name();
	void insert(map_key_type key, map_value_type value);
	void print(const char* title) const;
	map_value_type& at(map_key_type key) const;
	bool contains(map_key_type key) const;
private:
	map_type_name::map_element* _head;
	int _counter;
};

map_type_name::map_element::map_element(map_key_type key, map_value_type value): _next(NULL), _key(key), _value(value) {}

map_type_name::map_type_name(): _head(NULL), _counter(0) {}

map_type_name::~map_type_name() {
	map_element* tmp;
	while (_head != NULL) {
		tmp = _head->_next;
		delete _head;
		_head = tmp;
	}
}

void map_type_name::insert(map_key_type key, map_value_type value) {
	if (!_head) {
		_head = new map_element(key, value);
		return;
	}
	map_element* tmp = _head;
	while (tmp->_next != NULL)
		tmp = tmp->_next;
	tmp->_next = new map_element(key, value);
}

void map_type_name::print(const char* title) const {
	map_element* tmp = _head;
	while (tmp != NULL) {
		std::cout << title << " k: " << tmp->_key << " v: " << tmp->_value << std::endl;
		tmp = tmp->_next;
	}
}

map_value_type& map_type_name::at(map_key_type key) const {
	map_element* tmp = _head;
	while (tmp != NULL) {
		if (tmp->_key == key)
			return tmp->_value;
		tmp = tmp->_next;
	}
	tmp = _head;
	while (tmp->_next != NULL)
		tmp = tmp->_next;
	tmp->_next = new map_element(key, 0);
	return tmp->_next->_value;
}

bool map_type_name::contains(map_key_type key) const {
	map_element* tmp = _head;
	while (tmp != NULL) {
		if (tmp->_key == key)
			return 1;
		tmp = tmp->_next;
	}
	return 0;
}