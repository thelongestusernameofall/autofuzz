#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define STATIC static
#definigned int size)
{
	return fread(buf, 1, size, stdin);
}

static int flush(/*const*/ void *buf, unsigned int size)
{
	e INIT

static void error(/*const*/ char *msg)
{
	fprintf(stderr, "%s\n", msg);
}

static int fill(void *buf, unsigned int size)
{
	return fread(buf, 1, size, stdin);
}

static ind flush(/*const*/ void *buf, unsigned int size)
{
	return fwrite(buf, 1, size, stdout);
}

static void test_buf_to_cb = fread(in, 1, sizeof(in), stin);
	ret = decompress(in, in_size, NULL, &flush, NULL, &in_used, &error);
	fprintf(stderr, "ret = %d; in_used = %d\n", ret, in_used);
}

static void test>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_cb_to_buf(void)
{
	int in_used;
	int  t;
	ret = decompress(in, 0, &fill, NULL, out, &in_used, &error);
	/* fwrite(out, 1, FIXME, stdout); */
	fprintf(stderr, "ret = %d; in_used = %d\n", ret, in_used);
}

