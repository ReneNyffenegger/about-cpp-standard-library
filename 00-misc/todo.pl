#!/usr/bin/perl
use warnings;
use strict;

use lib '/home/rene/github/lib/perl-GraphViz-ClassDiagram/lib/';
use GraphViz::ClassDiagram;

my $class_diagram = GraphViz::ClassDiagram->new('todo.pdf');

$class_diagram->create();
