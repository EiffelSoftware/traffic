#!/usr/bin/perl

$HTML = "zurich_little.xml";
open (HTML) or die "Can't open the file!";
@fileinput = <HTML>;
$max = 0;

foreach $line(@fileinput) {
	if ($line =~ m/y\s*=\s*\"(\d+)\"/) {
		if ($1 > $max) {
			$max = $1;
		}
	}
}
foreach $line(@fileinput) {
	if ($line =~ m/y\s*=\s*\"(\d+)\"/) {
		$i = $max - $1;
		$test = $line;
		$test =~ s/y\s*=\s*\"(\d+)\"/y=\"$i\"/;
		print $test;
	}
	else {
		print $line;
	}
}
close (HTML);