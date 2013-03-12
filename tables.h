//--------------------------------------------------------------------
//
//   Visual Binary Diff
//   Copyright 1995-2005 by Christopher J. Madsen
//
//   Various display and conversion tables
//
//   This program is free software; you can redistribute it and/or
//   modify it under the terms of the GNU General Public License as
//   published by the Free Software Foundation; either version 2 of
//   the License, or (at your option) any later version.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with this program.  If not, see <http://www.gnu.org/licenses/>.
//--------------------------------------------------------------------

// How to display bytes as ASCII:
const char asciiDisplayTable[256] = {
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
  0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
  0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
  0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
  0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
  0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
  0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
  0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
  0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
  0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
  0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
  0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
#ifdef WIN32_CONSOLE
  char(0x78), char(0x79), char(0x7A), char(0x7B),
  char(0x7C), char(0x7D), char(0x7E), char(0x7F),
  char(0x80), char(0x81), char(0x82), char(0x83),
  char(0x84), char(0x85), char(0x86), char(0x87),
  char(0x88), char(0x89), char(0x8A), char(0x8B),
  char(0x8C), char(0x8D), char(0x8E), char(0x8F),
  char(0x90), char(0x91), char(0x92), char(0x93),
  char(0x94), char(0x95), char(0x96), char(0x97),
  char(0x98), char(0x99), char(0x9A), char(0x9B),
  char(0x9C), char(0x9D), char(0x9E), char(0x9F),
  char(0xA0), char(0xA1), char(0xA2), char(0xA3),
  char(0xA4), char(0xA5), char(0xA6), char(0xA7),
  char(0xA8), char(0xA9), char(0xAA), char(0xAB),
  char(0xAC), char(0xAD), char(0xAE), char(0xAF),
  char(0xB0), char(0xB1), char(0xB2), char(0xB3),
  char(0xB4), char(0xB5), char(0xB6), char(0xB7),
  char(0xB8), char(0xB9), char(0xBA), char(0xBB),
  char(0xBC), char(0xBD), char(0xBE), char(0xBF),
  char(0xC0), char(0xC1), char(0xC2), char(0xC3),
  char(0xC4), char(0xC5), char(0xC6), char(0xC7),
  char(0xC8), char(0xC9), char(0xCA), char(0xCB),
  char(0xCC), char(0xCD), char(0xCE), char(0xCF),
  char(0xD0), char(0xD1), char(0xD2), char(0xD3),
  char(0xD4), char(0xD5), char(0xD6), char(0xD7),
  char(0xD8), char(0xD9), char(0xDA), char(0xDB),
  char(0xDC), char(0xDD), char(0xDE), char(0xDF),
  char(0xE0), char(0xE1), char(0xE2), char(0xE3),
  char(0xE4), char(0xE5), char(0xE6), char(0xE7),
  char(0xE8), char(0xE9), char(0xEA), char(0xEB),
  char(0xEC), char(0xED), char(0xEE), char(0xEF),
  char(0xF0), char(0xF1), char(0xF2), char(0xF3),
  char(0xF4), char(0xF5), char(0xF6), char(0xF7),
  char(0xF8), char(0xF9), char(0xFA), char(0xFB),
  char(0xFC), char(0xFD), char(0xFE), char(0xFF)
#else
  0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E,  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.'
#endif
}; // end asciiDisplayTable

