#include "config.h"
#include <common/amount.h>
#include <common/utils.h>
#include <common/json.c>
#include <wire/wire.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_extract_value */
u8 *amount_asset_extract_value(const tal_t *ctx UNNEEDED, struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_extract_value called!\n"); abort(); }
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u16 */
u16 fromwire_u16(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u16 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED,
		     const char *fieldname UNNEEDED,
		     bool quote UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
/* Generated stub for json_array_end */
void json_array_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_array_end called!\n"); abort(); }
/* Generated stub for json_array_start */
void json_array_start(struct json_stream *js UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_array_start called!\n"); abort(); }
/* Generated stub for json_member_direct */
char *json_member_direct(struct json_stream *js UNNEEDED,
			 const char *fieldname UNNEEDED, size_t extra UNNEEDED)
{ fprintf(stderr, "json_member_direct called!\n"); abort(); }
/* Generated stub for json_object_end */
void json_object_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_object_end called!\n"); abort(); }
/* Generated stub for json_object_start */
void json_object_start(struct json_stream *ks UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_object_start called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u16 */
void towire_u16(u8 **pptr UNNEEDED, u16 v UNNEEDED)
{ fprintf(stderr, "towire_u16 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

struct json {
	jsmntok_t *toks;
	char *buffer;
};

static void convert_quotes(char *first)
{
	while (*first != '\0') {
		if (*first == '\'')
			*first = '"';
		first++;
	}
}

static struct json *json_parse(const tal_t * ctx, const char *str)
{
	struct json *j = tal(ctx, struct json);
	j->buffer = tal_strdup(j, str);
	convert_quotes(j->buffer);
	bool ok;
	j->toks = json_parse_input(j, j->buffer, strlen(j->buffer), &ok);
	assert(ok);
	j->toks = json_tok_copy(j, j->toks);
	return j;
}

static void test_toks(const struct json *j, ...)
{
	const jsmntok_t * tok = j->toks + 1;
	const char *value;
	va_list(ap);
	va_start(ap, j);
	while ((value = va_arg(ap, char *)) != NULL) {
		if (tok->type == JSMN_OBJECT)
			assert(streq(value, "{"));
		else if (tok->type == JSMN_ARRAY)
			assert(streq(value, "["));
		else
			assert(json_tok_streq(j->buffer, tok, value));
		tok++;
	}
}

static void sanity(void)
{
	struct json *j = json_parse(tmpctx, "[]");
	json_tok_remove(&j->toks, j->toks, j->toks, 0);
	assert(j);
}

static void remove_one(void)
{
	struct json *j = json_parse(tmpctx, "['invoice']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
}

static void remove_first(void)
{
	struct json *j = json_parse(tmpctx, "['one', 'two', 'three']");
	assert(j);
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j->toks);

	test_toks(j, "two", "three", NULL);
	assert(tal_count(j->toks) == 3);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	assert(j);

	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
	test_toks(j, "2", "two", "3", "three", NULL);
	assert(tal_count(j->toks) == 5);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
	test_toks(j, "2", "two", "3", "three",  NULL);
	assert(tal_count(j->toks) == 5);

}

static void remove_last(void)
{
	struct json *j = json_parse(tmpctx, "['one', 'two', 'three']");
	json_tok_remove(&j->toks, j->toks, j->toks + 3, 1);
	test_toks(j, "one", "two", NULL);
	assert(tal_count(j->toks) == 3);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 5, 1);
	assert(j);
	test_toks(j, "1", "one", "2", "two", NULL);
	assert(tal_count(j->toks) == 5);
}

static void remove_multiple(void)
{
	struct json *j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 2);
	test_toks(j, "c", "d", "e", NULL);

	j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 2, 2);
	test_toks(j, "a", "d", "e", NULL);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three', '4':'four'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 3, 2);
	assert(j);
	test_toks(j, "1", "one", "4", "four", NULL);
	assert(tal_count(j->toks) == 5);
}

static void remove_all(void)
{
	struct json *j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 5);
	assert(tal_count(j->toks) == 1);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three', '4':'four'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 4);
	assert(tal_count(j->toks) == 1);
}

static void remove_complex(void)
{
	struct json *j = json_parse(tmpctx,
	"{'1':'one', '2':'two',"
		"'3': { '3.1': 'a', '3.2':'b', '3.3':'c' }, "
		"'4': { '4.1': 'a', '4.2':'b', '4.3':'c' }, "
	"'5':'five'}");

	json_tok_remove(&j->toks, j->toks, j->toks + 5, 2);
	test_toks(j, "1", "one", "2", "two", "5", "five", NULL);
}

static void remove_inside_obj(void)
{
	jsmntok_t *tok;
	struct json *j = json_parse(tmpctx,
	"{'1':'one', '2':'two',"
		"'3': { '3.1': 'a', '3.2':'b', '3.3':'c' }, "
	"'4':'four'}");

	tok = (jsmntok_t *)json_get_member(j->buffer, j->toks, "3");
	json_tok_remove(&j->toks, tok, tok+1, 1);
	test_toks(j, "1", "one", "2", "two", "3", "{", "3.2", "b", "3.3", "c",
		  "4", "four", NULL);
}

int main(void)
{
	setup_locale();
	setup_tmpctx();

	sanity();
	remove_one();
	remove_first();
	remove_last();
	remove_multiple();
	remove_all();
	remove_complex();
	remove_inside_obj();

	tal_free(tmpctx);
	printf("run-json_remove ok\n");
}
