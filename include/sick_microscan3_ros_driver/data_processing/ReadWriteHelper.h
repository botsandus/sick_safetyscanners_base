#pragma once

#include <sick_microscan3_ros_driver/datastructure/DataTypes.h>
#include <boost/type_traits/is_fundamental.hpp>

namespace sick {
namespace data_processing {

class ReadWriteHelper
{
public:
  ReadWriteHelper();

//  /// Returns a value using Little Endian byte order from an memory buffer and increments the buffer afterwards
//  UINT8 readUINT8LittleEndian (const BYTE *&buf);


//  /// Returns a value using Little Endian byte order from an memory buffer and increments the buffer afterwards
//  UINT16 readUINT16LittleEndian (const BYTE*& buf);


//  /// Returns a value using Little Endian byte order from an memory buffer and increments the buffer afterwards
//  UINT32 readUINT32LittleEndian (const BYTE*& buf);


//  UINT8 readUINT8BigEndian(const BYTE*& buf);
//  UINT16 readUINT16BigEndian(const BYTE*& buf);
//  UINT32 readUINT32BigEndian(const BYTE*& buf);

//  INT32 readINT32LittleEndian(const BYTE *&buf);
//  INT16 readINT16LittleEndian(const BYTE *&buf);
  void writeUINT8BigEndian(BYTE*& buf, UINT8 v, UINT16 offset);
  void writeUINT16BigEndian(BYTE*& buf, UINT16 v, UINT16 offset);
  void writeUINT32BigEndian(BYTE*& buf, UINT32 v, UINT16 offset);
  void writeUINT8LittleEndian(BYTE*& buf, UINT8 v, UINT16 offset);
  void writeUINT16LittleEndian(BYTE*& buf, UINT16 v, UINT16 offset);
  void writeUINT32LittleEndian(BYTE*& buf, UINT32 v, UINT16 offset);
  UINT8 readUINT8LittleEndian(const BYTE *&buf, UINT16 offset);
  UINT16 readUINT16LittleEndian(const BYTE *&buf, UINT16 offset);
  UINT32 readUINT32LittleEndian(const BYTE *&buf, UINT16 offset);
  INT32 readINT32LittleEndian(const BYTE *&buf, UINT16 offset);
  UINT8 readUINT8(const BYTE *&buffer, UINT16 offset);
  UINT8 readUINT8BigEndian(const BYTE *&buf, UINT16 offset);
  UINT16 readUINT16BigEndian(const BYTE *&buf, UINT16 offset);
  UINT32 readUINT32BigEndian(const BYTE *&buf, UINT16 offset);
  INT8 readINT8(const BYTE *&buffer, UINT16 offset);
  INT8 readINT8LittleEndian(const BYTE *&buf, UINT16 offset);
  INT8 readINT8BigEndian(const BYTE *&buf, UINT16 offset);
  INT16 readINT16LittleEndian(const BYTE *&buf, UINT16 offset);
  INT16 readINT16BigEndian(const BYTE *&buf, UINT16 offset);
  INT32 readINT32BigEndian(const BYTE *&buf, UINT16 offset);
  void writeUINT8(BYTE *&buf, UINT8 v, UINT16 offset);
  void writeINT8(BYTE *&buf, UINT8 v, UINT16 offset);
  void writeINT8BigEndian(BYTE *&buf, UINT8 v, UINT16 offset);
  void writeINT8LittleEndian(BYTE *&buf, UINT8 v, UINT16 offset);
};

}
}