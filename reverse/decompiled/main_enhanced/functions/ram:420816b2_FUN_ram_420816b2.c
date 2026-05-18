
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420816b2(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc2fd8,0,0x68);
  if (param_1 == 0) {
    FUN_ram_4207a038(1,1,1,&DAT_ram_3c0feb50);
    return 0x102;
  }
  if (*(uint *)(param_1 + 0x90) == 0x1f2f3f4f) {
    if ((*(int *)(param_1 + 4) != 0x2c) || (*(int *)(param_1 + 8) != 1)) {
      FUN_ram_4207a038(1,1,1,&DAT_ram_3c0febbc,0x2c,1);
      return 0x102;
    }
    if (*(uint *)(param_1 + 0x30) - 2 < 0x1f) {
      if ((int)*(uint *)(param_1 + 0x34) < 0x401) {
        uVar4 = *(uint *)(param_1 + 0x38);
        if (uVar4 == 0) {
          if (0x3f < *(uint *)(param_1 + 0x3c) - 1) {
            puVar3 = &DAT_ram_3c0fec58;
            uVar4 = *(uint *)(param_1 + 0x3c);
            goto LAB_ram_4208170e;
          }
        }
        else {
          if (uVar4 != 1) {
            puVar3 = &DAT_ram_3c0fecac;
            goto LAB_ram_4208170e;
          }
          if (0x7f < *(uint *)(param_1 + 0x40) - 1) {
            puVar3 = &DAT_ram_3c0fec80;
            uVar4 = *(uint *)(param_1 + 0x40);
            goto LAB_ram_4208170e;
          }
        }
        uVar2 = *(uint *)(param_1 + 0x74);
        if (uVar2 - 6 < 0x1b) {
          iVar1 = *(int *)(param_1 + 0x54);
          if ((iVar1 == 0) || (*(uint *)(param_1 + 0x68) - 2 < 0x1f)) {
            if (*(uint *)(param_1 + 0x6c) < 2) {
              _DAT_ram_3fcc2fe4 = *(undefined4 *)(param_1 + 0x3c);
              _DAT_ram_3fcc3008 = *(undefined4 *)(param_1 + 0x68);
              _DAT_ram_3fcc2fe8 = *(undefined4 *)(param_1 + 0x40);
              _DAT_ram_3fcc300c = *(undefined4 *)(param_1 + 0x6c);
              _DAT_ram_3fcc302c = *(undefined4 *)(param_1 + 0x44);
              _DAT_ram_3fcc3018 = *(undefined4 *)(param_1 + 0x78);
              _DAT_ram_3fcc3030 = *(undefined4 *)(param_1 + 0x48);
              _DAT_ram_3fcc2fec = *(undefined4 *)(param_1 + 0x4c);
              _DAT_ram_3fcc2ff0 = *(undefined4 *)(param_1 + 0x50);
              _DAT_ram_3fcc2ff8 = *(undefined4 *)(param_1 + 0x58);
              _DAT_ram_3fcc3024 = *(undefined4 *)(param_1 + 0x5c);
              _DAT_ram_3fcc2ffc = (uint)(*(int *)(param_1 + 0x60) != 0);
              _DAT_ram_3fcc3000 = (uint)(*(int *)(param_1 + 100) != 0);
              _DAT_ram_3fcc3010 = *(undefined4 *)(param_1 + 0x70);
              _DAT_ram_3fcc301c = *(undefined4 *)(param_1 + 0x7c);
              DAT_ram_3fcc3020 = *(undefined1 *)(param_1 + 0x80);
              _DAT_ram_3fcc3028 = *(undefined4 *)(param_1 + 0x84);
              _DAT_ram_3fcc3034 = *(undefined4 *)(param_1 + 0x88);
              DAT_ram_3fcc3038 = *(char *)(param_1 + 0x8c);
              if (DAT_ram_3fcc3038 != '\0') {
                _DAT_ram_3fcc2fd8 = *(undefined4 *)(param_1 + 0x30);
                _DAT_ram_3fcc2fdc = *(undefined4 *)(param_1 + 0x34);
                _DAT_ram_3fcc2fe0 = uVar4;
                _DAT_ram_3fcc2ff4 = iVar1;
                _DAT_ram_3fcc3014 = uVar2;
                FUN_ram_4207a038(1,1,2,&DAT_ram_3c101d68);
                return 0;
              }
              _DAT_ram_3fcc2fd8 = *(undefined4 *)(param_1 + 0x30);
              _DAT_ram_3fcc2fdc = *(undefined4 *)(param_1 + 0x34);
              _DAT_ram_3fcc2fe0 = uVar4;
              _DAT_ram_3fcc2ff4 = iVar1;
              _DAT_ram_3fcc3014 = uVar2;
              return 0;
            }
            puVar3 = &DAT_ram_3c0fed0c;
            uVar4 = *(uint *)(param_1 + 0x6c);
          }
          else {
            puVar3 = &DAT_ram_3c0fecf4;
            uVar4 = *(uint *)(param_1 + 0x68);
          }
        }
        else {
          puVar3 = &DAT_ram_3c0fecc4;
          uVar4 = uVar2;
        }
      }
      else {
        puVar3 = &DAT_ram_3c0fec2c;
        uVar4 = *(uint *)(param_1 + 0x34);
      }
    }
    else {
      puVar3 = &DAT_ram_3c0fec04;
      uVar4 = *(uint *)(param_1 + 0x30);
    }
  }
  else {
    puVar3 = &DAT_ram_3c0feb74;
    uVar4 = *(uint *)(param_1 + 0x90);
  }
LAB_ram_4208170e:
  FUN_ram_4207a038(1,1,1,puVar3,uVar4);
  return 0x102;
}

