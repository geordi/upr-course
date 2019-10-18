svgs=$(wildcard *.tex)
svgs2=$(wildcard *.tex.jinja)

all: ${svgs:.tex=.svg} ${svgs2:.tex.jinja=.svg}

%.tex: %.tex.jinja
	python -c "import jinja2, sys; print(jinja2.Environment().from_string(sys.stdin.read()).render())" < $^ > $@

%.svg: %.dvi
	dvisvgm $^

%.dvi: %.tex
	latex $^
