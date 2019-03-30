#pragma once
#include <iostream>

namespace agh 
{
	template <typename S>
	class node {
		public:
			node(S val) : m_val(val), m_next(NULL) { }
			void NewNode(node<S>* new_node)  { m_next = new_node; } 
			node<S>* next() { return m_next; }
			S GetVal() const { return m_val; }

			bool operator!= (const node<S>&);
			node<S> operator++ ();
			S operator* () { return this->m_val; }

		private:
			S m_val;
			node<S>* m_next;
	};


	template <typename T>
	class list {
		public:
			list() : m_head(NULL) { }

			void push_back(T);
			void print() const;
			node<T> end();
			node<T> begin() { return*(m_head); }

			typedef node<T> iterator;

		private:
			node<T>* m_head;
	};



	//===========================================================
	template <typename S>
	bool node<S>::operator!= (const node<S>& right) { 
		if (*(m_val) == *(right.GetVal())) 
			std::cout << *(m_val) << std::endl;
		return *(m_val) != *(right.GetVal()); 
	}

	template <typename S>
	node<S> node<S>::operator++ () { 
		this->m_val = this->m_next->m_val; 
		this->m_next = this->m_next->m_next; 
		return *this; 
	}

	//===========================================================
	template <typename T>
	void list<T>::push_back(T val) {
		node<T>* new_node = new node<T>(val);
		if(m_head) {
			node<T>* tmp = m_head;
			while(tmp->next() != NULL)
				tmp = tmp->next();
			tmp->NewNode(new_node);
		} else {
			m_head = new_node;
		}
		
	}

	template <typename T>
	void list<T>::print() const {
		node<T>* tmp = m_head;
		while(tmp->next() != NULL) {
			std::cout << *(tmp->GetVal()) << ", ";
			tmp = tmp->next();
		}
		std::cout << *(tmp->GetVal()) << std::endl;
	}

	template <typename T>
	node<T> list<T>::end() {
		node<T>* tmp = m_head;
		while(tmp->next() != NULL) {
			tmp = tmp->next();
		}
		return *(tmp);
	}

}