#ifndef UI_HPP
#define UI_HPP

#include <string>
#include <iostream>

// claptrap Coplien
void print_default_constructor_claptrap(std::string name);
void print_overload_constructor_claptrap(std::string name);
void print_copy_constructor_claptrap(std::string name);
void print_destructor_claptrap(std::string name);
void print_operator_claptrap(std::string name);

// activity
void print_attack(std::string name, const std::string& target);
void print_take_damage(std::string name, unsigned int amount);
void print_total_energy_point(unsigned int energyPoint);
void print_heal(std::string name, unsigned int amount);
void print_no_energy_point_for_attack(std::string name);
void print_no_energy_point_for_heal(std::string name);
void print_hitpoint_left(std::string name, unsigned int hitPoint);

// scavtrap activity
void print_scavtrap_attack();
void print_scavtrap_guardGate();



// dead
void print_dead(std::string name);
void print_dead_attack(std::string name);
void print_dead_heal(std::string name);



#endif