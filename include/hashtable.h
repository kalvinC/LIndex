#pragma once

namespace LIndex {

class HashTable {
public:
  HashTable(uint32_t size);
  ~HashTable();

private:
  uint32_t size;

};
}
