#include <iostream>
#include <vector>

class type_of_building {
  std::string name;
  long long price;
  std::vector<std::string> rooms_description;
  type_of_building(std::string new_name, long long new_price,
                   std::vector<std::string>& description): name(new_name),
                                                           price(new_price),
                                                           rooms_description(description) { }
};
// ну типа паттерн flyweight;
class Buildings {
  double x;
  double y;
  type_of_building* type;
 public:
  Buildings(double posx, double posy, type_of_building* type1) : x(posx), y(posy), type(type1) { }
  Buildings() : x(0.0), y(0.0), type(nullptr) { }
  void Move(double new_x, double new_y) {
    x = new_x;
    y = new_y;
  }
  Buildings clone(Buildings sourse, double pos_x, double pos_y) {
    Buildings copy;
    copy.x = pos_x;
    copy.y = pos_y;
    copy.type = sourse.type;
  }
// ну типа паттерн prototype;
};

int main() {
  return 0;
}