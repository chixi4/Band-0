
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205504a(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
LAB_ram_42055054:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if ((param_2 == 0) || ((iVar2 != 4 && (iVar2 != 7)))) {
    if (iVar2 == 1) {
      puVar4 = &DAT_ram_3c0f7548;
      do {
        for (iVar2 = *(int *)puVar4[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          if (param_1 == *(int *)(iVar2 + 0x80)) {
            *(undefined4 *)(iVar2 + 0x80) = 0;
          }
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined4 *)&DAT_ram_3c0f7554);
      FUN_ram_42054c00(&DAT_ram_3fcc52f4,param_1);
      if (*(int *)(param_1 + 0x14) != 1) {
        FUN_ram_420531f8(3,param_1);
        return 0;
      }
      goto LAB_ram_42055054;
    }
    if (iVar2 == 2) {
      FUN_ram_42054c00(&DAT_ram_3fcc52f0,param_1);
      DAT_ram_3fcc52ea = 1;
    }
    else {
      if (iVar2 != 0) goto LAB_ram_42055194;
      if (*(short *)(param_1 + 0x1a) != 0) {
        iVar2 = _DAT_ram_3fcc52f8;
        if (_DAT_ram_3fcc52f8 == param_1) {
          _DAT_ram_3fcc52f8 = *(int *)(param_1 + 0xc);
        }
        else {
          do {
            iVar3 = iVar2;
            if (iVar3 == 0) goto LAB_ram_42055118;
            iVar2 = *(int *)(iVar3 + 0xc);
          } while (*(int *)(iVar3 + 0xc) != param_1);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        }
LAB_ram_42055118:
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(short *)(param_1 + 0x2c) == 0x1680)) {
LAB_ram_42055194:
      uVar1 = FUN_ram_4205458e(param_1);
      return uVar1;
    }
    if ((*(ushort *)(param_1 + 0x1e) & 0x10) == 0) goto LAB_ram_42055054;
    FUN_ram_42057d6a(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x28),param_1
                     ,param_1 + 4,*(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1c));
    FUN_ram_42054ba6(param_1);
    iVar2 = _DAT_ram_3fcc52f0;
    if (_DAT_ram_3fcc52f0 == param_1) {
      _DAT_ram_3fcc52f0 = *(int *)(param_1 + 0xc);
    }
    else {
      do {
        iVar3 = iVar2;
        if (iVar3 == 0) goto LAB_ram_420550b8;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != param_1);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
LAB_ram_420550b8:
    iVar2 = _DAT_ram_3fcc5300;
    DAT_ram_3fcc52ea = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar2 == param_1) {
      FUN_ram_4205723a();
      return 0;
    }
  }
  FUN_ram_42054506(param_1);
  return 0;
}

