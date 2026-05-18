
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42052d4c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if (*(int *)(param_1 + 0x14) != 1) {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x10;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if ((param_2 == 0) || ((iVar2 != 4 && (iVar2 != 7)))) {
    if (iVar2 == 1) {
      puVar4 = &DAT_ram_3c079390;
      do {
        for (iVar2 = **(int **)(puVar4 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          if (param_1 == *(int *)(iVar2 + 0x7c)) {
            *(undefined4 *)(iVar2 + 0x7c) = 0;
          }
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != (undefined1 *)0x3c07939c);
      FUN_ram_42052bb0(&DAT_ram_3fcb67c4,param_1);
      FUN_ram_4205151c(3,param_1);
      return 0;
    }
    if (iVar2 == 2) {
      FUN_ram_42052bb0(&DAT_ram_3fcb67c0,param_1);
      DAT_ram_3fcb67ba = 1;
    }
    else {
      if (iVar2 != 0) goto LAB_ram_42052d3e;
      if (*(short *)(param_1 + 0x1a) != 0) {
        iVar2 = _DAT_ram_3fcb67c8;
        if (_DAT_ram_3fcb67c8 == param_1) {
          _DAT_ram_3fcb67c8 = *(int *)(param_1 + 0xc);
        }
        else {
          do {
            iVar3 = iVar2;
            if (iVar3 == 0) goto LAB_ram_42052ccc;
            iVar2 = *(int *)(iVar3 + 0xc);
          } while (*(int *)(iVar3 + 0xc) != param_1);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        }
LAB_ram_42052ccc:
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x78) == 0) && (*(short *)(param_1 + 0x2c) == 0x1680)) {
LAB_ram_42052d3e:
      uVar1 = FUN_ram_42052650(param_1);
      return uVar1;
    }
    FUN_ram_420551d8(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x28),param_1
                     ,param_1 + 4,*(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1c));
    FUN_ram_420527de(param_1);
    iVar2 = _DAT_ram_3fcb67c0;
    if (_DAT_ram_3fcb67c0 == param_1) {
      _DAT_ram_3fcb67c0 = *(int *)(param_1 + 0xc);
    }
    else {
      do {
        iVar3 = iVar2;
        if (iVar3 == 0) goto LAB_ram_42052c6c;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != param_1);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
LAB_ram_42052c6c:
    iVar2 = _DAT_ram_3fcb67d0;
    DAT_ram_3fcb67ba = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar2 == param_1) {
      FUN_ram_420547c0();
      return 0;
    }
  }
  FUN_ram_42052626(param_1);
  return 0;
}

