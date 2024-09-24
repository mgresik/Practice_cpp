#pragma once

const int b = 42;
int a = 45;
int *const ukaz = &a;  // Создание константого указателя, его менять нельзя
const int *ukaz2 = &b; // Создание НЕконстантного указателя на константу!
const int const *ukaz3 = &b;  // Ульта - константный казатель на константу