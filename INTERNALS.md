# A Quick Guide to `mg` (and `mgb`) Internals

MicroEmacs was written in the 1980s, and is characteristic of its times.
Reagan was in the White House; kids were left alone to raise themselves,
reassured and inspired by his genial and folksy bellicosity,
deregulation of the financial markets, and an economic program named for
himself, the key feature of which was undisguised wealth transfer to the
top decile.

C programmers dismissed type checking, especially across compilation
units--function prototypes would come later, with ANSI C.  Indeed, most
any form of verification, be it of code or inputs to it, was unwelcome,
as were quality assurance practices in general.  These things impede
one's personal improvement, and don't deliver shareholder value.  Real
Programmers strive to get their blood redder and their chests hairier,
strengthening themselves to endure the inevitable war with the Soviet
Union and the horrific nuclear holocaust that will ensue.

This is a list of some things I have to re-teach myself about `mg` every
time I take a few months away from it.

## There is no Boolean type, but it has five distinct values.

You read that correctly; a Real Programmer never employs an `enum`, but
always uses preprocessor macros instead--preferably with a debugger that
knows nothing about them--assigns them to a variable of a
general-purpose numeric type, and never checks whether its value is out
of range.

May we spend a billion CPU cycles with our program in an undefined
state, producing erratic, erroneous, or downright destructive output,
before we waste a hundred ensuring that we don't get into one.  _Now_
you're cookin' with K&R.

This program's ubiquitous "pentabool" macros are defined in `def.h`,
near line 40 as of this writing.

## Every command handler takes two `int` arguments named `f` and `n`.

It's obvious to anyone what these mean, so I don't even have to say.

Welcome to the 1980s Unix computer lab, n00b!

Uniquely, in `mgb`, they're explained in `def.h`, near line 380 as of
this writing.
