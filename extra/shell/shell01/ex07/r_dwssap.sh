#!/bin/zsh

# Définir les plages de lignes
FT_LINE1=7
FT_LINE2=15

# Traiter /etc/passwd pour répondre aux exigences
awk -F: '!/^#/ {print $1}' /etc/passwd | \
awk 'NR % 2 == 0' | \
rev | \
sort -r | \
sed -n "${FT_LINE1},${FT_LINE2}p" | \
tr '\n' ',' | \
sed 's/,/, /g' | \
sed 's/, $/./'
