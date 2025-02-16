#include "InGameObjects/WarriorFactory.h"
#include "InGameObjects/GameObjectFactory.h"
#include "InGameObjects/Army.h"


#include <memory>

	//UnitTest

	Archer archer1;

	int archer1_health1 = archer1.GetHealth();
	archer1.ChangeHealth(-1);
	int archer1_health2 = archer1.GetHealth();
	archer1.ChangeHealth(-12);
	int archer1_health3 = archer1.GetHealth();
	int archer1_max_health = archer1.GetMaxHealth();

	int archer1_distance_of_attack = archer1.GetDistanceOfAttack();
	int archer1_distance_of_walk= archer1.GetDistanceOfWalk();
	int archer1_id = archer1.GetId();
	int archer1_cost = archer1.GetCost();
	int archer1_power1 = archer1.GetPower();
	int archer1_max_power1 = archer1.GetMaxPower();
	archer1.ChangeHealth(10);
	int archer1_health4 = archer1.GetHealth();
	archer1.ChangePower(-1);
	archer1.DealDamage(4);
	int archer1_power2 = archer1.GetPower();
	int archer1_health5 = archer1.GetHealth();

	// UnitFactoryTest
	std::shared_ptr<Archer> archer2 = WarriorFactory::CreateArcher();

	int archer2_health1 = archer2->GetHealth();
	archer2->ChangeHealth(-1);
	int archer2_health2 = archer2->GetHealth();
	archer2->ChangeHealth(-12);
	int archer2_health3 = archer2->GetHealth();
	int archer2_max_health = archer2->GetMaxHealth();

	int archer2_distance_of_attack = archer2->GetDistanceOfAttack();
	int archer2_distance_of_walk = archer2->GetDistanceOfWalk();
	int archer2_id = archer2->GetId();
	int archer2_cost = archer2->GetCost();
	int archer2_power1 = archer2->GetPower();
	int archer2_max_power1 = archer2->GetMaxPower();
	archer2->ChangeHealth(10);
	int archer2_health4 = archer2->GetHealth();
	archer2->ChangePower(-1);
	archer2->DealDamage(4);
	int archer2_power2 = archer2->GetPower();
	int archer2_health5 = archer2->GetHealth();

	//CustomFactoryTest

	std::shared_ptr<CustomUnit> custom = WarriorFactory::CreateCustomUnit(3);
	bool is_empty_custom = (custom == nullptr);

	//SquadTest
	Squad squad0(5, 5, 5);
	Squad squad1(0, 0, 0);

	bool squad0_is_empty1 = squad0.IsEmpty();
	squad0.AddWarrior();
	bool squad0_is_empty2 = squad0.IsEmpty();

	int squad0_distance_of_walk = squad0.GetDistanceOfWalk();
	int squad0_x = squad0.getCoordinates().first;
	int squad0_y = squad0.getCoordinates().second;
	int squad0_distance_of_attack= squad0.GetDistanceOfAttack();

	int squad1_distance_of_walk = squad1.GetDistanceOfWalk();
	int squad1_x1 = squad1.getCoordinates().first;
	int squad1_y1 = squad1.getCoordinates().second;
	int squad1_distance_of_attack = squad1.GetDistanceOfAttack();
	squad1.Move(1, 0);
	int squad1_x2 = squad1.getCoordinates().first;
	int squad1_y2 = squad1.getCoordinates().second;
	squad1.Move(10, 0);
	int squad1_x3 = squad1.getCoordinates().first;
	int squad1_y3 = squad1.getCoordinates().second;
	
	Squad squad2(1, 1, 0);

	squad2.AddWarrior();
	bool squad2_is_empty1 = squad2.IsEmpty();

	squad2.ReduceHealth(20);

	bool squad2_is_empty2 = squad2.IsEmpty();

	//ObjectFactoryTest

	std::shared_ptr<Squad> squad3 = GameObjectFactory::CreateSquad(0,0,0);

	int squad3_distance_of_walk = squad3->GetDistanceOfWalk();
	int squad3_x1 = squad3->getCoordinates().first;
	int squad3_y1 = squad3->getCoordinates().second;
	int squad3_distance_of_attack = squad3->GetDistanceOfAttack();
	squad3->Move(1, 0);
	int squad3_x2 = squad3->getCoordinates().first;
	int squad3_y2 = squad3->getCoordinates().second;
	squad3->Move(10, 0);
	int squad3_x3 = squad3->getCoordinates().first;
	int squad3_y3 = squad3->getCoordinates().second;
