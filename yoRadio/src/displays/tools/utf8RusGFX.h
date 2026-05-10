#ifndef utf8RusGFX_h
#define  utf8RusGFX_h

char* DspCore::utf8Rus(const char* str, bool uppercase) {
  int index = 0;
  static char strn[BUFLEN];
  bool E = false;
  strlcpy(strn, str, BUFLEN);
  if (uppercase) {
    bool next = false;
    for (char *iter = strn; *iter != '\0'; ++iter)
    {
      if (E) {
        E = false;
        continue;
      }
      byte rus = (byte) * iter;
      if (rus == 208 && (byte) * (iter + 1) == 129) { //Ё
        *iter = (char)208;
        *(iter + 1) = (char)129;
        E = true;
        continue;
      }
      if (rus == 208 && (byte) * (iter + 1) == 134) { //І
        *iter = (char)208;
        *(iter + 1) = (char)134;
        E = true;
        continue;
      }
      if (rus == 209 && (byte) * (iter + 1) == 150) { //і
        *iter = (char)209;
        *(iter + 1) = (char)150;
        E = true;
        continue;
      }
      if (rus == 209 && (byte) * (iter + 1) == 145) { //ё
        *iter = (char)209;
        *(iter + 1) = (char)145;
        E = true;
        continue;
      }
      if (rus == 210 && (byte) * (iter + 1) == 144) { //Ґ
        *iter = (char)210;
        *(iter + 1) = (char)144;
        E = true;
        continue;
      }
      if (rus == 210 && (byte) * (iter + 1) == 145) { //ґ
        *iter = (char)210;
        *(iter + 1) = (char)145;
        E = true;
        continue;
      }
      if (rus == 208 && (byte) * (iter + 1) == 132) { //Є
        *iter = (char)208;
        *(iter + 1) = (char)132;
        E = true;
        continue;
      }
      if (rus == 209 && (byte) * (iter + 1) == 148) { //є
        *iter = (char)209;
        *(iter + 1) = (char)148;
        E = true;
        continue;
      }
      if (rus == 208 && (byte) * (iter + 1) == 135) { //Ї
        *iter = (char)208;
        *(iter + 1) = (char)135;
        E = true;
        continue;
      }
      if (rus == 209 && (byte) * (iter + 1) == 151) { //ї
        *iter = (char)209;
        *(iter + 1) = (char)151;
        E = true;
        continue;
      }
      if (next) {
        if (rus >= 128 && rus <= 143) *iter = (char)(rus + 32);
        if (rus >= 176 && rus <= 191) *iter = (char)(rus - 32);
        next = false;
      }
      if (rus == 208) next = true;
      if (rus == 209) {
        *iter = (char)208;
        next = true;
      }
      *iter = toupper(*iter);
    }
  }
  if(L10N_LANGUAGE==EN) return strn;
  while (strn[index])
  {
    if (strn[index] >= 0xBF)
    {
      switch (strn[index]) {
        case 0xD0: {
            if (strn[index + 1] == 0x81) { //Ё
              strn[index] = 0xA8;
              break;
            }
            if (strn[index + 1] == 0x84) { //Є
              strn[index] = 0xB5;
              break;
            }
            if (strn[index + 1] == 0x87) { //Ї
              strn[index] = 0xAD;
              break;
            }
	    if (strn[index + 1] == 0x86) { //І
              strn[index] = 0x49;
              break;
            }
            if (strn[index + 1] >= 0x90 && strn[index + 1] <= 0xBF) strn[index] = strn[index + 1] + 0x30;
            break;
          }
        case 0xD1: {
            if (strn[index + 1] == 0x91) { //ё
              strn[index] = 0xB8;
              break;
            }
            if (strn[index + 1] == 0x94) { //є
              strn[index] = 0xB6;
              break;
            }
            if (strn[index + 1] == 0x97) { //ї
              strn[index] = 0xAE;
              break;
            }
            if (strn[index + 1] == 0x96) { //і
              strn[index] = 0x69;
              break;
            }
            if (strn[index + 1] >= 0x80 && strn[index + 1] <= 0x8F) strn[index] = strn[index + 1] + 0x70;
            break;
          }
        case 0xD2: {
            if (strn[index + 1] == 0x90) { //Ґ
              strn[index] = 0xA5;
              break;
            }
            if (strn[index + 1] == 0x91) { //ґ
              strn[index] = 0xB4;
              break;
            }
            if (strn[index + 1] >= 0x90 && strn[index + 1] <= 0xBF) strn[index] = strn[index + 1] + 0x30;
            break;
          }
      }
      int sind = index + 2;
      while (strn[sind]) {
        strn[sind - 1] = strn[sind];
        sind++;
      }
      strn[sind - 1] = 0;
    }
    index++;
  }
  return strn;
}

#endif
