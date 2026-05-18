
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42024e2c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  iVar4 = _DAT_ram_3fcb693c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
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
        uVar1 = FUN_ram_420122a2(0);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined2 *)(param_1 + 0x20) = 3000;
        *(uint *)(param_1 + 0x18) = uVar1 / 5;
      }
      goto LAB_ram_42024ea0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = iVar4;
LAB_ram_42024ea0:
  iVar4 = _DAT_ram_3fcb6938;
  if (_DAT_ram_3fcb6938 == 2) {
    _DAT_ram_6004d804 =
         (40000000U / (uint)(_DAT_ram_3fcb693c * 5) - 1) * 0x10 & 0xff0 |
         _DAT_ram_6004d804 & 0xfffff004 | 4;
  }
  else {
    if (_DAT_ram_3fcb6938 == 5) {
      _DAT_ram_6004d804 = _DAT_ram_6004d804 & 0xfffffff8 | 8;
    }
    else {
      if (_DAT_ram_3fcb6938 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      _DAT_ram_6004d804 = _DAT_ram_6004d804 & 0xfffffff1 | 1;
    }
    _DAT_ram_6004d804 = _DAT_ram_6004d804 & 0xfffff00f;
  }
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
  if (iVar2 == 0) {
    FUN_ram_42037c2e(param_1,&uStack_2c);
    FUN_ram_420257d8(&uStack_2c);
    iVar3 = FUN_ram_420257fe();
    iVar2 = 0x102;
    if ((iVar3 == 0) && (iVar2 = FUN_ram_42025ade(), iVar2 == 0)) {
      FUN_ram_42025b6c();
      FUN_ram_403a687a();
      iVar2 = 0x102;
      (**(code **)(_DAT_ram_3fcb6a44 + 8))();
      FUN_ram_4204f602();
      FUN_ram_420b485c(0xb);
      FUN_ram_403949c4(0xb);
      iVar3 = (*(code *)&SUB_ram_40010aac)
                        (
                        "AQF3AQ8ZAAEvA5/SDwgh/vhfAgoCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKv+ACgEPAgCjUAAAAAAA"
                        );
      if ((iVar3 == 0) && (iVar2 = FUN_ram_42037dee(param_1), iVar2 == 0)) {
        iVar2 = FUN_ram_42024d8c(iVar4);
        if (iVar2 == 0) {
          iVar4 = FUN_ram_4204b8a2(auStack_34,2);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf1e();
          }
          (*(code *)&SUB_ram_40011ad0)(auStack_34,6);
          FUN_ram_42037bce(auStack_34);
          _DAT_ram_3fcb6944 = 1;
          iVar2 = FUN_ram_42025d30(0);
          if (iVar2 == 0) {
            return 0;
          }
        }
        FUN_ram_42025cee();
        FUN_ram_42024dee();
        FUN_ram_420378f0();
      }
      FUN_ram_4204f604();
      FUN_ram_420b48ce(0xb);
      FUN_ram_403a687a();
      (**(code **)(_DAT_ram_3fcb6a44 + 0xc))();
    }
  }
  FUN_ram_42025b36();
  FUN_ram_42025a02();
  FUN_ram_420378e6();
  FUN_ram_42025a7e();
  FUN_ram_420378bc();
  return iVar2;
}

