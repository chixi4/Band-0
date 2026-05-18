
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203a8da(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb3f50,0,0x68);
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,1,1,0x3c07d3f0);
    return 0x102;
  }
  if (*(uint *)(param_1 + 0x90) == 0x1f2f3f4f) {
    if ((*(int *)(param_1 + 4) != 0x2c) || (*(int *)(param_1 + 8) != 1)) {
      FUN_ram_42033fd8(1,1,1,0x3c07d45c,0x2c,1);
      return 0x102;
    }
    if (*(uint *)(param_1 + 0x30) - 2 < 0x1f) {
      if ((int)*(uint *)(param_1 + 0x34) < 0x401) {
        uVar4 = *(uint *)(param_1 + 0x38);
        if (uVar4 == 0) {
          if (0x3f < *(uint *)(param_1 + 0x3c) - 1) {
            uVar3 = 0x3c07d4f8;
            uVar4 = *(uint *)(param_1 + 0x3c);
            goto LAB_ram_4203a936;
          }
        }
        else {
          if (uVar4 != 1) {
            uVar3 = 0x3c07d54c;
            goto LAB_ram_4203a936;
          }
          if (0x7f < *(uint *)(param_1 + 0x40) - 1) {
            uVar3 = 0x3c07d520;
            uVar4 = *(uint *)(param_1 + 0x40);
            goto LAB_ram_4203a936;
          }
        }
        uVar2 = *(uint *)(param_1 + 0x74);
        if (uVar2 - 6 < 0x1b) {
          iVar1 = *(int *)(param_1 + 0x54);
          if ((iVar1 == 0) || (*(uint *)(param_1 + 0x68) - 2 < 0x1f)) {
            if (*(uint *)(param_1 + 0x6c) < 2) {
              _DAT_ram_3fcb3f5c = *(undefined4 *)(param_1 + 0x3c);
              _DAT_ram_3fcb3f80 = *(undefined4 *)(param_1 + 0x68);
              _DAT_ram_3fcb3f60 = *(undefined4 *)(param_1 + 0x40);
              _DAT_ram_3fcb3f84 = *(undefined4 *)(param_1 + 0x6c);
              _DAT_ram_3fcb3fa4 = *(undefined4 *)(param_1 + 0x44);
              _DAT_ram_3fcb3f90 = *(undefined4 *)(param_1 + 0x78);
              _DAT_ram_3fcb3fa8 = *(undefined4 *)(param_1 + 0x48);
              _DAT_ram_3fcb3f64 = *(undefined4 *)(param_1 + 0x4c);
              _DAT_ram_3fcb3f68 = *(undefined4 *)(param_1 + 0x50);
              _DAT_ram_3fcb3f70 = *(undefined4 *)(param_1 + 0x58);
              _DAT_ram_3fcb3f9c = *(undefined4 *)(param_1 + 0x5c);
              _DAT_ram_3fcb3f74 = (uint)(*(int *)(param_1 + 0x60) != 0);
              _DAT_ram_3fcb3f78 = (uint)(*(int *)(param_1 + 100) != 0);
              _DAT_ram_3fcb3f88 = *(undefined4 *)(param_1 + 0x70);
              _DAT_ram_3fcb3f94 = *(undefined4 *)(param_1 + 0x7c);
              DAT_ram_3fcb3f98 = *(undefined1 *)(param_1 + 0x80);
              _DAT_ram_3fcb3fa0 = *(undefined4 *)(param_1 + 0x84);
              _DAT_ram_3fcb3fac = *(undefined4 *)(param_1 + 0x88);
              DAT_ram_3fcb3fb0 = *(char *)(param_1 + 0x8c);
              if (DAT_ram_3fcb3fb0 != '\0') {
                _DAT_ram_3fcb3f50 = *(undefined4 *)(param_1 + 0x30);
                _DAT_ram_3fcb3f54 = *(undefined4 *)(param_1 + 0x34);
                _DAT_ram_3fcb3f58 = uVar4;
                _DAT_ram_3fcb3f6c = iVar1;
                _DAT_ram_3fcb3f8c = uVar2;
                FUN_ram_42033fd8(1,1,2,0x3c07fd68);
                return 0;
              }
              _DAT_ram_3fcb3f50 = *(undefined4 *)(param_1 + 0x30);
              _DAT_ram_3fcb3f54 = *(undefined4 *)(param_1 + 0x34);
              _DAT_ram_3fcb3f58 = uVar4;
              _DAT_ram_3fcb3f6c = iVar1;
              _DAT_ram_3fcb3f8c = uVar2;
              return 0;
            }
            uVar3 = 0x3c07d5ac;
            uVar4 = *(uint *)(param_1 + 0x6c);
          }
          else {
            uVar3 = 0x3c07d594;
            uVar4 = *(uint *)(param_1 + 0x68);
          }
        }
        else {
          uVar3 = 0x3c07d564;
          uVar4 = uVar2;
        }
      }
      else {
        uVar3 = 0x3c07d4cc;
        uVar4 = *(uint *)(param_1 + 0x34);
      }
    }
    else {
      uVar3 = 0x3c07d4a4;
      uVar4 = *(uint *)(param_1 + 0x30);
    }
  }
  else {
    uVar3 = 0x3c07d414;
    uVar4 = *(uint *)(param_1 + 0x90);
  }
LAB_ram_4203a936:
  FUN_ram_42033fd8(1,1,1,uVar3,uVar4);
  return 0x102;
}

