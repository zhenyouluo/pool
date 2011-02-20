About
-----
Pool is a small and simple memory allocator but definitely not a malloc() replacement! As the name implies it uses a pool wherein it allocates memory if you request for it.

The most experienced programmers probably have already a similar library in there arsenal. And this is mine that I use in most of my programs and I'm releasing it to the public.

An usage example would be if you're building a game and load a level from a file. Normally you would do a lot of malloc()'s that you keep track off and later on when you're done with it you'll free() them all one by one. But if you encountered an error throughout the loading of this level you must backtrack the malloc()'s and free() them and spit out an error or something.

Now with Pool it's much simpler you create a pool_t *my_pool = pool_new(0). Load the level and do some pool_alloc( my_pool, size )'s and when you're done with the level you'll just pool_free( my_pool ) and you're done. If an error occurred you'll just pool_free( my_pool ) and spit out an error. Much simpler!



Prons
-----
* Freeing all allocated memory with one command.
* You can create multiple pools.
* You only have to keep track on one pool rather than multiple malloc buffers.
* Nullified allocated memory.



Cons
----
* It's slower then malloc().
* Does not has a function similar to realloc().
* Can be non-efficient with memory in certain cases.



Contact
-------
Twitter: http://twitter.com/abitvin
Github: http://github.com/abitvin
E-mail: vin [at] ingine [dot] nl
