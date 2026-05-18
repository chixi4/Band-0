
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201c670(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    if (_DAT_ram_3fcc50c8 != 0) {
      return;
    }
    if ((int)(uint)(DAT_ram_3fcc50b1 != '\x01') <= _DAT_ram_3fcc50b8) {
      return;
    }
    if (param_1[1] + _DAT_ram_3fcc50b4 < 3000) {
      _DAT_ram_3fcc50b4 = param_1[1] + _DAT_ram_3fcc50b4;
      return;
    }
    _DAT_ram_3fcc50b8 = _DAT_ram_3fcc50b8 + 1;
    _DAT_ram_3fcc50b4 = 0;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    iVar2 = param_1[1];
    cVar1 = (char)param_1[2];
    if (_DAT_ram_3fcc50c8 == 2) {
      if (iVar2 == 2) goto LAB_ram_4201c6f4;
      if (iVar2 == 3) {
        if (cVar1 != '\0') {
          return;
        }
        if (0 < _DAT_ram_3fcc50ac) {
LAB_ram_4201c7e4:
          FUN_ram_4201c2de();
          return;
        }
        _DAT_ram_3fcc50ac = _DAT_ram_3fcc50ac + 1;
      }
      else {
        if (iVar2 != 4) {
          if (iVar2 != 1) {
            return;
          }
          if (cVar1 == '\0') {
            return;
          }
          goto LAB_ram_4201c7e4;
        }
        if (cVar1 != '\0') {
          return;
        }
        if (_DAT_ram_3fcc50ac < 1) {
          return;
        }
        _DAT_ram_3fcc50ac = _DAT_ram_3fcc50ac + -1;
      }
      *(undefined1 *)(gp + -0x77c) = 1;
    }
    else {
      if (_DAT_ram_3fcc50c8 < 3) {
        if (_DAT_ram_3fcc50c8 == 0) {
          if (iVar2 != 2) {
            if (iVar2 == 3) {
              if (cVar1 != '\0') {
                return;
              }
              if ((int)(uint)(DAT_ram_3fcc50b1 != '\x01') <= _DAT_ram_3fcc50b8) {
LAB_ram_4201c328:
                if (DAT_ram_3fcc50b1 == '\0') {
                  _DAT_ram_3fcc50c8 = 1;
                  _DAT_ram_3fcc50b4 = 0;
                  *(undefined1 *)(gp + -0x77c) = 1;
                }
                else {
                  _DAT_ram_3fcc50c4 = _DAT_ram_3fcc50c0;
                  iVar2 = FUN_ram_42016760();
                  if (iVar2 != 0) {
                    FUN_ram_4201c2de();
                    return;
                  }
                  _DAT_ram_3fcc50c8 = 2;
                  _DAT_ram_3fcc50b4 = 0;
                  _DAT_ram_3fcc50ac = 0;
                  *(undefined1 *)(gp + -0x77c) = 1;
                }
                FUN_ram_42018dcc();
                return;
              }
              _DAT_ram_3fcc50b8 = _DAT_ram_3fcc50b8 + 1;
            }
            else {
              if (iVar2 != 4) {
                if (iVar2 != 1) {
                  return;
                }
                if (cVar1 == '\0') {
                  return;
                }
                goto LAB_ram_4201c328;
              }
              if (cVar1 != '\0') {
                return;
              }
              if (_DAT_ram_3fcc50b8 < 1) {
                return;
              }
              _DAT_ram_3fcc50b8 = _DAT_ram_3fcc50b8 + -1;
            }
            _DAT_ram_3fcc50b4 = 0;
            goto LAB_ram_4201c6c4;
          }
LAB_ram_4201c6f4:
          if (cVar1 == '\0') {
            return;
          }
          FUN_ram_42018caa(0);
          return;
        }
        if (iVar2 == 2) goto LAB_ram_4201c6f4;
        if (iVar2 == 3) {
          if (cVar1 != '\0') {
            return;
          }
          iVar2 = _DAT_ram_3fcc50c4 + 1;
        }
        else {
          if (iVar2 != 4) {
            if (iVar2 != 1) {
              return;
            }
            if (cVar1 == '\0') {
              return;
            }
            iVar2 = FUN_ram_420160de(_DAT_ram_3fcc50c4 & 0xff);
            if (iVar2 == 0) {
              DAT_ram_3fcc50b1 = '\x01';
              _DAT_ram_3fcc50c0 = _DAT_ram_3fcc50c4;
            }
            iVar2 = FUN_ram_42016760();
            if (iVar2 != 0) goto LAB_ram_4201c7e4;
            _DAT_ram_3fcc50c8 = 2;
            _DAT_ram_3fcc50b4 = 0;
            _DAT_ram_3fcc50ac = 0;
            *(undefined1 *)(gp + -0x77c) = 1;
            goto LAB_ram_4201c6c4;
          }
          if (cVar1 != '\0') {
            return;
          }
          iVar2 = _DAT_ram_3fcc50c4 + 0xf;
        }
        _DAT_ram_3fcc50c4 = iVar2 % 0x10;
      }
      else {
        if (_DAT_ram_3fcc50c8 != 3) {
          return;
        }
        if (iVar2 == 2) goto LAB_ram_4201c6f4;
        if (iVar2 == 3) {
          if (cVar1 != '\0') {
            return;
          }
          uVar3 = _DAT_ram_3fcc50bc - _DAT_ram_3fcc50a8;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0x3c;
          }
          iVar2 = *(int *)(gp + -0x780);
          _DAT_ram_3fcc50bc = 0;
          if (0 < iVar2) {
            iVar4 = (int)((uVar3 & -(uint)((int)uVar3 < iVar2)) + 1) % iVar2;
            if (iVar4 < 0) {
              iVar4 = iVar4 + iVar2;
            }
            _DAT_ram_3fcc50bc = (iVar4 + _DAT_ram_3fcc50a8) % 0x3c;
          }
        }
        else if (iVar2 == 4) {
          if (cVar1 != '\0') {
            return;
          }
          if (DAT_ram_3fcc50b1 != '\0') {
            DAT_ram_3fcc50b0 = DAT_ram_3fcc50b0 ^ 1;
          }
        }
        else {
          if (iVar2 != 1) {
            return;
          }
          if (cVar1 == '\0') {
            return;
          }
          FUN_ram_4201c27e();
        }
      }
      *(undefined1 *)(gp + -0x77c) = 0;
    }
  }
LAB_ram_4201c6c4:
  FUN_ram_42018dcc();
  return;
}

