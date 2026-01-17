# G. Branden Robinson's MicroEmacs fork

## What is this?

If you know how to use an emacs, you'll know how to use this program.

This codebase is a mild fork of Han Boetes's portable version of
OpenBSD's `mg` text editor, a minimalistic clone of GNU Emacs (most
notably without a Lisp engine).

`mg` is itself descended from MicroEmacs, a project dating back to the
1980s and a contemporary of many other emacsen of the day, including
initial versions of GNU Emacs itself.

## Why is this here?

I'm a `vi` user who wanted to increase his competence with `emacs`.

Famously, Linus Torvalds used his own fork of MicroEmacs for many years,
which suggests that one can be reasonably productive in an emacs lacking
a Lisp system, a feature I'd witnessed GNU Emacs partisans proclaiming
as its greatest.  I happened across OpenBSD's `mg` in casual discussion
with Ingo Schwarze and observed that this was an emacs small enough that
I might actually be able to learn the whole thing--and it seemed that
people really used it seriously, and not **just** to tick a box labelled
"non-copylefted replacement for GNU Emacs".

Over the years I've used several versions of `vi`, including one fairly
close to the BSD original on SunOS 4 (where I managed as a callow youth
to crash a multiprocessor Sun server by having the temerity to think I
could edit the same file with two editor instances--at the same time),
`elvis`, `nvi`, the fence-straddling `vile` (yet another MicroEmacs
descendant), and the reigning champion, `vim`.  Because many of my
colleagues have been enthusiastic `emacs` users, I wanted to see "how
the other half lives", even if these days two halves make much less than
a whole--the JavaScript/Electron-based Atom IDE has efficiently funneled
at least a generation of programmers into a cattle run and deposited
them, numbed and drooling, before the captive bolt pistol of VSCode.

I wanted to settle to my own satisfaction, if no one else's, the
once interminable, but now nearly forgotten, dispute of the Unix Editor
Wars: "which is better?"  ...Knowing that the best answer to that
question is almost always another question: "for whom?" or "at what?"
or similar.

So I took `mg` for a spin and rapidly reached a few conclusions.

1.  I could learn enough emacs (in a GNUish flavor) to become competent
    in the editor without needing to become sophisticated with Lisp, or
    undertake a never-ending project to maintain familiarity with GNU
    Emacs's gigantic ecosystem (ELPA).

2.  The documentation was primarily in the form of a man page.  While an
    introductory article of the kind you'd find in Volume 2 of the
    Seventh Edition Unix manual (and in CSRG-era BSD releases) is always
    welcome and can be invaluable to the beginner, a man page of
    sufficient quality can teach you what it documents if you can learn
    from a specification or similar summary...and if the man page is of
    sufficient quality.

3.  Unfortunately, I found the quality of the `mg` man page wanting.
    The oft-heard claim that a man page is "meant only [to be] a
    reference, not a tutorial" is, in my experience, deployed not as a
    principled defense of a man page's organization or style, but as
    an excuse by software developers to dump material into the man
    page so as to strike off a checklist item marked "documentation".
    People employing such excuses exhibit no respect for technical
    writing, nor seek to cultivate that ability in themselves.
    Whatever label they self-apply--"hacker", "developer", "engineer",
    or "architect", one is assured that they are members of a superior
    species.  That implication is, of course, nonsense--and a warning
    sign of a toxic personality.

4.  `mg`'s  man page was written using the `mdoc` dialect.  `mdoc` is an
    alternative to the older `man` macros for man page composition, and
    like GNU Emacs, it is at the center of a cult of extreme partisans.
    (You can recognize them because they can all agree that it's better
    than the `man` macro package without getting to the familiar
    follow-ups above: "for whom?" and "at what?")

    Because I've been a developer of `groff` for some time and an author
    or maintainer of man pages using the `man` macros for many years, I
    felt it would be prudent to attain some facility with the `mdoc`
    macro language and its idioms for getting things documented.  In my
    opinion, converting a man page from `man` to `mdoc` or _vice versa_
    is ordinarily a waste of time--time that would be better spent
    improving the natural language content of the document.  Its readers
    cannot see which macro language it was written in.

    You can judge the results in this project's man page for yourself.
    I welcome feedback.

5.  In the pursuit of the foregoing, I could use `mg` (or `mgb`) to
    develop the project, applying the skills I sought in point 1.

## Building `mgb`

- Install its prerequisites.  On Debian-based systems, you'll want the
  following packages:
  - `build-essential`,
  - `libbsd-dev`, and
  - `libncurses-dev`.

- Select one of the following three supported build systems and run the
  corresponding commands shown from the shell.

### Make

```bash
make
sudo make install
```

### CMake

```bash
mkdir build
cd build
cmake ..
make
sudo make install
```

### Meson

```bash
meson setup build
meson compile -C build
sudo meson install -C build
```

# Plans

- Finish renaming my fork from `mg` to `mgb` (rename the executable, the
  man page, and so on).
- Populate this `README` with hyperlinks.
- Bring the man page to a state of perfection.
- Assorted ideas to do with the code live in the file `TODO.gbr`.  None
  is on any schedule.

# Conclusion

For other matters, see Han Boetes's helpful introduction, maintained
here as `README.mg.md`.

# See also

GitHub user `troglobit` maintains
[yet another fork of `mg`](https://github.com/troglobit/mg),
which is deeply customizable in terms of feature selection and has a
smaller dependency footprint.  (Concretely, it doesn't require `libbsd`
and you can configure it to do without `curses` as well.)  Han Boetes's
mission, as I understand it, is simply to bring OpenBSD's `mg`, formerly
the province only of elite security professionals who attend technical
conferences to eat freshly caught fugu sashimi with each other on a
dare, to the masses with as little deviation as possible.  It's all good
stuff!
