
#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 100

enum weapon { no_weapon, big_sword, little_sword, wand, fish };
enum armor { no_armor, knight_armor, mage_robes, overalls };

struct party_member {
    char character_name[NAME_LENGTH];

    // Gear:
    enum weapon weapon;
    enum armor armor;
};

void print_party_member(struct party_member member);

void swap_gear(struct party_member *member1, struct party_member *member2);

int main (void) {
    struct party_member luigi;
    strcpy(luigi.character_name, "Luigi");
    luigi.weapon = big_sword;
    luigi.armor = knight_armor;

    struct party_member mario;
    strcpy(mario.character_name, "Mario");
    mario.weapon = no_weapon;
    mario.armor = overalls;

    printf("Gear before swapping:\n\n");
    print_party_member(luigi);
    print_party_member(mario);
    printf("\n");

    swap_gear(&luigi, &mario);

    printf("Gear after swapping:\n\n");
    print_party_member(luigi);
    print_party_member(mario);

}



// Swaps the weapon and armor of member1 and member2
void swap_gear(struct party_member *member1, struct party_member *member2) {
    enum armor temp_armor = member2->armor;
    enum weapon temp_weapon = member2->weapon;
   
    // member1->armor is equivalent to (*member1).armor
    // This goes to the struct pointed at by member1 and accesses its 'armor'
    // field
    member2->armor = member1->armor;
    member2->weapon = member1->weapon;

    
    member1->armor = temp_armor;
    member1->weapon = temp_weapon;
}





/****************** UNIMPORTANT: just for printing ************************/

char *get_weapon_str(enum weapon weapon) {

    if (weapon == big_sword) {
        return "Big sword";
    } else if (weapon == little_sword) {
        return "Little sword";
    } else if (weapon == wand) {
        return "Wand";
    } else if (weapon == fish) {
        return "Fish";
    } else {
        return "No weapon";
    } 

}


char *get_armor_str(enum armor armor) {
    if (armor == knight_armor) {
        return "Knight armor";
    } else if (armor == mage_robes) {
        return "Mage robes";
    } else if (armor == overalls) {
        return "Overalls";
    } else {
        return "No armor";
    } 

}

void print_party_member(struct party_member member) {
    printf("%s\n", member.character_name);
    
    printf("weapon: %s\n", get_weapon_str(member.weapon));
    printf("armor:  %s\n\n", get_armor_str(member.armor));

}

