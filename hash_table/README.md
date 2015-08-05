#Hash table

OK, we're going to make a hash table! Cool! What is a hash table? Well,
it's basically a data structure that implements an associative array. An
associative array is an ADT that is a set of key-value pairs, where
a particular key may appear at most once in the array. There are a couple
of operations that are commonly supported, like inserting a new key-value
pair, getting the value associated with a particular key, deleting
a key-value pair, and so on.

All that is great, but how do we actually implement it? Well, there are
a variety of choices to be made. This image stolen from wikipedia gives us
an idea of what we're shooting for:

![](https://upload.wikimedia.org/wikipedia/commons/7/7d/Hash_table_3_1_1_0_1_0_0_SP.svg)

So what we'd like is a function where we can hash a string like `John
Smith` and get the array index `02` out. That sounds great, but we've got
a problem, and the name of that problem is hash collision.

##Collisions and collisions

One of the problems with this is that unless we allocate an amount of
storage similar to the keyspace size to our array (the array whose indices
we'll get from the hash function) we will have collisions. A collision is
when two values (`title` and `directory`, if we're storing movie info)
produce the same hash value. We need to think hard about what to do in
this case.

If the keys for our key/value store (associative array) are going to be,
say, strings of up to 20 characters, then the keyspace is really really
big. We do not want to allocate enough space to completely avoid
collisions (which would require allocated space equal to keyspace size)
since we'd probably like to store other things on our computer besides our
small movie database.
