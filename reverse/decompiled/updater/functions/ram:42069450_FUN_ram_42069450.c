
int FUN_ram_42069450(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 - 9 & 0xff) < 0x18) {
    if ((0x80001bU >> (param_2 - 9 & 0x1f) & 1) != 0) {
      return 1;
    }
    if (param_1 == 0x1d) goto LAB_ram_4206957e;
LAB_ram_4206947a:
    if (0x1d < param_1) {
      if (param_1 == 0x21) {
        if (((uint)*(byte *)((param_2 >> 3) + 0x3c079eb4) & 1 << (param_2 & 7)) == 0) {
          if (param_2 == 0x23) {
            return 0x21;
          }
          if (param_2 != 0x3f) {
            return 1;
          }
        }
        return 0x22;
      }
      if (0x21 < param_1) {
        if (param_1 != 0x22) {
          return 1;
        }
        if (((uint)*(byte *)((param_2 >> 3) + 0x3c079eb4) & 1 << (param_2 & 7)) != 0) {
          return 0x22;
        }
        if (param_2 == 0x23) {
          return 0x22;
        }
        if (param_2 != 0x3f) {
          return 1;
        }
        return 0x22;
      }
      uVar2 = (uint)*(byte *)((param_2 >> 3) + 0x3c079eb4) & 1 << (param_2 & 7);
      if (param_1 == 0x1e) {
        if (uVar2 != 0) {
          return 0x1e;
        }
        if (param_2 == 0x23) {
          return 0x21;
        }
        if (param_2 != 0x3f) {
          return 1;
        }
        return 0x1f;
      }
      if (uVar2 != 0) {
        return 0x20;
      }
      if (param_2 == 0x23) {
        return 0x21;
      }
      if (param_2 != 0x3f) {
        return 1;
      }
      return 0x20;
    }
    if (param_1 == 0x19) {
      iVar1 = 0x1a;
LAB_ram_42069564:
      if (param_2 != 0x2f) {
        return 1;
      }
      return iVar1;
    }
    if (param_1 < 0x1a) {
      if (param_1 == 0x17) {
        if (param_2 == 0x2f) {
          return 0x1e;
        }
        if (param_2 != 0x2a) {
          if (0x19 < ((param_2 | 0x20) - 0x61 & 0xff)) {
            return 1;
          }
          return 0x18;
        }
        return 0x1e;
      }
      if (param_1 != 0x18) {
        return 1;
      }
      if (0x19 < ((param_2 | 0x20) - 0x61 & 0xff)) {
        if (param_2 != 0x3a) {
          return 1;
        }
        return 0x19;
      }
      return 0x18;
    }
    if (param_1 == 0x1a) {
      iVar1 = 0x1b;
      goto LAB_ram_42069564;
    }
  }
  else {
    if (param_1 != 0x1d) goto LAB_ram_4206947a;
    if (param_2 == 0x40) {
      return 1;
    }
  }
  if (param_2 == 0x2f) {
    return 0x1e;
  }
LAB_ram_4206957e:
  iVar1 = 0x1f;
  if (((param_2 != 0x3f) && (iVar1 = 0x1d, param_2 != 0x40)) &&
     (iVar1 = 0x1c, 0x19 < ((param_2 | 0x20) - 0x61 & 0xff))) {
    if (param_2 < 0x60) {
      if (param_2 < 0x5b) {
        param_2 = param_2 - 0x21 & 0xff;
        if (0x1c < param_2) {
          return 1;
        }
        uVar2 = 0x17ffbff9;
      }
      else {
        param_2 = param_2 - 0x5b;
        uVar2 = 0x15;
      }
      return ((uVar2 >> (param_2 & 0x1f) & 1) - 1 & 0xffffffe5) + 0x1c;
    }
    iVar1 = 1;
    if (param_2 == 0x7e) {
      return 0x1c;
    }
  }
  return iVar1;
}