// How to convert ASCII input to EBCDIC bytes:
const Byte ascii2ebcdicTable[256] = {
   0x00, 0x01, 0x02, 0x03, 0x37, 0x2D, 0x2E, 0x2F, 0x16, 0x05,
   0x15, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13,
   0x3C, 0x3D, 0x32, 0x26, 0x18, 0x19, 0x3F, 0x27, 0x1C, 0x1D,
   0x1E, 0x1F, 0x40, 0x5A, 0x7F, 0x7B, 0x5B, 0x6C, 0x50, 0x7D,
   0x4D, 0x5D, 0x5C, 0x4E, 0x6B, 0x60, 0x4B, 0x61, 0xF0, 0xF1,
   0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0x7A, 0x5E,
   0x4C, 0x7E, 0x6E, 0x6F, 0x7C, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5,
   0xC6, 0xC7, 0xC8, 0xC9, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6,
   0xD7, 0xD8, 0xD9, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8,
   0xE9, 0xAD, 0xE0, 0xBD, 0x5F, 0x6D, 0x79, 0x81, 0x82, 0x83,
   0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x91, 0x92, 0x93, 0x94,
   0x95, 0x96, 0x97, 0x98, 0x99, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6,
   0xA7, 0xA8, 0xA9, 0xC0, 0x4F, 0xD0, 0xA1, 0x07, 0x20, 0x21,
   0x22, 0x23, 0x24, 0x25, 0x06, 0x17, 0x28, 0x29, 0x2A, 0x2B,
   0x2C, 0x09, 0x0A, 0x1B, 0x30, 0x31, 0x1A, 0x33, 0x34, 0x35,
   0x36, 0x08, 0x38, 0x39, 0x3A, 0x3B, 0x04, 0x14, 0x3E, 0xFF,
   0x41, 0xAA, 0x4A, 0xB1, 0x9F, 0xB2, 0x6A, 0xB5, 0xBB, 0xB4,
   0x9A, 0x8A, 0xB0, 0xCA, 0xAF, 0xBC, 0x90, 0x8F, 0xEA, 0xFA,
   0xBE, 0xA0, 0xB6, 0xB3, 0x9D, 0xDA, 0x9B, 0x8B, 0xB7, 0xB8,
   0xB9, 0xAB, 0x64, 0x65, 0x62, 0x66, 0x63, 0x67, 0x9E, 0x68,
   0x74, 0x71, 0x72, 0x73, 0x78, 0x75, 0x76, 0x77, 0xAC, 0x69,
   0xED, 0xEE, 0xEB, 0xEF, 0xEC, 0xBF, 0x80, 0xFD, 0xFE, 0xFB,
   0xFC, 0xBA, 0xAE, 0x59, 0x44, 0x45, 0x42, 0x46, 0x43, 0x47,
   0x9C, 0x48, 0x54, 0x51, 0x52, 0x53, 0x58, 0x55, 0x56, 0x57,
   0x8C, 0x49, 0xCD, 0xCE, 0xCB, 0xCF, 0xCC, 0xE1, 0x70, 0xDD,
   0xDE, 0xDB, 0xDC, 0x8D, 0x8E, 0xDF
}; // end ascii2ebcdicTable

// How to display bytes as EBCDIC:
const char ebcdicDisplayTable[256] = {
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
  0x20,  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.', 0x2E, 0x3C, 0x28, 0x2B, 0x7C,
  0x26,  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.', 0x21, 0x24, 0x2A, 0x29, 0x3B, 0x5E,
  0x2D, 0x2F,  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.', 0x2C, 0x25, 0x5F, 0x3E, 0x3F,
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.', 0x60, 0x3A, 0x23, 0x40, 0x27, 0x3D, 0x22,
   '.', 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
  0x68, 0x69,  '.',  '.',  '.',  '.',  '.',  '.',
   '.', 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70,
  0x71, 0x72,  '.',  '.',  '.',  '.',  '.',  '.',
   '.', 0x7E, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
  0x79, 0x7A,  '.',  '.',  '.', 0x5B,  '.',  '.',
   '.',  '.',  '.',  '.',  '.',  '.',  '.',  '.',
   '.',  '.',  '.',  '.',  '.', 0x5D,  '.',  '.',
  0x7B, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
  0x48, 0x49,  '.',  '.',  '.',  '.',  '.',  '.',
  0x7D, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50,
  0x51, 0x52,  '.',  '.',  '.',  '.',  '.',  '.',
  0x5C,  '.', 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
  0x59, 0x5A,  '.',  '.',  '.',  '.',  '.',  '.',
  0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
  0x38, 0x39,  '.',  '.',  '.',  '.',  '.',  '.'
}; // end ebcdicDisplayTable

//--------------------------------------------------------------------
// Local Variables:
// cjm-related-file: "vbindiff.cpp"
//             mode: c++
//     c-file-style: "cjm"
// End:
