#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

void setup_io();
void printButton(int g);
int set_output_ports (int p0, int p1, int p2, int p3);
void read_input_ports ();
