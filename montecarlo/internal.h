#ifndef ZZGO_MONTECARLO_INTERNAL_H
#define ZZGO_MONTECARLO_INTERNAL_H

#include "move.h"

/* Internal MonteCarlo structures */


/* Internal engine state. */
struct montecarlo {
	int debug_level;
	int games, gamelen;
	int atari_rate, local_rate, cut_rate;
	float resign_ratio;
	int loss_threshold;

	coord_t last_hint;
	int last_hint_value;
};


/* Per-move playout statistics. */
struct move_stat {
	int games;
	int wins;
};

void board_stats_print(struct board *board, struct move_stat *moves, FILE *f);

#endif