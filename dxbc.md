咱搞的这个可能会有一个无法解决的问题，就是一开始就有这个数据，然后不知道这个数据到底在哪里停止然后就用不上了。而这个问题是没有办法解决的。高级编程之所以可读性高是因为为每个阶段的操作赋予了一个变量，可以在更高的抽象上思考。实际上之前的变量还是对这个“新的”变量有影响的，只不过我们认识这个新的变量，然后通过这个新的变量去思考，而不去考虑旧的变量的影响。另外就是如果有一些无效操作应该是比较明显的。

这就带来一个问题就是如何仅仅通过寄存器操作来推断更高级的操作，而将一堆操作归纳为一个高级操作，这是一定会有二义性的，所以只能通过经验来判断。