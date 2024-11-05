#ifndef COLLECTBUILDINGTAX_H
#define COLLECTBUILDINGTAX_H
#include <vector>
#include <variant>
#include <memory>
#include <iostream>
#include "Command.h"
#include "City.h"
#include "Government.h"
#include "Building.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"

    class CollectBuildingTax : public Command {
    public:
        using BuildingVariant = std::variant<ApartmentBuilding*, House*, Landmark*, CommercialBuilding*, std::nullptr_t>;

        CollectBuildingTax(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);

        void execute() override;

    private:
        BuildingIterator* iterator;
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
    };

#endif
