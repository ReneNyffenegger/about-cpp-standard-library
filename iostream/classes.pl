#!/usr/bin/perl
use warnings;
use strict;

use GraphViz::ClassDiagram;

my $cd = GraphViz::ClassDiagram->new('classes.pdf');

my $basic_string = $cd->class('basic_string');
   $basic_string->comment('base class');
# typedef basic_string<char> string
# typedef basic_string<char> string
# typedef basic_string<wchar_t> wstring

my $basic_ios = $cd->class('basic_ios');

my $ios_base = $cd->class('ios_base');
   $ios_base->comment('base class');

$cd->inheritance($ios_base, $basic_ios);

my $basic_istream = $cd->class('basic_istream');
my $basic_ostream = $cd->class('basic_ostream');

$cd->inheritance($basic_ios, $basic_istream); # virtual inheritance
$cd->inheritance($basic_ios, $basic_ostream);

my $basic_streambuf = $cd->class('basic_streambuf');
   $basic_streambuf->comment('base class');
   $basic_streambuf->method('overflow', {comment=>'Virtual: called when new character is inserted into full buffer'}); # virtual
my $basic_streambuf_sync = $basic_streambuf->method('sync', {comment=>'Virtual: Flushes buffer to output destination'}    );

my $basic_fstream  = $cd->class('basic_fstream' );
my $basic_ofstream = $cd->class('basic_ofstream');
my $basic_ifstream = $cd->class('basic_ifstream');
my $basic_filebuf  = $cd->class('basic_filebuf' );

my $basic_iostream = $cd->class('basic_iostream');

$cd->inheritance($basic_streambuf, $basic_filebuf);

$basic_iostream->inherits_from($basic_istream, $basic_ostream);

$cd->inheritance($basic_ostream , $basic_ofstream);
$cd->inheritance($basic_istream , $basic_ifstream);
$cd->inheritance($basic_iostream, $basic_fstream );

my $basic_stringbuf = $cd->class('basic_stringbuf');
my $basic_stringstream = $cd->class('basic_stringstream');
my $basic_istringstream = $cd->class('basic_istringstream');
my $basic_ostringstream = $cd->class('basic_ostringstream');

$basic_istringstream -> inherits_from($basic_istream);
$basic_ostringstream -> inherits_from($basic_ostream);

$basic_stringstream -> inherits_from($basic_iostream);
$basic_stringbuf    -> inherits_from($basic_streambuf);

# my $fpos = $cd->class('fpos');

my $istream = $cd->class('istream');
my $ostream = $cd->class('ostream');

my $cin = $cd->global_var('cin');
   $cin -> class($istream);

my $cout = $cd->global_var('cout');
   $cout -> class($ostream);

$cd->create();
