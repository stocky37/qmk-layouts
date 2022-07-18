#include "stocky37.h"
#include "engram.h"

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){

	// engram
	&ng_override_1,
  &ng_override_2,
  &ng_override_3,
  &ng_override_4,
  &ng_override_5,
  &ng_override_6,
  &ng_override_7,
  &ng_override_8,
  &ng_override_9,
  &ng_override_0,
  &ng_override_slash,
  &ng_override_quote,
  &ng_override_dbl_quote,
  &ng_override_comma,
  &ng_override_dot,
  &ng_override_quest,
  &ng_override_hash,
  &ng_override_at,

	NULL // Null terminate the array of overrides!
};
