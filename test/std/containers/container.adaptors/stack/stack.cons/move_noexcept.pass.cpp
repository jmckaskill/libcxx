//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <stack>

// stack(stack&&)
//        noexcept(is_nothrow_move_constructible<container_type>::value);

// This tests a conforming extension

// UNSUPPORTED: c++98, c++03

#include <stack>
#include <cassert>

#include "MoveOnly.h"

int main()
{
    {
        typedef std::stack<MoveOnly> C;
        static_assert(std::is_nothrow_move_constructible<C>::value, "");
    }
}
