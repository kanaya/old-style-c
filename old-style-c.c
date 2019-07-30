len(s, n)
char *s;  /* You can delete this line if you have a traditional C compiler and an ILP32 environment */
{
  n = 0;
  while (*s++) {
    ++n;
  }
  return n;
}

main(argc, argv, i, p, l)
char **argv;  /* You can delete this line... */
char *p;  /* You can delete this line... */
{
  for (i = 0; i < argc; ++i) {
    p = *(argv + i);
    l = len(p);
    write(1, p, l);
    write(1, "\n", 1);
  }
  return 0;
}
