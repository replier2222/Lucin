#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x4d,0x22,0xcc}, 25021},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x1f,0x94,0xdb,0x6f}, 25021}
};

static SeedSpec6 pnSeed6_test[] = {
};
#endif
