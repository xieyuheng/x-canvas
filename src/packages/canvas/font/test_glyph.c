#include "index.h"

void
test_glyph(void) {
    test_start();

    glyph_t *glyph = glyph_decode_hex("0041:0000000018242442427E424242420000");

    who_printf("original glyph:\n");
    glyph_print_ascii_art(glyph, '-', 'A');

    glyph_set(glyph, 0x0, 0x0, true);
    glyph_set(glyph, 0x7, 0x0, true);
    glyph_set(glyph, 0x0, 0xf, true);
    glyph_set(glyph, 0x7, 0xf, true);

    who_printf("after setting four corners to true:\n");
    glyph_print_ascii_art(glyph, '-', 'A');

    glyph_set(glyph, 0x0, 0x0, false);
    glyph_set(glyph, 0x7, 0x0, false);
    glyph_set(glyph, 0x0, 0xf, false);
    glyph_set(glyph, 0x7, 0xf, false);

    who_printf("after setting four corners back to false:\n");
    glyph_print_ascii_art(glyph, '-', 'A');

    glyph_destroy(&glyph);

    test_end();
}
