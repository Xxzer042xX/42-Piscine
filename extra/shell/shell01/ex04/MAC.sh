#!/bin/bash

# Affiche les adresses MAC de toutes les interfaces réseau

# La commande `ifconfig` liste les détails des interfaces réseau, y compris les adresses MAC.
# `grep` filtre cette sortie pour extraire uniquement les adresses MAC.
# - `-o` : Affiche uniquement les correspondances.
# - `-E` : Utilise une expression régulière étendue pour trouver les adresses MAC.
# - `'([[:xdigit:]]{2}(:[[:xdigit:]]{2}){5})'` : Expression régulière pour correspondre au format des adresses MAC.

ifconfig | grep -oE '([[:xdigit:]]{2}(:[[:xdigit:]]{2}){5})'
