/*
 * Copyright (C) 2011 by Dave Reisner <dreisner@archlinux.org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _NOSR_UPDATE_H
#define _NOSR_UPDATE_H

#define PACMANCONFIG "/etc/pacman.conf"

struct repo_t {
	char *name;
	char **servers;
	size_t servercount;
	int filefound;
};

struct repo_t **find_active_repos(const char *filename, int *repocount);
int nosr_update(struct repo_t **repos, int repocount);
void repo_free(struct repo_t *repo);

#endif /* _NOSR_UPDATE_H */

/* vim: set ts=2 sw=2 noet: */
