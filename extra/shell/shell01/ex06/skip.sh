#!/bin/bash

# Exécuter ls -l et utiliser awk pour sélectionner une ligne sur deux
ls -l | awk 'NR % 2 == 1'
