typedef struct {
	char data[1024];
	int size;
} CBuffer;

void init_buffer(CBuffer* buf) {
	buf->size = 0;
}

void append_data(CBuffer* buf, const char* text, int len) {
	memcpy(buf->data + buf->size, text, len);
	buf->size += len;
}

int main() {
	CBuffer buf;
	init_buffer(&buf);

	append_data(&buf, "Hello", 5);

	// freely data pollution
	buf.size = -999;

	return 0;
}
