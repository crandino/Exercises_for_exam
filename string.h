#ifndef __String_H__
#define __String_H__

class String {

private:
	char *str;
    unsigned int size;

	void alloc(int required_memory);

public:

	String();
	String(const char* format, ...);
	//String(const char* _str);
	String(const String &_str);
	~String();

	bool operator== (const String &_str) const;
	bool operator== (const char *_str) const;
	bool operator!= (const String &_str) const;
	bool operator!= (const char *_str) const;
	const String& operator= (const String &_str);
	const String& operator= (const char *_str);
	const String& operator+= (const String &_str);
	const String& operator+= (const char *_str);

	const String& trim();
	//void trim();

	unsigned int getLength() const;
	char* getString() const;
	unsigned int capacity() const;
	void clear();
	
};


#endif // !__String_H__
