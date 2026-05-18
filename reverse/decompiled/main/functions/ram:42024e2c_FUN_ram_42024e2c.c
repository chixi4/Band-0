
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42024e2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *extraout_a5;
  undefined4 *puVar6;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  iVar1 = _DAT_ram_3fcb693c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puVar6 = &uStack_2c;
  if (_DAT_ram_3fcb6944 != 0) {
    return 0x103;
  }
  if (param_1 == 0) {
    return 0x102;
  }
  if (_DAT_ram_3fcb6938 == -1) {
    _DAT_ram_3fcb6938 = 2;
  }
  else {
    if (_DAT_ram_3fcb6938 == 5) {
      *(undefined4 *)(param_1 + 0x18) = 0x8000;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      goto LAB_ram_42024ea0;
    }
    if (_DAT_ram_3fcb6938 != 2) {
      if (_DAT_ram_3fcb6938 == 0) {
        uVar4 = FUN_ram_420122a2(0);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined2 *)(param_1 + 0x20) = 3000;
        *(uint *)(param_1 + 0x18) = uVar4 / 5;
      }
      goto LAB_ram_42024ea0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = iVar1;
LAB_ram_42024ea0:
  iVar1 = _DAT_ram_3fcb6938;
  puVar5 = (uint *)&DAT_ram_6004d804;
  if (_DAT_ram_3fcb6938 == 2) {
    uVar4 = (40000000U / (uint)(_DAT_ram_3fcb693c * 5) - 1) * 0x10 & 0xff0 |
            _DAT_ram_6004d804 & 0xfffff004 | 4;
    _DAT_ram_6004d804 = _DAT_ram_6004d804 & 0xfffffff4 | 4;
    goto LAB_ram_42024f38;
  }
  if (_DAT_ram_3fcb6938 == 5) goto LAB_ram_42025008;
  if (_DAT_ram_3fcb6938 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  _DAT_ram_6004d804 = _DAT_ram_6004d804 & 0xfffffff1;
  uVar4 = _DAT_ram_6004d804 | 1;
  while( true ) {
    *puVar5 = uVar4;
    uVar4 = *puVar5 & 0xfffff00f;
LAB_ram_42024f38:
    *puVar5 = uVar4;
    _DAT_ram_6004d810 = _DAT_ram_6004d810 & 0xfffffffe | 2;
    iVar2 = FUN_ram_42037852(0x3fcb68e8);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_ram_4203775e();
    FUN_ram_42025786();
    iVar2 = FUN_ram_4202577c();
    if (iVar2 == 0) {
      return 0x102;
    }
    iVar2 = FUN_ram_420378d2();
    if (iVar2 != 0) goto LAB_ram_42025090;
    FUN_ram_42037c2e(param_1,puVar6);
    FUN_ram_420257d8(puVar6);
    iVar3 = FUN_ram_420257fe();
    iVar2 = 0x102;
    if ((iVar3 != 0) || (iVar2 = FUN_ram_42025ade(), iVar2 != 0)) goto LAB_ram_42025090;
    FUN_ram_42025b6c();
    FUN_ram_403a687a();
    puVar6 = (undefined4 *)0x3fcb7000;
    iVar2 = 0x102;
    (**(code **)(_DAT_ram_3fcb6a44 + 8))();
    FUN_ram_4204f602();
    FUN_ram_420b485c(0xb);
    FUN_ram_403949c4(0xb);
    iVar3 = (*(code *)&SUB_ram_40010aac)
                      (
                      "AQF3AQ8ZAAEvA5/SDwgh/vhfAgoCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKv+ACgEPAgCjUAAAAAAA"
                      );
    if ((iVar3 != 0) || (iVar2 = FUN_ram_42037dee(param_1), iVar2 != 0)) goto LAB_ram_42025076;
    iVar2 = FUN_ram_42024d8c(iVar1);
    if (iVar2 != 0) goto LAB_ram_4202506a;
    iVar2 = FUN_ram_4204b8a2(auStack_34,2);
    if (iVar2 == 0) break;
    FUN_ram_4039bf1e();
    puVar5 = extraout_a5;
LAB_ram_42025008:
    *puVar5 = *puVar5 | 8;
    *puVar5 = *puVar5 & 0xfffffffb;
    *puVar5 = *puVar5 & 0xfffffffd;
    uVar4 = *puVar5 & 0xfffffffe;
  }
  (*(code *)&SUB_ram_40011ad0)(auStack_34,6);
  FUN_ram_42037bce(auStack_34);
  _DAT_ram_3fcb6944 = 1;
  iVar2 = FUN_ram_42025d30(0);
  if (iVar2 != 0) {
LAB_ram_4202506a:
    FUN_ram_42025cee();
    FUN_ram_42024dee();
    FUN_ram_420378f0();
LAB_ram_42025076:
    FUN_ram_4204f604();
    FUN_ram_420b48ce(0xb);
    FUN_ram_403a687a();
    (**(code **)(_DAT_ram_3fcb6a44 + 0xc))();
LAB_ram_42025090:
    FUN_ram_42025b36();
    FUN_ram_42025a02();
    FUN_ram_420378e6();
    FUN_ram_42025a7e();
    FUN_ram_420378bc();
  }
  return iVar2;
}

