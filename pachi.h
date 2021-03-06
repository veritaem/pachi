#ifndef PACHI_PACHI_H
#define PACHI_PACHI_H

/* Pachi binary */
extern char *pachi_exe;

/* Ruleset from cmdline, if present. */
extern char *forced_ruleset;

/* Don't pass first ? Needed on kgs or cleanup phase can be abused. */
extern bool nopassfirst;


/* Free globals */
void pachi_done();


#endif
